// FUN_00766b80 @ 00766b80 body=[[00766b80, 00766c89] [00766c8d, 00766cc8] [00766ccc, 00766ce7] [00766ceb, 00766d16] [00766d1a, 00766d80] [00766d84, 00766de9] [00766ded, 00766e50] [00766e54, 00766f27] [00766f2b, 00766f66] [00766f6a, 00766f85] [00766f89, 00766fb4] [00766fb8, 00767027] [0076702b, 0076708a] [0076708e, 007670f3] [007670f7, 0076713f]]


/* WARNING: Removing unreachable block (ram,0x00766f54) */
/* WARNING: Removing unreachable block (ram,0x00767081) */

void FUN_00766b80(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint unaff_ESI;
  undefined1 auStackY_100 [20];
  undefined4 uVar6;
  undefined1 *local_c0;
  undefined1 *local_b8;
  uint local_a4 [7];
  int local_88;
  uint local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined1 local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  undefined4 local_5c;
  uint uStack_58;
  uint uStack_54;
  void *pvStack_4c;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6cf89;
  pvStack_14 = ExceptionList;
  local_a4[5] = 0xf;
  local_a4[4] = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = 0;
  FUN_00409350();
  local_c._0_1_ = 1;
  FUN_009a8ee0();
  local_c._0_1_ = 2;
  FUN_00475500();
  FUN_009a9880();
  local_c = CONCAT31(local_c._1_3_,3);
  (**(code **)(**(int **)(local_88 + 0x36c) + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
  FUN_009adb70();
  if (local_84 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10 = (undefined1 *)0xffffffff;
  local_60 = 0xf;
  uStack_64 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  if (0xf < local_a4[4]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4[4] = 0xf;
  local_a4[3] = 0;
  FUN_00409350();
  uVar1 = local_a4[6];
  puStack_10 = (undefined1 *)0x5;
  iVar2 = (**(code **)(**(int **)(local_a4[6] + 0x36c) + 0x34))();
  (**(code **)(*(int *)(iVar2 + 0x54) + 8))();
  uStack_18 = 0xffffffff;
  if (0xf < local_a4[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4[2] = 0xf;
  local_a4[1] = 0;
  FUN_00409350();
  uStack_18 = 6;
  iVar2 = (**(code **)(**(int **)(uVar1 + 0x36c) + 0x34))();
  (**(code **)(*(int *)(iVar2 + 0x54) + 8))();
  uStack_20 = 0xffffffff;
  if (0xf < local_a4[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4[0] = 0xf;
  local_b8 = auStackY_100;
  FUN_00409350();
  uStack_20 = 7;
  iVar2 = (**(code **)(**(int **)(uVar1 + 0x36c) + 0x34))();
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))();
  uStack_28 = 0xffffffff;
  if (0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00409350();
  uStack_28 = 8;
  uStack_78 = 0xf;
  uStack_7c = 0;
  local_a4[6] = local_a4[6] & 0xffffff00;
  FUN_00409350();
  uStack_28 = CONCAT31(uStack_28._1_3_,9);
  piVar3 = (int *)(**(code **)(**(int **)(uVar1 + 0x36c) + 0x34))();
  uStack_74 = FUN_009a8ee0(local_a4);
  uStack_2c = 10;
  iVar2 = FUN_00475500();
  uVar4 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  uStack_2c = 0xb;
  uVar6 = 0;
  (**(code **)(*piVar3 + 0xcc))(uVar4);
  if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_64 = 0xf;
  uStack_68 = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  uStack_34 = CONCAT31(uStack_34._1_3_,0xc);
  FUN_009adb70();
  local_a4[0] = 0;
  local_a4[1] = 0;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_34 = 0xffffffff;
  local_84 = 0xf;
  local_88 = 0;
  local_a4[3] = local_a4[3] & 0xffffff00;
  if ((undefined1 *)0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = auStackY_100;
  FUN_00409350(&DAT_00e1460c,4);
  uStack_34 = 0xd;
  iVar2 = (**(code **)(*piRam0000036c + 0x40))();
  iVar5 = FUN_00475500();
  (**(code **)(*(int *)(iVar2 + 0x54) + 0x40))(iVar5 + 0x124);
  uStack_3c = 0xffffffff;
  if ((undefined1 *)0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar6);
  }
  FUN_00409350(&DAT_00e1460c,4);
  uStack_3c = 0xe;
  uVar4 = (**(code **)(*piRam0000036c + 0x40))(&stack0xffffff2c);
  FUN_009b6400(uVar4);
  uStack_40 = 0xffffffff;
  uStack_54 = 0xf;
  uStack_58 = 0;
  uStack_68 = uStack_68 & 0xffffff00;
  FUN_00409350(&DAT_00e1460c,4);
  uStack_40 = 0xf;
  iVar2 = (**(code **)(*piRam0000036c + 0x40))(&uStack_68);
  *(undefined2 *)(iVar2 + 0x4c) = 1;
  uStack_44 = 0xffffffff;
  if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_6c);
  }
  uStack_58 = 0xf;
  local_5c = 0;
  uStack_6c = uStack_6c & 0xffffff00;
  (**(code **)(piRam0000036c[6] + 0x34))();
  (**(code **)(*(int *)(iRam00000368 + 0x18) + 0x38))();
  ExceptionList = pvStack_4c;
  return;
}

