// FUN_0072bed0 @ 0072bed0 body=[[0072bed0, 0072bf40]]


void FUN_0072bed0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0x16) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x58);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    return;
  }
  if (param_2 != 0x1a) {
    if (param_2 != 0x344) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    FUN_009a1bb0(in_ECX + 0x5c);
    return;
  }
  FUN_009a1750(in_ECX + 0x3c,0);
  return;
}

