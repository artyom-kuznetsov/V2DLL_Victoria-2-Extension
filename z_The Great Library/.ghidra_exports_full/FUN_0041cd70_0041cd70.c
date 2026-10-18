// FUN_0041cd70 @ 0041cd70 body=[[0041cd70, 0041cece] [0041ced2, 0041cef1] [0041cef5, 0041cf31]]


void FUN_0041cd70(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_5c;
  uint local_48;
  undefined4 local_40;
  uint local_2c;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b9cad9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar4 = *(int *)(DAT_012588e8 + 0xb60);
  piVar3 = (int *)*param_2;
  local_14 = 1;
  if (0 < (param_2[1] - (int)piVar3) / 0x1c) {
    if (0xf < (uint)piVar3[5]) {
      piVar3 = (int *)*piVar3;
    }
    FUN_0055c6c0(DAT_012587e4,&local_24,piVar3);
    if (local_20 != 0) {
      local_1c = local_24;
      iVar4 = local_20;
    }
  }
  FUN_008a8650(0);
  puVar1 = (undefined4 *)(iVar4 * 0x10 + *(int *)(DAT_012588e8 + 0xb98));
  if ((int)puVar1[2] < 1) {
    FUN_00409350("There are no rebel factions to break the country.",0x31);
    *param_1 = 0;
    ExceptionList = local_10;
    return;
  }
  uVar2 = *(undefined4 *)*puVar1;
  FUN_00516630(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4),uVar2);
  FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4));
  FUN_00534b80(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4));
  uVar2 = FUN_0041a080(uVar2);
  local_8 = 1;
  uVar2 = FUN_00988fa0(uVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00408ed0(uVar2,0,0xffffffff);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40);
  }
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c);
  }
  *param_1 = 1;
  ExceptionList = local_10;
  return;
}

