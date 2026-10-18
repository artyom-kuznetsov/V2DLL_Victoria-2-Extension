// FUN_007710d0 @ 007710d0 body=[[007710d0, 00771392] [00771396, 00771503]]


/* WARNING: Removing unreachable block (ram,0x00771389) */

void FUN_007710d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb9d59;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(int *)(in_ECX + 0x5c0) != 0) {
    ExceptionList = &pvStack_14;
    (**(code **)(**(int **)(in_ECX + 0x5c4) + 8))();
    iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    if (*(char *)(iVar3 + 0x34) == '\0') {
      iVar3 = FUN_00aae9af();
      uStack_c = 0;
      if (iVar3 != 0) {
        (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
        (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
        FUN_00a069a0();
      }
    }
    else {
      iVar3 = FUN_00aae9af();
      uStack_c = 1;
      if (iVar3 != 0) {
        (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
        FUN_00408ed0();
        uStack_c._0_1_ = 2;
        iVar5 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
        FUN_00408ed0(iVar5 + 0x134,0,0xffffffff);
        uStack_c._0_1_ = 3;
        iVar5 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
        uStack_c = CONCAT31(uStack_c._1_3_,1);
        FUN_00a06450(iVar3,iVar5 + 0x134);
      }
    }
    uStack_c = 0xffffffff;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x5c0) + 0x38) + 0x18))();
  }
  iVar3 = FUN_00aae9af();
  uStack_c = 4;
  if (iVar3 != 0) {
    (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    FUN_0072ba30();
  }
  uStack_c = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))();
  uVar1 = *(undefined4 *)(in_ECX + 0x2ec);
  FUN_00408ed0();
  uVar2 = DAT_01259abc;
  puStack_10 = (undefined1 *)0x5;
  FUN_00408ed0();
  *(undefined4 *)(in_ECX + 0x2ec) = uVar1;
  *(undefined4 *)(in_ECX + 0x2f0) = 0x2d2d2d;
  *(undefined1 *)(in_ECX + 0x2f8) = 0;
  *(undefined4 *)(in_ECX + 0x2f4) = 0;
  *(undefined1 *)(in_ECX + 0x2f9) = 1;
  puStack_10 = (undefined1 *)0xffffffff;
  *(undefined4 *)(in_ECX + 0x2fc) = 0;
  *(undefined1 *)(in_ECX + 0x300) = 0;
  *(undefined4 *)(in_ECX + 0x304) = uVar2;
  (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  FUN_009af9f0();
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  (**(code **)(*piVar4 + 8))();
  iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0xc))();
  if (DAT_012589ac != 0) {
    FUN_00772120();
  }
  iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
  (**(code **)(**(int **)(iVar3 + 0xe4) + 0x10))();
  (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
  FUN_0063ef30();
  iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
  (**(code **)(**(int **)(iVar3 + 0xe4) + 0x10))();
  *(undefined4 *)(in_ECX + 0x180) = 0;
  iVar3 = *(int *)(in_ECX + 4);
  if (*(int *)(in_ECX + 0x5c0) == 0) {
    iVar5 = FUN_00475500();
    *(undefined1 *)(iVar5 + 0x165) = 0;
    (**(code **)(**(int **)(*(int *)(iVar3 + 0x74c) + *(int *)(iVar3 + 0x75c) * 4) + 0xc))();
    *(undefined4 *)(iVar3 + 0x75c) = 0;
    piVar4 = (int *)**(undefined4 **)(iVar3 + 0x74c);
  }
  else {
    iVar5 = FUN_00475500();
    *(undefined1 *)(iVar5 + 0x165) = 0;
    (**(code **)(**(int **)(*(int *)(iVar3 + 0x74c) + *(int *)(iVar3 + 0x75c) * 4) + 0xc))();
    *(undefined4 *)(iVar3 + 0x75c) = 5;
    piVar4 = *(int **)(*(int *)(iVar3 + 0x74c) + 0x14);
  }
  (**(code **)(*piVar4 + 4))();
  (**(code **)(**(int **)(*(int *)(iVar3 + 0x74c) + *(int *)(iVar3 + 0x75c) * 4) + 8))();
  if (*(int *)(*(int *)(iVar3 + 0x1b4) + 0x20) != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 0x1b4) + 0x20) + 0x18) + 0x38))();
  }
  ExceptionList = (void *)0x0;
  return;
}

