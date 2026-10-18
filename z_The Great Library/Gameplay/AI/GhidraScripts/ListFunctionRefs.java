import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import java.io.File;
import java.io.PrintWriter;

public class ListFunctionRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        new File(outDir).mkdirs();
        PrintWriter out = new PrintWriter(new File(outDir, "function_refs.txt"), "UTF-8");
        for (int i = 1; i < args.length; i++) {
            Address requested = currentProgram.getAddressFactory().getAddress(args[i]);
            Function f = getFunctionContaining(requested);
            if (f == null) {
                out.println("NOFUNC " + args[i]);
                continue;
            }
            out.println("FUNCTION " + f.getName() + " @ " + f.getEntryPoint() + " body=" + f.getBody());
            InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
            while (it.hasNext()) {
                Instruction ins = it.next();
                for (Reference ref : ins.getReferencesFrom()) {
                    Function target = getFunctionAt(ref.getToAddress());
                    out.println("  " + ins.getAddress() + " -> " + ref.getToAddress() + " " +
                        ref.getReferenceType() + (target == null ? "" : " FUNC " + target.getName()));
                }
            }
        }
        out.close();
        println("LISTREFS DONE");
    }
}
