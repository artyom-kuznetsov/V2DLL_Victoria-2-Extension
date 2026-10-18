// FUN_0088bfd0 @ 0088bfd0 body=[[0088bfd0, 0088c0d9]]


void FUN_0088bfd0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b0d0;
  local_14 = ExceptionList;
  if (((DAT_01258a98 != 0) && (ExceptionList = &local_14, iVar1 = FUN_009c1d40(), iVar1 != 0)) &&
     (piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xbd4)
     , piVar2 != (int *)0x0)) {
    while (*piVar2 != iVar1) {
      piVar2 = (int *)piVar2[2];
      if (piVar2 == (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
    if (*(int *)(iVar1 + 0x88) != 0) {
      uVar3 = FUN_005b6140();
      FUN_005cbcc0(uVar3);
    }
    for (piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                           0xbd4); (piVar2 != (int *)0x0 && (*piVar2 != iVar1));
        piVar2 = (int *)piVar2[2]) {
    }
    FUN_005f2ae0(piVar2);
  }
  ExceptionList = local_14;
  return;
}

