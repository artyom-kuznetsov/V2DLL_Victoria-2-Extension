// Find only native support evaluator call patterns; no whole-program decompile.
// Derived instruction output is written to the private RE directory (R8).
//@category V2RE
import java.io.PrintWriter;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Function;
public class tgcx_FindSupportCalls extends GhidraScript {
    public void run() throws Exception {
        try (PrintWriter out = new PrintWriter(getScriptArgs()[0], "UTF-8")) {
            for (Instruction i : currentProgram.getListing().getInstructions(true)) {
                if (!i.getMnemonicString().equals("LEA")) continue;
                String s = i.toString();
                if (!s.matches("LEA ECX,\\[[A-Z]+ \\+ 0x(50|80|b0|e0)\\]")) continue;
                Instruction next = i;
                boolean found = false;
                for (int n = 0; n < 12 && next != null; n++, next = next.getNext()) {
                    if (next.toString().matches(".*\\[E[A-Z]+ \\+ 0x18\\].*")) found = true;
                    if (next.getMnemonicString().equals("CALL")) break;
                }
                if (!found) continue;
                Function f = getFunctionContaining(i.getAddress());
                out.println("FUNCTION " + (f == null ? "?" : f.getEntryPoint()));
                next = i;
                for (int n = 0; n < 14 && next != null; n++, next = next.getNext())
                    out.println(next.getAddress() + " " + next);
            }
        }
    }
}
