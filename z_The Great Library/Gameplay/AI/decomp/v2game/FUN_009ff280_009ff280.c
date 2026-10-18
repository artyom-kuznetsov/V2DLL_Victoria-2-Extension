// FUN_009ff280 @ 009ff280 body=[[009ff280, 009ff2df]]


void FUN_009ff280(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0x1a) {
    FUN_009a1750(in_ECX + 0x74,0);
    return;
  }
  if (param_2 != 0xd4) {
    if (param_2 != 0xd5) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    FUN_0072d580();
    return;
  }
  FUN_009a1750(in_ECX + 0x90,0);
  return;
}

