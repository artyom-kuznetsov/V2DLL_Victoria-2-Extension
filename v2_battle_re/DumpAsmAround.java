import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import java.io.File;
import java.io.PrintWriter;
import java.util.LinkedHashSet;

public class DumpAsmAround extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter w = new PrintWriter(new File(args[0]), "UTF-8");
        String[] targets = { "00e20964", "00e2096c", "00e23bcc", "00e1fdc0" };
        for (String t : targets) {
            Address a = currentProgram.getAddressFactory().getAddress(t);
        Reference[] refArray = getReferencesTo(a);
            LinkedHashSet<Address> seeds = new LinkedHashSet<>();
        for (Reference rr : refArray) {
            seeds.add(rr.getFromAddress());
            }
            w.println("==== target " + t + " refs: " + seeds.size());
            for (Address ref : seeds) {
                w.println("-- around " + ref);
                Address cur = ref;
                for (int back = 0; back < 8 && cur != null; back++) {
                    Instruction prev = getInstructionBefore(cur);
                    if (prev == null) break;
                    cur = prev.getAddress();
                }
                for (int fwd = 0; fwd < 17 && cur != null; fwd++) {
                    Instruction ins = getInstructionAt(cur);
                    if (ins == null) ins = getInstructionContaining(cur);
                    if (ins == null) break;
                    w.println(ins.getAddress() + "  " + ins.toString());
                    cur = ins.getMaxAddress().next();
                }
            }
        }
        w.close();
    }
}
