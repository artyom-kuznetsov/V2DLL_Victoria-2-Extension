// FUN_004c0af0 @ 004c0af0 body=[[004c0af0, 004c0b4c] [004c0b74, 004c0b86]]


int FUN_004c0af0(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4cfd1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x278) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_00955450(param_2,in_ECX);
    }
    param_2 = param_2 + 0x278;
  }
  ExceptionList = local_10;
  return param_2;
}

