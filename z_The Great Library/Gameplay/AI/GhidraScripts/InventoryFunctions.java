import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.File;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

public class InventoryFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        String existingDir = args[1];
        Set<String> existing = new HashSet<>();
        File[] files = new File(existingDir).listFiles((d, n) -> n.endsWith(".c"));
        if (files != null) {
            for (File file : files) {
                String name = file.getName();
                if (name.startsWith("FUN_")) existing.add(name.substring(4, 12).toUpperCase());
            }
        }
        new File(outDir).mkdirs();
        PrintWriter all = new PrintWriter(new File(outDir, "all_functions.txt"), "UTF-8");
        PrintWriter real = new PrintWriter(new File(outDir, "real_functions.txt"), "UTF-8");
        PrintWriter missing = new PrintWriter(new File(outDir, "missing_real_functions.txt"), "UTF-8");
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int total = 0;
        int covered = 0;
        int ignored = 0;
        int missingCount = 0;
        while (it.hasNext()) {
            Function f = it.next();
            String ep = f.getEntryPoint().toString();
            String upper = ep.toUpperCase();
            boolean unwind = f.getName().startsWith("Unwin") || upper.compareTo("00B364C0") >= 0;
            all.println(upper + "\t" + f.getName() + "\t" + f.getBody().getNumAddresses());
            if (unwind) {
                ignored++;
            } else {
                real.println(upper + "\t" + f.getName() + "\t" + f.getBody().getNumAddresses());
                if (existing.contains(upper)) covered++;
                else {
                    missing.println(upper + "\t" + f.getName());
                    missingCount++;
                }
            }
            total++;
        }
        all.close();
        real.close();
        missing.close();
        println("INVENTORY total=" + total + " real=" + (total - ignored) + " coveredReal=" + covered +
            " missingReal=" + missingCount + " ignoredUnwind=" + ignored);
    }
}
