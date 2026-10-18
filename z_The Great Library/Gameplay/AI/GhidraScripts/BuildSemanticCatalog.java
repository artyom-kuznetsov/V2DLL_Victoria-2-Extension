import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.Symbol;
import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

public class BuildSemanticCatalog extends GhidraScript {
    static class Row {
        String address;
        String name;
        long size;
        long inCalls;
        long outCalls;
        String primary = "Unclassified";
        String tags = "";
        Set<String> symbols = new LinkedHashSet<>();
        Set<String> strings = new LinkedHashSet<>();
        Set<Address> callees = new LinkedHashSet<>();
        Map<String, Double> scores = new TreeMap<>();
    }

    private Map<Address, Integer> inbound = new HashMap<>();
    private Map<Address, Set<Address>> callersByTarget = new HashMap<>();

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        new File(outDir).mkdirs();
        Listing listing = currentProgram.getListing();
        List<Row> rows = new ArrayList<>();

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            Address ep = f.getEntryPoint();
            String upper = ep.toString().toUpperCase();
            if (f.getName().startsWith("Unwin") || upper.compareTo("00B364C0") >= 0) continue;
            Row row = new Row();
            row.address = upper;
            row.name = f.getName();
            row.size = f.getBody().getNumAddresses();
            InstructionIterator instructions = listing.getInstructions(f.getBody(), true);
            while (instructions.hasNext()) {
                Instruction ins = instructions.next();
                for (Reference ref : ins.getReferencesFrom()) {
                    Address target = ref.getToAddress();
                    RefType type = ref.getReferenceType();
                    if (type.isCall()) {
                        row.outCalls++;
                        Function targetFunction = getFunctionAt(target);
                        if (targetFunction != null) {
                            Address targetEp = targetFunction.getEntryPoint();
                            inbound.merge(targetEp, 1, Integer::sum);
                            callersByTarget.computeIfAbsent(targetEp, key -> new LinkedHashSet<>()).add(ep);
                            row.callees.add(targetEp);
                        }
                    }
                    Symbol symbol = getSymbolAt(target);
                    if (symbol != null) {
                        String symbolName = symbol.getName(true);
                        if (symbolName != null && symbolName.length() > 1) addBounded(row.symbols, symbolName);
                    }
                    Data data = listing.getDefinedDataAt(target);
                    if (data != null && data.hasStringValue()) {
                        Object value = data.getValue();
                        if (value instanceof String) addBounded(row.strings, (String) value);
                    }
                }
            }
            classify(row);
            rows.add(row);
        }

        for (Row row : rows) {
            Integer count = inbound.get(toAddr(row.address));
            row.inCalls = count == null ? 0 : count;
        }

        Map<String, Row> byAddress = new HashMap<>();
        for (Row row : rows) byAddress.put(row.address, row);
        for (Row row : rows) {
            if (!row.primary.startsWith("Unclassified")) {
                for (Address callee : row.callees) {
                    Row child = byAddress.get(callee.toString().toUpperCase());
                    if (child != null && child.primary.startsWith("Unclassified")) {
                        vote(child.scores, row.primary, 1.0 / Math.sqrt(Math.max(1, row.outCalls)));
                    }
                }
            }
            Set<Address> callers = callersByTarget.get(toAddr(row.address));
            if (callers == null) continue;
            for (Address callerAddress : callers) {
                Row caller = byAddress.get(callerAddress.toString().toUpperCase());
                if (caller == null || caller.primary.startsWith("Unclassified") ||
                    row.primary.startsWith("Unclassified")) continue;
                vote(caller.scores, row.primary, 1.0 / Math.sqrt(Math.max(1, row.inCalls)));
            }
        }
        for (Row row : rows) {
            if (!row.primary.startsWith("Unclassified") || row.scores.isEmpty()) continue;
            List<Map.Entry<String, Double>> ranked = new ArrayList<>(row.scores.entrySet());
            ranked.sort(Map.Entry.<String, Double>comparingByValue().reversed());
            double best = ranked.get(0).getValue();
            double second = ranked.size() > 1 ? ranked.get(1).getValue() : 0.0;
            if (best >= 0.05 && best >= second * 1.35) {
                row.primary = "Graph:" + ranked.get(0).getKey();
                row.tags = row.tags.isEmpty() ? "callgraph" : row.tags + ",callgraph";
            }
        }

        rows.sort(Comparator.comparing(a -> a.address));
        try (PrintWriter out = new PrintWriter(new File(outDir, "function_semantic_catalog.tsv"), "UTF-8")) {
            out.println("address\tname\tsize\tinCalls\toutCalls\tprimaryCategory\ttags\tsymbols\tstrings");
            for (Row row : rows) {
                out.println(row.address + "\t" + tsv(row.name) + "\t" + row.size + "\t" + row.inCalls + "\t" +
                    row.outCalls + "\t" + tsv(row.primary) + "\t" + tsv(row.tags) + "\t" + tsv(join(row.symbols, 10)) +
                    "\t" + tsv(join(row.strings, 10)));
            }
        }

        Map<String, Integer> counts = new HashMap<>();
        for (Row row : rows) counts.merge(row.primary, 1, Integer::sum);
        List<String> categories = new ArrayList<>(counts.keySet());
        Collections.sort(categories);
        try (PrintWriter out = new PrintWriter(new File(outDir, "function_semantic_summary.tsv"), "UTF-8")) {
            out.println("category\tfunctions");
            for (String category : categories) out.println(category + "\t" + counts.get(category));
        }

        List<Row> unclassified = new ArrayList<>();
        for (Row row : rows) if (row.primary.startsWith("Unclassified")) unclassified.add(row);
        unclassified.sort((a, b) -> Long.compare(b.size, a.size));
        try (PrintWriter out = new PrintWriter(new File(outDir, "largest_unclassified_functions.tsv"), "UTF-8")) {
            out.println("address\tname\tsize\tinCalls\toutCalls\tsymbols\tstrings");
            int n = Math.min(200, unclassified.size());
            for (int i = 0; i < n; i++) {
                Row row = unclassified.get(i);
                out.println(row.address + "\t" + tsv(row.name) + "\t" + row.size + "\t" + row.inCalls + "\t" +
                    row.outCalls + "\t" + tsv(join(row.symbols, 12)) + "\t" + tsv(join(row.strings, 12)));
            }
        }
        println("SEMANTIC CATALOG functions=" + rows.size() + " categories=" + counts.size() +
            " unclassified=" + unclassified.size());
    }

    private void addBounded(Set<String> set, String value) {
        if (value == null) return;
        value = value.replace('\t', ' ').replace('\r', ' ').replace('\n', ' ').trim();
        if (value.length() > 180) value = value.substring(0, 177) + "...";
        if (value.length() > 0) set.add(value);
    }

    private String join(Set<String> values, int limit) {
        List<String> list = new ArrayList<>(values);
        if (list.size() > limit) {
            List<String> reduced = list.subList(0, limit);
            return String.join(" | ", reduced) + " | ...";
        }
        return String.join(" | ", list);
    }

    private String tsv(String value) {
        return value == null ? "" : value.replace('\t', ' ').replace('\r', ' ').replace('\n', ' ');
    }

    private void vote(Map<String, Double> scores, String category, double weight) {
        scores.merge(category, weight, Double::sum);
    }

    private void classify(Row row) {
        Set<String> tags = new TreeSet<>();
        String lowerName = row.name.toLowerCase();
        StringBuilder evidence = new StringBuilder();
        for (String value : row.symbols) evidence.append(' ').append(value.toLowerCase());
        for (String value : row.strings) evidence.append(' ').append(value.toLowerCase());
        String evidenceText = evidence.toString();

        if (hit(evidenceText, "gui|button|window|tooltip|icon|view|slider|layout|font|cursor|mapmode|music|sound|sfx")) tags.add("UI");
        if (hit(evidenceText, "ai|cai|plan|goal|focus|foreignminister|colonize|researchai|aioption")) tags.add("AI");
        if (hit(evidenceText, "army|navy|unit|brigade|combat|battle|siege|movement|reinforce|transport|leader|fort|retreat|war_plan")) tags.add("Military");
        if (hit(evidenceText, "country|diplomacy|war|peace|alliance|wargoal|relations|crisis|sphere|cb_|justify|annex|liberate")) tags.add("Diplomacy");
        if (hit(evidenceText, "pop|needs|migration|assimilation|literacy|consciousness|militancy|rebel|ideology|crime|unemployment|promotion|demote")) tags.add("POP");
        if (hit(evidenceText, "province|state|colony|rgo|occupation|core|terrain|supply|infrastructure|crim")) tags.add("Province");
        if (hit(evidenceText, "factory|market|goods|trade|price|budget|treasury|tax|tariff|loan|bank|employ|production|construction|subsid")) tags.add("Economy");
        if (hit(evidenceText, "tech|invention|research")) tags.add("Technology");
        if (hit(evidenceText, "event|decision|trigger|effect|scope|mtth|option")) tags.add("Scripting");
        if (hit(evidenceText, "reform|party|election|upper_house|lower_house|social|political|vote|ideology")) tags.add("Politics");
        if (hit(evidenceText, "save|load|checksum|network|multiplayer|session|sync|command|serialize|deserialize")) tags.add("EngineNet");
        if (lowerName.contains("gui") || lowerName.contains("button") || lowerName.contains("window") ||
            lowerName.contains("view") || lowerName.contains("tooltip") || lowerName.contains("music")) tags.add("UI");
        if (lowerName.contains("ai")) tags.add("AI");

        if (tags.contains("UI")) row.primary = "UI";
        else if (tags.contains("AI")) row.primary = "AI";
        else if (tags.contains("Military")) row.primary = "Military";
        else if (tags.contains("Diplomacy")) row.primary = "Diplomacy";
        else if (tags.contains("POP")) row.primary = "POP";
        else if (tags.contains("Scripting")) row.primary = "Scripting";
        else if (tags.contains("Economy")) row.primary = "Economy";
        else if (tags.contains("Province")) row.primary = "Province";
        else if (tags.contains("Technology")) row.primary = "Technology";
        else if (tags.contains("Politics")) row.primary = "Politics";
        else if (tags.contains("EngineNet")) row.primary = "EngineNet";
        else if (hasMeaningfulEvidence(row)) row.primary = "Unclassified with evidence";
        else row.primary = "Unclassified";

        row.tags = String.join(",", tags);
    }

    private boolean hit(String text, String regex) {
        return java.util.regex.Pattern.compile(regex).matcher(text).find();
    }

    private boolean hasMeaningfulEvidence(Row row) {
        if (!row.strings.isEmpty()) return true;
        for (String symbol : row.symbols) {
            if (symbol.contains("::") || symbol.contains("vftable") || symbol.startsWith("C") ||
                symbol.toLowerCase().contains("province") || symbol.toLowerCase().contains("country") ||
                symbol.toLowerCase().contains("army") || symbol.toLowerCase().contains("navy")) return true;
        }
        return false;
    }
}
