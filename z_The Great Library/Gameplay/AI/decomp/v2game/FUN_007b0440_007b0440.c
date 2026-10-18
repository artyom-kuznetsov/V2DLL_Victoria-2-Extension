// FUN_007b0440 @ 007b0440 body=[[007b0440, 007b0542]]


void FUN_007b0440(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = param_2 - in_EAX >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
    FUN_008a88d0();
    FUN_007b0720(iVar1 * 8 + in_EAX);
    FUN_008a88d0();
    FUN_007b0720(iVar1 * 4 + param_1);
    FUN_008a88d0();
    FUN_007b0720(param_2);
    FUN_008a88d0();
    FUN_007b0720(param_2 + iVar1 * -4);
    return;
  }
  FUN_008a88d0();
  FUN_007b0720(param_2);
  return;
}

