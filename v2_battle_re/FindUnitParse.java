import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.data.StringDataType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import java.util.TreeSet;
import java.util.LinkedHashSet;
import java.io.File;
import java.io.PrintWriter;
import java.util.TreeSet;

public class FindUnitParse extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args[0]);
        outDir.mkdirs();

        String[] keys = { "reconnaissance", "support", "maneuver", "discipline" };
        TreeSet<Address> funcs = new TreeSet<>();
        for (String key : keys) {
            DataIterator dit = currentProgram.getListing().getDefinedData(true);
            while (dit.hasNext()) {
                Data d = dit.next();
                if (d.hasStringValue() && key.equals(d.getValue())) {
                    for (Reference ref : getReferencesTo(d.getAddress())) {
                        Function f = getFunctionContaining(ref.getFromAddress());
                        if (f != null) {
                            println("KEY '" + key + "' @ " + d.getAddress() + " -> " + f.getName() + " @ " + f.getEntryPoint());
                            funcs.add(f.getEntryPoint());
                        }
                    }
                }
            }
        }
        for (String target : new String[] { "0059b840", "00599910", "0059acc0" }) {
            Address a = currentProgram.getAddressFactory().getAddress(target);
            for (Reference ref : getReferencesTo(a)) {
                Function f = getFunctionContaining(ref.getFromAddress());
                if (f != null) {
                    println("CALLER of " + target + ": " + f.getName() + " @ " + f.getEntryPoint());
                    funcs.add(f.getEntryPoint());
                }
            }
        }
        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);
        LinkedHashSet<Address> todo = new LinkedHashSet<>(funcs);
        for (Address a : todo) {
            Function f = getFunctionAt(a);
            if (f == null) continue;
            DecompileResults res = di.decompileFunction(f, 120, monitor);
            String name = f.getName() + "_" + f.getEntryPoint();
            name = name.replaceAll("[^A-Za-z0-9_.-]", "_");
            File out = new File(outDir, name + ".c");
            try (PrintWriter w = new PrintWriter(out, "UTF-8")) {
                w.println("// " + f.getName(true) + " @ " + f.getEntryPoint());
                if (res != null && res.getDecompiledFunction() != null) {
                    w.println(res.getDecompiledFunction().getC());
                } else {
                    w.println("// decompile failed");
                }
            }
            println("DUMPED " + name);
        }
        di.dispose();
    }
}
