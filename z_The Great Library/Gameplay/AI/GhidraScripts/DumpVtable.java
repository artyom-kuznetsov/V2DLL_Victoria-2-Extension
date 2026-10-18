import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import java.io.File;
import java.io.PrintWriter;

public class DumpVtable extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        Address base = currentProgram.getAddressFactory().getAddress(args[1]);
        int count = Integer.parseInt(args[2]);
        new File(outDir).mkdirs();
        String safe = args[1].replaceAll("[^A-Za-z0-9_-]", "_");
        PrintWriter out = new PrintWriter(new File(outDir, "vtable_" + safe + ".txt"), "UTF-8");
        out.println("VTABLE " + base + " count=" + count);
        for (Reference ref : getReferencesTo(base)) {
            Function caller = getFunctionContaining(ref.getFromAddress());
            out.println("REF " + ref.getFromAddress() + " " + ref.getReferenceType() + " in " +
                (caller == null ? "?" : caller.getName() + " @ " + caller.getEntryPoint()));
        }
        for (int i = 0; i < count; i++) {
            Address slot = base.add(i * 4L);
            int raw = currentProgram.getMemory().getInt(slot);
            Address target = toAddr(raw & 0xffffffffL);
            Function fn = getFunctionAt(target);
            Function containing = getFunctionContaining(target);
            out.println("SLOT " + i + " @" + slot + " -> " + target +
                (fn == null ? (containing == null ? " NOFUNC" : " MID " + containing.getName() + " @ " + containing.getEntryPoint()) :
                    " " + fn.getName()));
        }
        out.close();
        println("DUMPVTABLE DONE " + base);
    }
}
