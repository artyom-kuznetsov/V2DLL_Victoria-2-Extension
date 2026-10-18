// FUN_007360e0 @ 007360e0 body=[[007360e0, 00736143] [00736147, 007361eb]]


void FUN_007360e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  undefined4 uVar5;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("queue",5);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x60) + 0x7c))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  (**(code **)(*piVar1 + 0x54))();
  FUN_00737a10(unaff_ESI,piVar1);
  iVar2 = FUN_00735cd0(unaff_ESI);
  iVar3 = (*(int *)(unaff_ESI + 0xfc) - *(int *)(unaff_ESI + 0xf8)) / 0x28;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  *(int *)(unaff_ESI + 0xd4) = iVar3;
  local_14 = 0;
  if (0 < iVar3) {
    do {
      iVar3 = *piVar1;
      uVar5 = 0;
      uVar4 = FUN_00737730(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x68));
      (**(code **)(iVar3 + 0x10))(uVar4,uVar5);
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(unaff_ESI + 0xd4));
  }
  (**(code **)(*piVar1 + 0x6c))();
  (**(code **)(*piVar1 + 0x50))();
  ExceptionList = local_10;
  return;
}

