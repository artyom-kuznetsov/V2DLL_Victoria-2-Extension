import java.io.PrintWriter;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Instruction;
public class tgcx_FindRendererCalls extends GhidraScript {
 public void run() throws Exception {
  try(PrintWriter out=new PrintWriter(getScriptArgs()[0],"UTF-8")) {
   Instruction i=getInstructionAt(toAddr(0x009941e0));int count=0;
   while(i!=null && i.getAddress().getOffset()<0x0099f000 && count<32) {
    String s=i.toString();
    if((s.contains("+ 0x44]") || s.contains("+ 0xa8]"))) {
     out.println(i.getAddress()+" "+s+" IN "+getFunctionContaining(i.getAddress()));count++;
    }
    i=i.getNext();
   }
  }
 }
}
