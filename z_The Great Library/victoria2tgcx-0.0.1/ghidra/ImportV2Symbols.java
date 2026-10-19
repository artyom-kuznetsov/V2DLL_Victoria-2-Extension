// Imports the Symbols/ CSVs from Victoria2-Reverse-Engineering (functions.csv,
// globals.csv) as functions and labels, with the repo's note as a comment.
// structs.csv is not imported: the offsets go into the types by hand (docs/technical-plan.md).
//
// Headless use: -postScript ImportV2Symbols.java <Symbols folder>
// GUI use:      Script Manager > V2RE > ImportV2Symbols (asks for the folder).
//@category V2RE

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.List;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class ImportV2Symbols extends GhidraScript {

	private int ok, renamed, created, failed;

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		File dir = args.length > 0 ? new File(args[0])
				: askDirectory("The repo's Symbols folder", "Import");

		importFunctions(new File(dir, "functions.csv"));
		importGlobals(new File(dir, "globals.csv"));

		println(String.format("ImportV2Symbols: %d rows OK (%d functions created, %d renamed), %d failed",
			ok, created, renamed, failed));
	}

	// va,name,conf,area,src,note
	private void importFunctions(File f) throws Exception {
		for (String[] r : readCsv(f)) {
			try {
				Address a = toAddr(r[0]);
				Function fn = getFunctionAt(a);
				if (fn == null) {
					disassemble(a);
					fn = createFunction(a, r[1]);
					if (fn == null) {
						throw new Exception("could not create the function");
					}
					created++;
				}
				else if (!fn.getName().equals(r[1])) {
					fn.setName(r[1], SourceType.IMPORTED);
					renamed++;
				}
				setPlateComment(a, String.format("[V2RE %s/%s] %s: %s", r[2], r[4], r[3], r[5]));
				ok++;
			}
			catch (Exception e) {
				failed++;
				printerr("functions.csv " + r[0] + " " + r[1] + ": " + e.getMessage());
			}
		}
	}

	// va,name,kind,conf,src,note
	private void importGlobals(File f) throws Exception {
		for (String[] r : readCsv(f)) {
			try {
				Address a = toAddr(r[0]);
				createLabel(a, r[1], true, SourceType.IMPORTED);
				setEOLComment(a, String.format("[V2RE %s/%s] %s %s", r[3], r[4], r[2], r[5]));
				ok++;
			}
			catch (Exception e) {
				failed++;
				printerr("globals.csv " + r[0] + " " + r[1] + ": " + e.getMessage());
			}
		}
	}

	// Minimal CSV: commas, double quotes and "" inside a field. Skips the header.
	private static List<String[]> readCsv(File f) throws Exception {
		List<String[]> rows = new ArrayList<>();
		try (BufferedReader in = new BufferedReader(new FileReader(f))) {
			String line = in.readLine();
			while ((line = in.readLine()) != null) {
				if (line.isBlank()) {
					continue;
				}
				List<String> cells = new ArrayList<>();
				StringBuilder cur = new StringBuilder();
				boolean quoted = false;
				for (int i = 0; i < line.length(); i++) {
					char c = line.charAt(i);
					if (quoted) {
						if (c == '"' && i + 1 < line.length() && line.charAt(i + 1) == '"') {
							cur.append('"');
							i++;
						}
						else if (c == '"') {
							quoted = false;
						}
						else {
							cur.append(c);
						}
					}
					else if (c == '"') {
						quoted = true;
					}
					else if (c == ',') {
						cells.add(cur.toString());
						cur.setLength(0);
					}
					else {
						cur.append(c);
					}
				}
				cells.add(cur.toString());
				while (cells.size() < 6) {
					cells.add("");
				}
				rows.add(cells.toArray(new String[0]));
			}
		}
		return rows;
	}
}
