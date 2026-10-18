import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import java.io.File;
import java.io.PrintWriter;

public class DumpMemoryConstants extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        PrintWriter out = new PrintWriter(new File(args[0], "memory_constants.txt"), "UTF-8");
        for (int i = 1; i < args.length; i++) {
            Address a = currentProgram.getAddressFactory().getAddress(args[i]);
            long raw64 = currentProgram.getMemory().getLong(a) & 0xffffffffffffffffL;
            double d = Double.longBitsToDouble(raw64);
            int raw32Value = currentProgram.getMemory().getInt(a);
            float f = Float.intBitsToFloat(raw32Value);
            long q = currentProgram.getMemory().getLong(a) & 0xffffffffffffffffL;
            int raw32 = raw32Value & 0xffffffff;
            out.println(a + "\tdouble=" + d + "\tfloat=" + f + "\thex64=" +
                Long.toHexString(q).toUpperCase() + "\thex32=" + Long.toHexString(raw32).toUpperCase());
        }
        out.close();
        println("CONSTANTS DONE");
    }
}
