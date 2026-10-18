// FUN_0047d4a0 @ 0047d4a0 body=[[0047d4a0, 0047d4f0]]


void FUN_0047d4a0(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  
  if (param_2 == 0xb) {
    iVar1 = in_ECX + 8;
  }
  else {
    if (param_2 != 0x344) {
      return;
    }
    iVar1 = in_ECX + 0xc;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",iVar1);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

