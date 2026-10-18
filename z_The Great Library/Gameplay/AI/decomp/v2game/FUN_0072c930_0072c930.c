// FUN_0072c930 @ 0072c930 body=[[0072c930, 0072c9d7]]


void FUN_0072c930(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 < 0x41) {
    if (param_2 == 0x40) {
      FUN_0072d580();
      FUN_009a2620(param_1,0x40);
      return;
    }
    if (param_2 == 0x16) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x58);
      if (iVar1 != 0) {
        return;
      }
      FUN_009a1140();
      return;
    }
    if (param_2 == 0x1a) {
      FUN_009a1750(in_ECX + 0x3c,0);
      return;
    }
  }
  else if (param_2 == 0x344) {
    FUN_009a1bb0(in_ECX + 0x5c);
    return;
  }
  FUN_009a2620(param_1,param_2);
  return;
}

