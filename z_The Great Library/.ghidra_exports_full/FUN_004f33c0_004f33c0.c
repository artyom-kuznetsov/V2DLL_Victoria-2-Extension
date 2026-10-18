// FUN_004f33c0 @ 004f33c0 body=[[004f33c0, 004f345c] [004f3460, 004f347e] [004f3482, 004f34c8]]


void FUN_004f33c0(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b46550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CStateBuilding::vftable;
  param_1[2] = CStateBuilding::vftable;
  local_8 = 3;
  FUN_004ef470();
  if ((*(char *)(DAT_012588e8 + 0xd1c) != '\0') &&
     (iVar1 = *(int *)(DAT_012588e8 + 0xb24),
     0 < (int)(*(int *)(iVar1 + 0xd84) - *(int *)(iVar1 + 0xd80) & 0xfffffffcU))) {
    cVar2 = (**(code **)(*(int *)**(undefined4 **)(iVar1 + 0xd80) + 0x1c))();
    if (cVar2 != '\0') {
      FUN_006799d0();
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004c1020(param_1 + 0x38);
  if (param_1[0x32] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x32]);
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  iVar1 = DAT_012588e8;
  if (param_1[0x1c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1c]);
  }
  local_8 = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = CSelectable::vftable;
  if (*(char *)(param_1 + 1) != '\0') {
    (**(code **)(**(int **)(iVar1 + 0xb24) + 0xa4))(1);
  }
  ExceptionList = local_10;
  return;
}

