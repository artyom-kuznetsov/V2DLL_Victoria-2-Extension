// FUN_00490f70 @ 00490f70 body=[[00490f70, 00490ff0] [00490ff4, 00491016]]


void FUN_00490f70(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b5b703;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CConstruction::vftable;
  param_1[0xc] = CConstruction::vftable;
  local_8 = 1;
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x15])(1);
  }
  iVar1 = DAT_012588e8;
  local_8 = local_8 & 0xffffff00;
  param_1[0xc] = CSelectable::vftable;
  if (*(char *)(param_1 + 0xd) != '\0') {
    (**(code **)(**(int **)(iVar1 + 0xb24) + 0xa4))(1);
  }
  *param_1 = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}

