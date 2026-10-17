import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.File;
import java.io.PrintWriter;

public class ExportCreatedFunction extends GhidraScript {
    public void run() throws Exception {
        String[] a = getScriptArgs();
        String outDir = a[0];
        new File(outDir).mkdirs();
        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);
        for (int i=1; i<a.length; i++) {
            Address at = currentProgram.getAddressFactory().getAddress(a[i]);
            disassemble(at);
            Function f = getFunctionAt(at);
            if (f == null) f = createFunction(at, null);
            if (f == null) { println("NOCREATE " + at); continue; }
            println("FUNC " + f.getName() + " @ " + f.getEntryPoint());
            DecompileResults r = di.decompileFunction(f, 240, monitor);
            String c = (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) ? r.getDecompiledFunction().getC() : "// FAILED";
            String n = f.getName() + "_" + f.getEntryPoint().toString().toLowerCase() + ".created.c";
            try (PrintWriter w = new PrintWriter(new File(outDir, n), "UTF-8")) { w.println("// created at " + at); w.print(c); }
        }
        di.dispose();
        println("DONE");
    }
}