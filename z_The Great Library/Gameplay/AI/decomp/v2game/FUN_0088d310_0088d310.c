// FUN_0088d310 @ 0088d310 body=[[0088d310, 0088d360]]


void FUN_0088d310(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  
  if (param_2 == 0xb) {
    iVar1 = in_ECX + 0x20;
  }
  else {
    if (param_2 != 0x3c0) {
      return;
    }
    iVar1 = in_ECX + 0x24;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",iVar1);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

