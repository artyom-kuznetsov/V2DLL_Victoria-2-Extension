// Decompiles the requested functions and writes the pseudo-C to a text file.
// For looking at individual functions without opening the GUI (output for the
// report, not for git: it is derived from the executable, R8).
//
// Headless use: -process v2game.exe -noanalysis -readOnly
//               -postScript DecompileAt.java <output.txt> <VA> [<VA> ...]
//@category V2RE

import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;

public class DecompileAt extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		DecompInterface di = new DecompInterface();
		di.openProgram(currentProgram);
		try (PrintWriter w = new PrintWriter(args[0], "UTF-8")) {
			for (int i = 1; i < args.length; i++) {
				for (String va : args[i].split(",")) {
					Function f = getFunctionContaining(toAddr(va));
					if (f == null) {
						w.println("// " + va + ": no function");
						continue;
					}
					DecompileResults r = di.decompileFunction(f, 120, monitor);
					w.println("// ===== " + f.getName() + " @ " + f.getEntryPoint());
					w.println(r.decompileCompleted() ? r.getDecompiledFunction().getC() : "// failed: " + r.getErrorMessage());
				}
			}
		}
		di.dispose();
	}
}
