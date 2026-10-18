import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import java.io.File;
import java.io.PrintWriter;

public class ExportLargeFunction extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        new File(outDir).mkdirs();
        DecompInterface di = new DecompInterface();
        DecompileOptions options = new DecompileOptions();
        options.setMaxPayloadMBytes(128);
        options.setMaxInstructions(1000000);
        options.setMaxJumpTableEntries(100000);
        di.setOptions(options);
        di.openProgram(currentProgram);
        for (int i = 1; i < args.length; i++) {
            Address ep = currentProgram.getAddressFactory().getAddress(args[i]);
            Function f = getFunctionContaining(ep);
            if (f == null) { println("NOFUNC " + args[i]); continue; }
            DecompileResults result = di.decompileFunction(f, 600, monitor);
            String code = "// " + f.getName() + " @ " + f.getEntryPoint() + " body=" + f.getBody() + "\n\n";
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                code += result.getDecompiledFunction().getC();
                println("OK " + f.getEntryPoint() + " chars=" + code.length());
            } else {
                code += "// DECOMPILE FAILED: " + (result == null ? "null" : result.getErrorMessage()) + "\n";
                println("FAILED " + f.getEntryPoint());
            }
            String base = "FUN_" + f.getEntryPoint() + "_" + f.getEntryPoint();
            try (PrintWriter w = new PrintWriter(new File(outDir, base + ".c"), "UTF-8")) { w.print(code); }
            StringBuilder callers = new StringBuilder();
            for (Reference ref : getReferencesTo(f.getEntryPoint())) {
                Function caller = getFunctionContaining(ref.getFromAddress());
                callers.append(ref.getFromAddress()).append('\t').append(ref.getReferenceType())
                    .append('\t').append(caller == null ? "?" : caller.getName() + " @ " + caller.getEntryPoint()).append('\n');
            }
            try (PrintWriter w = new PrintWriter(new File(outDir, base + ".c.callers.txt"), "UTF-8")) { w.print(callers); }
        }
        di.dispose();
        println("LARGE EXPORT DONE");
    }
}
