import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import java.io.File;
import java.io.PrintWriter;

public class DumpDisassemblyRange extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        Address start = currentProgram.getAddressFactory().getAddress(args[1]);
        Address end = currentProgram.getAddressFactory().getAddress(args[2]);
        new File(outDir).mkdirs();
        PrintWriter out = new PrintWriter(new File(outDir, "disasm_" + start.toString() + "_" + end.toString() + ".txt"), "UTF-8");
        InstructionIterator it = currentProgram.getListing().getInstructions(new AddressSet(start, end), true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            out.println(ins.getAddress() + "\t" + ins.toString());
        }
        out.close();
        println("DISASM DONE");
    }
}
