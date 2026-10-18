// FUN_0084fd10 @ 0084fd10  (requested 0084FD10, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_0084fd10(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  local_14 = ExceptionList;
  iVar4 = DAT_01258a94;
  if (param_2 < 0x1269) {
    iVar4 = DAT_01258a98;
  }
  ExceptionList = &local_14;
  if ((iVar4 == 0) || (ExceptionList = &local_14, iVar4 = FUN_009c1d40(), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -8;
    if ((iVar4 != 0) && (cVar3 = FUN_005cc3e0(), cVar3 != '\0')) {
      ExceptionList = local_14;
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  for (piVar5 = *(int **)(iVar1 + 0x90); (piVar5 != (int *)0x0 && (*piVar5 != param_1));
      piVar5 = (int *)piVar5[2]) {
  }
  FUN_005f2ae0();
  piVar5 = (int *)(iVar1 + 0x8c);
  *piVar5 = *piVar5 - *(int *)(param_1 + 0x3c);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0x94);
    piVar5 = (int *)FUN_00aae9af();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = param_1;
      piVar5[1] = iVar1;
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 3) = 0;
    }
    iVar2 = *(int *)(iVar4 + 0x98);
    *(int **)(iVar4 + 0x94) = piVar5;
    *(int *)(iVar4 + 0x98) = iVar2 + 1;
    if (iVar2 == 0) {
      *(int **)(iVar4 + 0x90) = piVar5;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
    *(int *)(param_1 + 0x78) = iVar4;
    *(int *)(iVar4 + 0x8c) = *(int *)(iVar4 + 0x8c) + *(int *)(param_1 + 0x3c);
  }
  iVar4 = FUN_00aae9af();
  local_c = 0;
  if (iVar4 != 0) {
    FUN_005e1ee0(iVar4);
  }
  local_c = 0xffffffff;
  iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))();
  ExceptionList = local_14;
  return;
}

