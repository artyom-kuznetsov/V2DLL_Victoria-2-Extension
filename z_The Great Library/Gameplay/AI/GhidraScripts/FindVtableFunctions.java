import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import java.io.File;
import java.io.PrintWriter;

public class FindVtableFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        String needle = args[1];
        new File(outDir).mkdirs();
        PrintWriter out = new PrintWriter(new File(outDir, "vtables_" + needle.replaceAll("[^A-Za-z0-9_-]", "_") + ".txt"), "UTF-8");
        SymbolIterator symbols = currentProgram.getSymbolTable().getAllSymbols(true);
        while (symbols.hasNext()) {
            Symbol symbol = symbols.next();
            if (!symbol.getName().toLowerCase().contains(needle.toLowerCase())) {
                continue;
            }
            Address base = symbol.getAddress();
            out.println("SYMBOL " + symbol.getName(true) + " @ " + base);
            for (Reference ref : getReferencesTo(base)) {
                Function caller = getFunctionContaining(ref.getFromAddress());
                out.println("  REF " + ref.getFromAddress() + " " + ref.getReferenceType() + " in " +
                    (caller == null ? "?" : caller.getName() + " @ " + caller.getEntryPoint()));
            }
            for (int i = 0; i < 64; i++) {
                Address slot = base.add(i * 4L);
                int raw = currentProgram.getMemory().getInt(slot);
                Address target = toAddr(raw);
                Function fn = getFunctionAt(target);
                if (fn != null || (raw >= 0x00400000 && raw <= 0x00ffffff)) {
                    out.println("  SLOT " + i + " @" + slot + " -> " + target +
                        (fn == null ? " (nofunc)" : " " + fn.getName()));
                }
            }
        }
        out.close();
        println("FINDVTABLE DONE " + needle);
    }
}
