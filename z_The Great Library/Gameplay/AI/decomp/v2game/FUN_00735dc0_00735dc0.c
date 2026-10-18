// FUN_00735dc0 @ 00735dc0 body=[[00735dc0, 00735e23] [00735e27, 00735ecc]]


void FUN_00735dc0(void)

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
  FUN_00409350(&DAT_00dfad80,4);
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
  FUN_00737af0(unaff_ESI,piVar1);
  iVar2 = FUN_00735be0(unaff_ESI);
  iVar3 = (*(int *)(unaff_ESI + 0xec) - *(int *)(unaff_ESI + 0xe8)) / 0x18;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  *(int *)(unaff_ESI + 0xd0) = iVar3;
  local_14 = 0;
  if (0 < iVar3) {
    do {
      iVar3 = *piVar1;
      uVar5 = 0;
      uVar4 = FUN_00737810(*(undefined4 *)(unaff_ESI + 0x68));
      (**(code **)(iVar3 + 0x10))(uVar4,uVar5);
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(unaff_ESI + 0xd0));
  }
  (**(code **)(*piVar1 + 0x6c))();
  (**(code **)(*piVar1 + 0x50))();
  ExceptionList = local_10;
  return;
}

