// FUN_0044be50 @ 0044be50 body=[[0044be50, 0044beea]]


void FUN_0044be50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3;
  if (iVar1 < DAT_0125a5b8 - DAT_0125a5b4 >> 2) {
    FUN_00401000(0x3f000000);
    FUN_00b31c00();
    do {
      FUN_0044ed90();
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0125a5b8 - DAT_0125a5b4 >> 2);
  }
  return;
}

