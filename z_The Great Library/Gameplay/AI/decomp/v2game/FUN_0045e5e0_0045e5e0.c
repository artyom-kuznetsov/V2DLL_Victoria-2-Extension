// FUN_0045e5e0 @ 0045e5e0 body=[[0045e5e0, 0045e61e] [0045e622, 0045e640] [0045e644, 0045e663] [0045e669, 0045e680] [0045e686, 0045e699] [0045e69f, 0045e6b3] [0045e6b9, 0045e6d4] [0045e6da, 0045e6f6] [0045e6fc, 0045e718]]


void FUN_0045e5e0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  pvVar4 = ExceptionList;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b3b0ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNewsGenArticleDefinition::vftable;
  if (param_1 + 0x11 != local_20) {
    iVar3 = param_1[0x11];
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar3);
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  piVar1 = param_1 + 0x15;
  if (piVar1 != local_20) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  piVar2 = param_1 + 0x19;
  if (piVar2 != local_20) {
    if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar2);
    }
    *piVar2 = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar2);
  }
  *piVar2 = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (param_1[0x11] == 0) {
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    if (0xf < (uint)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[9]);
    }
    param_1[0xe] = 0xf;
    param_1[0xd] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    if ((uint)param_1[7] < 0x10) {
      param_1[7] = 0xf;
      param_1[6] = 0;
      *(undefined1 *)(param_1 + 2) = 0;
      ExceptionList = pvVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x11]);
}

