// Lists every function that references the given addresses (as a data
// reference or an immediate operand), and that function's callers, to find
// who constructs a class from its vtable. Output for the report, not for git
// content derived from the executable (R8).
//
// Headless use: -process v2game.exe -noanalysis -readOnly
//               -postScript tgcx_FindRefs.java <output.txt> <VA> [<VA> ...]
//@category V2RE

import java.io.PrintWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;

public class tgcx_FindRefs extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		try (PrintWriter w = new PrintWriter(args[0], "UTF-8")) {
			for (int i = 1; i < args.length; i++) {
				w.println("== " + args[i]);
				long target;
				if (args[i].startsWith("s:")) {
					// a NUL-terminated string: search its first occurrence
					Address a = find(null, (args[i].substring(2) + "\0").getBytes("US-ASCII"));
					if (a == null) { w.println("  string not found"); continue; }
					target = a.getOffset();
					w.println("  string at " + a);
				} else {
					target = Long.decode(args[i]);
				}
				for (Reference r : getReferencesTo(toAddr(target))) {
					if (getInstructionAt(r.getFromAddress()) != null) continue;
					w.println("  data ref from " + r.getFromAddress());
					// neighbouring dwords, for a vtable slot
					for (int k = -16; k <= 16; k++) {
						Address a = r.getFromAddress().add(4L * k);
						w.println(String.format("    %+d %s %08X", k, a, getInt(a)));
					}
				}
				InstructionIterator it = currentProgram.getListing().getInstructions(true);
				while (it.hasNext() && !monitor.isCancelled()) {
					Instruction ins = it.next();
					boolean hit = false;
					for (int op = 0; op < ins.getNumOperands() && !hit; op++) {
						for (Object o : ins.getOpObjects(op)) {
							if (o instanceof Scalar && ((Scalar) o).getUnsignedValue() == target) hit = true;
							if (o instanceof Address && ((Address) o).getOffset() == target) hit = true;
						}
					}
					if (!hit) continue;
					Function f = getFunctionContaining(ins.getAddress());
					w.println("  " + ins.getAddress() + "  " + ins + "  in " + (f == null ? "?" : f.getName() + "@" + f.getEntryPoint()));
					if (f == null) continue;
					for (Reference r : getReferencesTo(f.getEntryPoint())) {
						Function c = getFunctionContaining(r.getFromAddress());
						w.println("      caller " + r.getFromAddress() + " " + r.getReferenceType() + " in " + (c == null ? "?" : c.getName() + "@" + c.getEntryPoint()));
					}
				}
			}
		}
	}
}
