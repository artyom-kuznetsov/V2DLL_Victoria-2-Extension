// FUN_0076ce00 @ 0076ce00 body=[[0076ce00, 0076cebe] [0076cec2, 0076cf2e] [0076cf32, 0076d04f] [0076d053, 0076d07f] [0076d083, 0076d0ad] [0076d0b1, 0076d0d5] [0076d0d9, 0076d0f4] [0076d0f8, 0076d107] [0076d10b, 0076d145] [0076d149, 0076d15d]]


void FUN_0076ce00(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int in_EDX;
  float fVar4;
  uint auStack_d4 [3];
  undefined4 uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined1 uStack_9c;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  int aiStack_80 [4];
  uint uStack_70;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_38;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6cc91;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(undefined4 **)(in_EDX + 0x60) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_14;
    (**(code **)**(undefined4 **)(in_EDX + 0x60))();
  }
  *(int *)(in_EDX + 0x60) = in_ECX;
  if (*(int *)(in_ECX + 0x7c) < 1) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)*(int *)(in_ECX + 0x80) / (float)*(int *)(in_ECX + 0x7c);
  }
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  auStack_d4[0] = auStack_d4[0] & 0xffffff00;
  FUN_00409350("SAVE_PROG",9);
  uStack_c = 0;
  FUN_009a8ee0(aiStack_80,auStack_d4);
  uStack_c._0_1_ = 2;
  if (0xf < uStack_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  auStack_d4[0] = auStack_d4[0] & 0xffffff00;
  uStack_a4 = 0xf;
  uStack_a8 = 0;
  uStack_b8 = uStack_b8 & 0xffffff00;
  FUN_00409350("VALUE",5);
  uStack_c._0_1_ = 3;
  FUN_009a99f0(aiStack_80,(int)(fVar4 * 100.0));
  uStack_c._0_1_ = 2;
  if (0xf < uStack_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_88 = 0xf;
  uStack_8c = 0;
  uStack_9c = 0;
  FUN_00409350(&DAT_00df963c,2);
  uStack_c._0_1_ = 4;
  uStack_a4 = 0xf;
  uStack_a8 = 0;
  uStack_b8 = uStack_b8 & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  uStack_c._0_1_ = 5;
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  auStack_d4[0] = auStack_d4[0] & 0xffffff00;
  FUN_00409350("save_progress",0xd);
  uStack_c._0_1_ = 6;
  piVar1 = *(int **)(in_EDX + 0x20);
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  uStack_c._0_1_ = 7;
  FUN_00988f20();
  uStack_c._0_1_ = 8;
  uVar3 = FUN_00988f20();
  uStack_c = CONCAT31(uStack_c._1_3_,9);
  (**(code **)(*piVar1 + 0x3c))();
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0();
  if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_70);
  }
  uStack_5c = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_54);
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  uStack_24 = 0xf;
  uStack_28 = 0;
  uStack_38 = uStack_38 & 0xffffff00;
  if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(fVar4);
  }
  uStack_c4 = 0xf;
  uStack_c8 = 0;
  if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_bc);
  }
  if (0xf < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_a0);
  }
  uStack_8c = 0xf;
  uStack_90 = 0;
  uStack_a0 = uStack_a0 & 0xffffff00;
  puStack_10 = (undefined1 *)0xa;
  FUN_009adb70();
  if (aiStack_80[0] != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(aiStack_80[0]);
  }
  ExceptionList = pvStack_18;
  return;
}

