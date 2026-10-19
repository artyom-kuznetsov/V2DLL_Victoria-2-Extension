// Read-only bounded disassembly; private output stays outside git (R8).
//@category V2RE
import java.io.PrintWriter;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;
public class tgcx_InspectRanges extends GhidraScript {
    public void run() throws Exception {
        String[] args=getScriptArgs();
        try(PrintWriter out=new PrintWriter(args[0], "UTF-8")) {
            for(int n=1;n+1<args.length;n+=2) {
                Address start=toAddr(args[n]),end=toAddr(args[n+1]);
                if(end.subtract(start)>0x1000) throw new IllegalArgumentException("Range exceeds subsystem bound");
                Instruction i=getInstructionContaining(start);
                if(i==null) i=getInstructionAfter(start);
                while(i!=null && i.getAddress().compareTo(end)<=0) {
                    out.println(i.getAddress()+" "+i);i=i.getNext();
                }
            }
        }
    }
}
