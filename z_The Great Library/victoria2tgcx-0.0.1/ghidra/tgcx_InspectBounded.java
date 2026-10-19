// Read-only, bounded instruction/vtable/reference inspection for DLL-1/HEMI-1.
//@category V2RE
import java.io.PrintWriter;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
public class tgcx_InspectBounded extends GhidraScript {
    public void run() throws Exception {
        String[] args=getScriptArgs();
        try(PrintWriter out=new PrintWriter(args[0], "UTF-8")) {
            for(int n=1;n<args.length;n++) {
                Address a=toAddr(args[n]); out.println("=== "+a);
                for(Reference r:getReferencesTo(a)) out.println("REF "+r);
                Instruction i=getInstructionAt(a);
                if(i!=null) for(int k=0;k<110&&i!=null;k++,i=i.getNext()) out.println(i.getAddress()+" "+i);
                else for(int k=0;k<65;k++) {
                    int ptr=currentProgram.getMemory().getInt(a.add(k*4));
                    out.printf("+%X %08X %s%n",k*4,ptr,getFunctionAt(toAddr(Integer.toUnsignedLong(ptr))));
                }
            }
        }
    }
}
