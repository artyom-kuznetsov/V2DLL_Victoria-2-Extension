// FUN_00a35cf0 @ 00a35cf0 body=[[00a35cf0, 00a35d61]]


void FUN_00a35cf0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 == 0xb) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 8);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    return;
  }
  if (param_2 != 0x1a) {
    if (param_2 != 0xeb) {
      FUN_009a0f40();
      return;
    }
    FUN_005e5a20(param_1,in_ECX + 0x28);
    return;
  }
  FUN_009a1750(in_ECX + 0xc,0);
  return;
}

