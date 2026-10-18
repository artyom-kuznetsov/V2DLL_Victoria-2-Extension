import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class FindRttiVtable extends GhidraScript {
    private Memory memory;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        String needle = args[1];
        memory = currentProgram.getMemory();
        new File(outDir).mkdirs();
        PrintWriter out = new PrintWriter(new File(outDir, "rtti_" + needle.replaceAll("[^A-Za-z0-9_-]", "_") + ".txt"), "UTF-8");
        for (Address nameAddr : findStrings(".?AV" + needle)) {
            Address typeDescriptor = nameAddr.subtract(8L);
            out.println("NAME " + nameAddr + " TYPE_DESCRIPTOR " + typeDescriptor);
            for (Address colField : findPointer(typeDescriptor)) {
                Address col = colField.subtract(12L);
                int signature = memory.getInt(col);
                int tdOffset = memory.getInt(col.add(4L));
                int cdOffset = memory.getInt(col.add(8L));
                Address td = toAddr(memory.getInt(col.add(12L)) & 0xffffffffL);
                Address classDescriptor = toAddr(memory.getInt(col.add(16L)) & 0xffffffffL);
                Address self = toAddr(memory.getInt(col.add(20L)) & 0xffffffffL);
                if (signature != 0 || tdOffset != 0 || !td.equals(typeDescriptor)) {
                    out.println("  SKIP TD_POINTER " + colField + " candidate COL " + col +
                        " signature=" + signature + " tdOffset=" + tdOffset + " td=" + td);
                    continue;
                }
                out.println("  COL " + col + " classDescriptor=" + classDescriptor + " self=" + self);
                for (Address metaPointer : findPointer(col)) {
                    Address vftable = metaPointer.add(4L);
                    out.println("    VFTABLE " + vftable + " metaPointer=" + metaPointer);
                    for (int i = 0; i < 32; i++) {
                        Address slot = vftable.add(i * 4L);
                        Address target = toAddr(memory.getInt(slot) & 0xffffffffL);
                        Function fn = getFunctionAt(target);
                        Function containing = getFunctionContaining(target);
                        out.println("      SLOT " + i + " -> " + target +
                            (fn == null ? (containing == null ? " NOFUNC" : " MID " + containing.getName()) : " " + fn.getName()));
                    }
                }
            }
        }
        out.close();
        println("FINDRTTI DONE " + needle);
    }

    private List<Address> findStrings(String exact) throws Exception {
        List<Address> result = new ArrayList<>();
        for (MemoryBlock block : memory.getBlocks()) {
            if (!block.isInitialized()) continue;
            byte[] bytes = (exact + "@@").getBytes("US-ASCII");
            Address current = block.getStart();
            while (current.compareTo(block.getEnd()) <= 0) {
                Address hit = memory.findBytes(current, bytes, null, true, monitor);
                if (hit == null || hit.compareTo(block.getEnd()) > 0) break;
                result.add(hit);
                current = hit.add(1L);
            }
        }
        return result;
    }

    private List<Address> findPointer(Address target) throws Exception {
        long value = target.getOffset();
        byte[] bytes = new byte[] { (byte)value, (byte)(value >> 8), (byte)(value >> 16), (byte)(value >> 24) };
        List<Address> result = new ArrayList<>();
        for (MemoryBlock block : memory.getBlocks()) {
            if (!block.isInitialized()) continue;
            Address current = block.getStart();
            while (current.compareTo(block.getEnd()) <= 0) {
                Address hit = memory.findBytes(current, bytes, null, true, monitor);
                if (hit == null || hit.compareTo(block.getEnd()) > 0) break;
                result.add(hit);
                current = hit.add(1L);
            }
        }
        return result;
    }
}
