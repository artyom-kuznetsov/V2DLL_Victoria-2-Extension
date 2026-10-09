import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import java.io.File;
import java.io.PrintWriter;

public class DumpRawBytes extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter w = new PrintWriter(new File(args[0]), "UTF-8");
        Memory mem = currentProgram.getMemory();
        for (int i = 1; i + 1 < args.length; i += 2) {
            Address a = currentProgram.getAddressFactory().getAddress(args[i]);
            int len = Integer.parseInt(args[i + 1]);
            w.println("==== " + a + " len " + len);
            byte[] buf = new byte[len];
            mem.getBytes(a, buf);
            StringBuilder hex = new StringBuilder();
            for (byte b : buf) hex.append(String.format("%02X ", b));
            w.println(hex);
        }
        w.close();
        println("RAW DUMPED");
    }
}
