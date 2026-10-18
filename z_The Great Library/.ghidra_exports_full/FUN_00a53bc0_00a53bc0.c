// FUN_00a53bc0 @ 00a53bc0 body=[[00a53bc0, 00a53c94]]


void FUN_00a53bc0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < 0x167) {
    if (param_2 == 0x166) {
      FUN_009a1bb0(in_ECX + 0x84);
      return;
    }
    if (param_2 == 0x2e) {
      FUN_009a1e10();
      return;
    }
    if (param_2 == 0x59) {
      FUN_009a1750(in_ECX + 100,0);
      return;
    }
  }
  else {
    if (param_2 == 0x191) {
      FUN_009a1ce0();
      *(undefined4 *)(in_ECX + 0x80) = 0;
      return;
    }
    if (param_2 == 0x1ba) {
      FUN_009a1bb0(in_ECX + 0x85);
      return;
    }
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

