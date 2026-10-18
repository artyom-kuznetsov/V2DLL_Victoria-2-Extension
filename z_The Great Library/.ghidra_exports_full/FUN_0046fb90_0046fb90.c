// FUN_0046fb90 @ 0046fb90 body=[[0046fb90, 0046fbeb]]


void FUN_0046fb90(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  
  if (param_2 == 0x1f) {
    iVar1 = in_ECX + 8;
  }
  else {
    if (param_2 != 0x20) {
      FUN_009a0f40();
      return;
    }
    iVar1 = in_ECX + 0xc;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",iVar1);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

