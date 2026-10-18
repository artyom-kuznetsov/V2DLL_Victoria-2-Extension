import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class FindPointerBytes extends GhidraScript {
    public void run() throws Exception {
        String target = getScriptArgs()[0];
        Address ta = currentProgram.getAddressFactory().getAddress(target);
        long v = ta.getOffset();
        byte[] pat = new byte[4];
        pat[0]=(byte)v; pat[1]=(byte)(v>>8); pat[2]=(byte)(v>>16); pat[3]=(byte)(v>>24);
        Memory mem = currentProgram.getMemory();
        for (MemoryBlock b : mem.getBlocks()) {
            if (!b.isInitialized()) continue;
            Address cur = b.getStart();
            while (cur.compareTo(b.getEnd()) <= 0) {
                Address hit = mem.findBytes(cur, pat, null, true, monitor);
                if (hit == null || hit.compareTo(b.getEnd()) > 0) break;
                println("HIT " + hit + " block " + b.getName());
                cur = hit.add(1);
            }
        }
        println("DONE");
    }
}