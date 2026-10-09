import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

public class FindCallers extends GhidraScript {

    @Override
    public void run() throws Exception {
        for (String t : getScriptArgs()) {
            Address a = currentProgram.getAddressFactory().getAddress(t);
            println("==== refs to " + t);
            for (Reference ref : getReferencesTo(a)) {
                Function f = getFunctionContaining(ref.getFromAddress());
                println("  from " + ref.getFromAddress() + " type " + ref.getReferenceType()
                    + " in " + (f == null ? "?" : f.getName() + " @ " + f.getEntryPoint()));
            }
        }
    }
}
