// FUN_00a027e0 @ 00a027e0 body=[[00a027e0, 00a0283a]]


void FUN_00a027e0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0xd8) {
    FUN_009a1750(in_ECX + 0x78,0);
    return;
  }
  if (param_2 != 0xdc) {
    if (param_2 != 0xeb) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    FUN_0045be80(param_1,in_ECX + 0x3c);
    return;
  }
  FUN_0072d580();
  return;
}

