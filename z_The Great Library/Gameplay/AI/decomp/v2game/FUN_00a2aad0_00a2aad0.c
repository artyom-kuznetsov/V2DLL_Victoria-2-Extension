// FUN_00a2aad0 @ 00a2aad0 body=[[00a2aad0, 00a2ab40]]


void FUN_00a2aad0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0x1a) {
    FUN_009a1750(in_ECX + 8,0);
    return;
  }
  if (param_2 != 0x186) {
    if (param_2 != 0x187) {
      FUN_009a0f40();
      return;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x40);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    return;
  }
  FUN_009a1750(in_ECX + 0x24,0);
  return;
}

