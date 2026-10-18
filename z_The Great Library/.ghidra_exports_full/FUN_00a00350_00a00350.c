// FUN_00a00350 @ 00a00350 body=[[00a00350, 00a003aa]]


void FUN_00a00350(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x1a) {
    FUN_009a1750(in_ECX + 0x74,0);
    return;
  }
  if (param_2 != 0xe8) {
    if (param_2 != 0xe9) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    FUN_009a1750(in_ECX + 0x58,0);
    return;
  }
  FUN_009a1750(in_ECX + 0x3c,0);
  return;
}

