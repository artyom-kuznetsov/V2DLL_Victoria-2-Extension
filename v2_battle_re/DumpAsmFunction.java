import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import java.io.File;
import java.io.PrintWriter;

public class DumpAsmFunction extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter w = new PrintWriter(new File(args[0]), "UTF-8");
        for (int i = 1; i < args.length; i++) {
            Address a = currentProgram.getAddressFactory().getAddress(args[i]);
            Function f = getFunctionAt(a);
            if (f == null) {
                w.println("==== NO FUNCTION AT " + a);
                continue;
            }
            w.println("==== " + f.getName() + " @ " + f.getEntryPoint() + " .. " + f.getBody().getMaxAddress());
            Instruction ins = getInstructionAt(f.getEntryPoint());
            while (ins != null && f.getBody().contains(ins.getAddress())) {
                StringBuilder line = new StringBuilder(ins.getAddress().toString());
                line.append("  ");
                for (byte b : ins.getBytes()) {
                    line.append(String.format("%02X ", b));
                }
                line.append("  ").append(ins.toString());
                w.println(line);
                ins = getInstructionAfter(ins.getAddress());
            }
        }
        w.close();
        println("ASM DUMPED to " + args[0]);
    }
}
