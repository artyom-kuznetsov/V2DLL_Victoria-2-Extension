// FUN_007612f0 @ 007612f0 body=[[007612f0, 00761435] [00761439, 00761474] [00761478, 00761496] [0076149a, 007614c0] [007614c4, 007614df] [007614e3, 007614f7]]


void FUN_007612f0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  int aiStack_a0 [4];
  uint uStack_90;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_6c;
  uint uStack_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_3c;
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7c028;
  pvStack_14 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x350) + 1;
  if (4 < iVar1) {
    iVar1 = 0;
  }
  ExceptionList = &pvStack_14;
  *(int *)(in_ECX + 0x350) = iVar1;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = 0;
  FUN_00409350();
  local_c = 0;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = 0;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,1);
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_88);
  uVar3 = FUN_00475660(auStack_38,*(undefined4 *)(in_ECX + 0x350));
  puStack_10._0_1_ = 2;
  FUN_009a8ee0(aiStack_a0,uVar3);
  puStack_10._0_1_ = 3;
  iVar1 = FUN_00475500();
  uVar3 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
  (**(code **)(*piVar2 + 0x3c))();
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0();
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  uStack_44 = 0xf;
  uStack_48 = 0;
  local_58 = local_58 & 0xffffff00;
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,5);
  FUN_009adb70();
  if (aiStack_a0[0] != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(aiStack_a0[0]);
  }
  aiStack_a0[0] = 0;
  aiStack_a0[1] = 0;
  aiStack_a0[2] = 0;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_3c);
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_90);
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74);
  }
  ExceptionList = pvStack_1c;
  return;
}

