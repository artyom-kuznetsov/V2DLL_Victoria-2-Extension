import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import java.io.File;
import java.io.PrintWriter;

public class DisasmDll extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter w = new PrintWriter(new File(args[0]), "UTF-8");
        Memory mem = currentProgram.getMemory();
        for (int i = 1; i + 1 < args.length; i += 2) {
            Address a = currentProgram.getAddressFactory().getAddress(args[i]);
            int len = Integer.parseInt(args[i + 1]);
            w.println("==== " + a + " len " + len);
            Address cur = a;
            Address end = a.add(len);
            while (cur != null && cur.compareTo(end) < 0) {
                disassemble(cur);
                Instruction ins = getInstructionAt(cur);
                if (ins == null) {
                    ins = getInstructionContaining(cur);
                }
                if (ins == null) {
                    w.println(cur + "  (no instruction)");
                    break;
                }
                w.println(ins.getAddress() + "  " + ins.toString());
                cur = ins.getMaxAddress().next();
            }
        }
        w.close();
        println("DLL DISASM DUMPED");
    }
}
