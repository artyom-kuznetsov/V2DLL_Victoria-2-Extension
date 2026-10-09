import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.File;
import java.io.PrintWriter;
import java.util.LinkedHashSet;

public class DumpCombat extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args[0]);
        outDir.mkdirs();

        LinkedHashSet<Function> work = new LinkedHashSet<>();
        for (int i = 1; i < args.length; i++) {
            Address a = currentProgram.getAddressFactory().getAddress(args[i]);
            Function f = getFunctionAt(a);
            if (f == null) {
                f = getFunctionContaining(a);
            }
            if (f == null) {
                println("NO_FUNCTION at " + a);
                continue;
            }
            work.add(f);
            for (Function callee : f.getCalledFunctions(monitor)) {
                work.add(callee);
            }
            for (Function caller : f.getCallingFunctions(monitor)) {
                work.add(caller);
            }
        }

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);

        for (Function f : work) {
            DecompileResults res = di.decompileFunction(f, 120, monitor);
            String name = f.getName() + "_" + f.getEntryPoint();
            name = name.replaceAll("[^A-Za-z0-9_.-]", "_");
            File out = new File(outDir, name + ".c");
            try (PrintWriter w = new PrintWriter(out, "UTF-8")) {
                w.println("// " + f.getName(true) + " @ " + f.getEntryPoint());
                if (res != null && res.getDecompiledFunction() != null) {
                    w.println(res.getDecompiledFunction().getC());
                } else {
                    w.println("// decompile failed: " + (res == null ? "null" : res.getErrorMessage()));
                }
            }
            println("DUMPED " + name);
        }
        di.dispose();
    }
}

