// FUN_00931ac0 @ 00931ac0 body=[[00931ac0, 00931b51] [00931b55, 00931b8b]]


void FUN_00931ac0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e7e9;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_1 = CWar::vftable;
  local_8 = 0;
  for (piVar1 = *(int **)(DAT_012588e8 + 0xb3c);
      (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != param_1)); piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  for (piVar1 = *(int **)(DAT_012588e8 + 0xb4c);
      (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != param_1)); piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  if (param_1[0x3b] == 0) {
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_0093d170(*(undefined4 *)param_1[0x38],(undefined4 *)param_1[0x38]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x38]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x3b]);
}

