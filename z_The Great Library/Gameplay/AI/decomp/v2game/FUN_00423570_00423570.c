// FUN_00423570 @ 00423570 body=[[00423570, 00423689] [0042368d, 0042369f]]


undefined1 * FUN_00423570(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30 [5];
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b52049;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  iVar1 = DAT_012588e8;
  local_8 = 0;
  local_14 = 1;
  if (1 < (param_2[1] - *param_2) / 0x1c) {
    *param_1 = 0;
    FUN_00409350("Invalid arguments count.",0x18);
    ExceptionList = local_10;
    return param_1;
  }
  *param_1 = 1;
  iVar2 = (**(code **)(**(int **)(iVar1 + 0xb24) + 0x170))();
  iVar4 = param_2[1] - *param_2;
  iVar1 = iVar4 >> 0x1f;
  if (iVar4 / 0x1c + iVar1 == iVar1) {
    uVar3 = FUN_00423ec0(*(undefined4 *)(iVar2 + 0x48),local_30);
    local_8 = 1;
    FUN_00408ed0(uVar3,0,0xffffffff);
  }
  else {
    uVar3 = FUN_00423d50(local_30,*param_2);
    local_8 = 2;
    FUN_00408ed0(uVar3,0,0xffffffff);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

