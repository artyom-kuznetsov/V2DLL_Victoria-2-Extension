// FUN_00a6f020 @ 00a6f020 body=[[00a6f020, 00a6f07c]]


void FUN_00a6f020(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x2e) {
    FUN_009a1e10();
    return;
  }
  if (param_2 != 0x4b) {
    if (param_2 != 0xbf) {
      FUN_009ecfa0(param_1,param_2);
      return;
    }
    FUN_009a1750(in_ECX + 0x74,0);
    return;
  }
  FUN_009a1e10();
  return;
}

