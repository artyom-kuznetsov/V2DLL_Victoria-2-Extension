// FUN_0045e210 @ 0045e210 body=[[0045e210, 0045e24e] [0045e252, 0045e265] [0045e269, 0045e283] [0045e287, 0045e2a1] [0045e2a5, 0045e2c4]]


void FUN_0045e210(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  int local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pvVar2 = ExceptionList;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b3b139;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNewsGenSelectorDefinition::vftable;
  piVar1 = param_1 + 0x10;
  if (piVar1 != local_20) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (0xf < (uint)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[9]);
  }
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (0xf < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = pvVar2;
  return;
}

