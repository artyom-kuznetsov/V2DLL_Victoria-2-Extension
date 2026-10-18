import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Reference;
import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class ExportMissingBatch extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        String existingDir = args[1];
        int start = Integer.parseInt(args[2]);
        int count = Integer.parseInt(args[3]);
        int timeoutSeconds = Integer.parseInt(args[4]);
        new File(outDir).mkdirs();

        Set<String> existing = new HashSet<>();
        File[] files = new File(existingDir).listFiles((d, n) -> n.endsWith(".c"));
        if (files != null) {
            for (File file : files) {
                String name = file.getName();
                if (name.startsWith("FUN_") && name.length() >= 12) {
                    existing.add(name.substring(4, 12).toUpperCase());
                }
            }
        }

        List<Function> batch = new ArrayList<>();
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int seen = 0;
        while (it.hasNext()) {
            Function f = it.next();
            Address ep = f.getEntryPoint();
            String addr = ep.toString();
            if (f.getName().startsWith("Unwin") || addr.toUpperCase().compareTo("00B364C0") >= 0) continue;
            if (existing.contains(addr.toUpperCase())) continue;
            if (seen >= start && batch.size() < count) batch.add(f);
            seen++;
        }

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);
        int done = 0;
        int failed = 0;
        for (Function f : batch) {
            Address ep = f.getEntryPoint();
            String base = "FUN_" + ep.toString() + "_" + ep.toString();
            int budget = Math.max(2, Math.min(timeoutSeconds, (int) (f.getBody().getNumAddresses() / 1000) + 2));
            DecompileResults result = di.decompileFunction(f, budget, monitor);
            String code = "// " + f.getName() + " @ " + ep + " body=" + f.getBody() + "\n\n";
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                code += result.getDecompiledFunction().getC();
            } else {
                failed++;
                code += "// DECOMPILE FAILED: " + (result == null ? "null" : result.getErrorMessage()) + "\n";
            }
            try (PrintWriter w = new PrintWriter(new File(outDir, base + ".c"), "UTF-8")) { w.print(code); }
            StringBuilder callers = new StringBuilder();
            for (Reference ref : getReferencesTo(ep)) {
                Function caller = getFunctionContaining(ref.getFromAddress());
                callers.append(ref.getFromAddress()).append('\t').append(ref.getReferenceType())
                    .append('\t').append(caller == null ? "?" : caller.getName() + " @ " + caller.getEntryPoint())
                    .append('\n');
            }
            try (PrintWriter w = new PrintWriter(new File(outDir, base + ".c.callers.txt"), "UTF-8")) { w.print(callers); }
            done++;
            if (done % 100 == 0) println("BATCH " + start + " progress=" + done + "/" + batch.size() + " failed=" + failed);
        }
        di.dispose();
        println("BATCH DONE start=" + start + " exported=" + done + " failed=" + failed + " seenMissing=" + seen);
    }
}
