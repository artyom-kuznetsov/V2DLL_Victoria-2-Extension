// Prints the instructions (address, bytes, text) in the requested VA ranges.
// Output for the report, not for git (R8).
//
// Headless use: -process v2game.exe -noanalysis -readOnly
//               -postScript tgcx_Disasm.java <output.txt> <startVA>-<endVA> [...]
//@category V2RE

import java.io.PrintWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;

public class tgcx_Disasm extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		try (PrintWriter w = new PrintWriter(args[0], "UTF-8")) {
			for (int i = 1; i < args.length; i++) {
				String[] r = args[i].split("-");
				Address end = toAddr(r[1]);
				w.println("== " + args[i]);
				Instruction ins = getInstructionAt(toAddr(r[0]));
				if (ins == null) ins = getInstructionAfter(toAddr(r[0]));
				while (ins != null && ins.getAddress().compareTo(end) < 0) {
					StringBuilder b = new StringBuilder();
					for (byte x : ins.getBytes()) b.append(String.format("%02X", x & 0xFF));
					w.println(ins.getAddress() + "  " + String.format("%-20s", b) + " " + ins);
					ins = ins.getNext();
				}
			}
		}
	}
}
