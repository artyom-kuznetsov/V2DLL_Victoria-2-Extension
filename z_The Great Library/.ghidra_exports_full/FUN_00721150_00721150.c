// FUN_00721150 @ 00721150 body=[[00721150, 007211c7] [007211cb, 00721225] [00721229, 00721290] [00721294, 0072137d]]


/* WARNING: Removing unreachable block (ram,0x0072121c) */
/* WARNING: Removing unreachable block (ram,0x00721287) */
/* WARNING: Removing unreachable block (ram,0x007211be) */

void FUN_00721150(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int unaff_EDI;
  void *pvStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4be93;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
  puStack_10 = (undefined1 *)0xffffffff;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x1;
  (**(code **)(*piVar1 + 0x48))();
  pvStack_14 = (void *)0xffffffff;
  FUN_00409350();
  pvStack_14 = (void *)0x2;
  iVar2 = (**(code **)(*piVar1 + 0x4c))();
  (**(code **)(*(int *)(iVar2 + 0x54) + 0x10))();
  FUN_00b31c36();
  iVar2 = FUN_00aae9af();
  if (iVar2 != 0) {
    FUN_0058c170(iVar2,*(undefined4 *)(DAT_012588e8 + 0xb5c),*(undefined4 *)(DAT_012588e8 + 0xb60),
                 *(undefined4 *)(*(int *)(unaff_EDI + 0x6c) + 8));
  }
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))();
  ExceptionList = pvStack_24;
  return;
}

