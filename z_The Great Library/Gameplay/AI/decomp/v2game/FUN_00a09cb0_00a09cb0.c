// FUN_00a09cb0 @ 00a09cb0 body=[[00a09cb0, 00a09cf3]]


void FUN_00a09cb0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0xe8) {
    FUN_009a1750(in_ECX + 0x3c,0);
    return;
  }
  if (param_2 != 0xe9) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  FUN_009a1750(in_ECX + 0x58,0);
  return;
}

