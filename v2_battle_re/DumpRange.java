import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.File;
import java.io.PrintWriter;

public class DumpRange extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Address start = currentProgram.getAddressFactory().getAddress(args[0]);
        Address end = currentProgram.getAddressFactory().getAddress(args[1]);
        File outDir = new File(args[2]);
        outDir.mkdirs();

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);

        AddressSet set = new AddressSet(start, end);
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(set, true);
        int n = 0;
        while (it.hasNext()) {
            Function f = it.next();
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
            n++;
        }
        println("DUMPED " + n + " functions to " + outDir);
        di.dispose();
    }
}
