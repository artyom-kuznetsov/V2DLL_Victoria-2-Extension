// FUN_00425270 @ 00425270 body=[[00425270, 00425446] [0042544a, 00425543] [00425547, 00425587]]


undefined4 * FUN_00425270(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_ECX;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b53de7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCrisis::vftable;
  param_1[3] = param_2;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = *in_ECX;
  param_1[6] = in_ECX[1];
  param_1[7] = *param_3;
  param_1[8] = param_3[1];
  param_1[9] = 0x2d2d2d;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_1c = 0x2d2d2d;
  param_1[0x17] = 0x2d2d2d;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  local_8 = 6;
  uStack_7 = 0;
  param_1[0x2a] = 43800000;
  param_1[0x2a] = DAT_01259abc;
  param_1[0x2b] = 43800000;
  param_1[0x2b] = DAT_01259abc;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("colonial_competition",0x14);
  local_8 = 7;
  uVar1 = local_8;
  local_8 = 7;
  if (DAT_0131acac == 0) {
    iVar3 = FUN_00aae9af(0x20);
    local_8 = 8;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0090cca0();
    }
    local_8 = 7;
    FUN_0090d9d0(uVar4);
    uVar1 = local_8;
  }
  local_8 = uVar1;
  iVar3 = DAT_0131acac;
  piVar5 = (int *)FUN_0090da40(local_38);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)**(undefined4 **)(iVar3 + 0xc);
  }
  local_1c = 0x2d2d2d;
  local_8 = 6;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  if ((piVar5 != (int *)0x0) && (cVar2 = (**(code **)(*piVar5 + 0x1c))(), cVar2 != '\0')) {
    FUN_0042c2f0();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("colonial_competition",0x14);
  local_8 = 9;
  uVar1 = local_8;
  local_8 = 9;
  if (DAT_0131acac == 0) {
    iVar3 = FUN_00aae9af(0x20);
    local_8 = 10;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0090cca0();
    }
    local_8 = 9;
    FUN_0090d9d0(uVar4);
    uVar1 = local_8;
  }
  local_8 = uVar1;
  iVar3 = DAT_0131acac;
  piVar5 = (int *)FUN_0090da40(local_38);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)**(undefined4 **)(iVar3 + 0xc);
  }
  local_1c = 0x2d2d2d;
  _local_8 = CONCAT31(uStack_7,6);
  if (local_24 < 0x10) {
    if ((piVar5 != (int *)0x0) && (cVar2 = (**(code **)(*piVar5 + 0x1c))(), cVar2 != '\0')) {
      FUN_0042c2f0();
    }
    FUN_00425590();
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

