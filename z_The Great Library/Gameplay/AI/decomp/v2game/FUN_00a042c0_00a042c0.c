// FUN_00a042c0 @ 00a042c0 body=[[00a042c0, 00a04318]]


void FUN_00a042c0(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0xd8) {
    FUN_009a1750(in_ECX + 0x5c,0);
    return;
  }
  if (param_2 != 0xd9) {
    if (param_2 != 0xe0) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    FUN_009a1750(in_ECX + 0x40,0);
    return;
  }
  FUN_009a1bb0(in_ECX + 0x3c);
  return;
}

