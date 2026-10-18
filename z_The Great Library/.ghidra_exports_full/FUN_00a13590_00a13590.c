// FUN_00a13590 @ 00a13590 body=[[00a13590, 00a13644]]


void FUN_00a13590(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  
  if (param_2 == 0x2e) {
    iVar1 = in_ECX + 0x40;
  }
  else {
    if (param_2 == 0xdc) {
      FUN_0072d580();
      return;
    }
    if (param_2 != 0x117) {
      if (param_2 == 0x1a) {
        FUN_009a1750(in_ECX + 0x74,0);
        return;
      }
      if (param_2 != 0xd9) {
        FUN_009a2620(param_1,param_2);
        return;
      }
      FUN_009a1c10();
      *(undefined4 *)(in_ECX + 0x3c) = 0;
      return;
    }
    iVar1 = in_ECX + 0x70;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",iVar1);
  if (iVar1 != 0) {
    return;
  }
  FUN_009a1140();
  return;
}

