import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
public class DumpDwords extends GhidraScript {
 public void run() throws Exception {
  Address a=currentProgram.getAddressFactory().getAddress(getScriptArgs()[0]);
  int n=Integer.parseInt(getScriptArgs()[1]);
  for(int i=0;i<n;i++){Address x=a.add(i*4); println(x+" "+Integer.toHexString(currentProgram.getMemory().getInt(x)&0xffffffff));}
  println("DONE");
 }
}