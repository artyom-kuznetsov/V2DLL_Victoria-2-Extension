// FUN_0041fc60 @ 0041fc60 body=[[0041fc60, 0041fe03] [0041fe07, 0041fe23] [0041fe27, 0041fe41] [0041fe45, 0041fe5f] [0041fe63, 0041fe76]]


undefined1 * FUN_0041fc60(undefined1 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d98c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_14 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  uVar2 = FUN_00aaf0c5();
  local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  puVar4 = (uint *)(iVar1 + 0xe80);
  if (DAT_012586f2 == '\0') {
    puVar4 = (uint *)(iVar1 + 0xe78);
  }
  local_18 = puVar4[1] + (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) +
             (uint)CARRY4(*puVar4,uVar2 * 0x8000);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  *(uint *)(iVar1 + 0xe78) = *puVar4 + uVar2 * 0x8000;
  *(int *)(iVar1 + 0xe7c) = local_18;
  *param_1 = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  FUN_00988bb0(local_8c,0);
  local_8._0_1_ = 2;
  FUN_00988fa0();
  local_8._0_1_ = 3;
  uVar3 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00408ed0(uVar3);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

