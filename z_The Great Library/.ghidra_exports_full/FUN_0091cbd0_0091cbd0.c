// FUN_0091cbd0 @ 0091cbd0 body=[[0091cbd0, 0091cc89] [0091cc8d, 0091cda1] [0091cda5, 0091cdc3] [0091cdc7, 0091cdf1] [0091cdf5, 0091ce69] [0091ce6d, 0091cead] [0091ceb1, 0091cee4] [0091cee8, 0091cefc]]


undefined1 * FUN_0091cbd0(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  char *pcVar7;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 local_44 [4];
  int local_40;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8513f;
  local_10 = ExceptionList;
  local_1c = 0;
  if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    pcVar7 = "CRISISDEMANDDESC";
    if (*(char *)(in_ECX + 0x30) == '\0') {
      pcVar7 = "CRISISOFFERDESC";
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    pcVar2 = pcVar7;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350(pcVar7,(int)pcVar2 - (int)(pcVar7 + 1));
    local_8 = 1;
    FUN_009a8ee0(local_44,local_60);
    local_8._0_1_ = 3;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 4;
    uVar3 = FUN_004f97a0();
    local_8._0_1_ = 5;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_30,uVar3);
    local_8._0_1_ = 6;
    puVar5 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 7;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_00e38ecc;
      puVar5[1] = local_44;
      puVar5[7] = 0xf;
      puVar5[6] = 0;
      *(undefined1 *)(puVar5 + 2) = 0;
      local_14 = puVar5;
      FUN_00408ed0();
      *puVar5 = &PTR_FUN_00e38f08;
      puVar5[9] = *puVar4;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      local_8._0_1_ = 9;
      FUN_009a97b0();
    }
    local_8._0_1_ = 6;
    local_14 = puVar5;
    FUN_009e6810(local_b4,&local_14);
    local_8._0_1_ = 10;
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0xb;
    FUN_00448740(&DAT_00dee2cc,1);
    uVar3 = FUN_00929480();
    local_8._0_1_ = 0xc;
    FUN_00448aa0(uVar3,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98);
    }
    FUN_00448740();
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0(local_7c,0,0xffffffff);
    local_1c = 1;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_7c[0]);
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    local_8 = 0xd;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

