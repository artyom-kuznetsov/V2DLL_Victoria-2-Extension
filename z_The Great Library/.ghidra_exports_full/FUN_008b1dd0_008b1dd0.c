// FUN_008b1dd0 @ 008b1dd0 body=[[008b1dd0, 008b1e67] [008b1e6b, 008b1f2c] [008b1f30, 008b1f58] [008b1f5c, 008b2013] [008b2017, 008b2031] [008b2035, 008b204f] [008b2053, 008b207d]]


byte * FUN_008b1dd0(byte *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  byte *pbVar6;
  bool bVar7;
  undefined1 auStack_f4 [16];
  undefined4 uStack_e4;
  char *pcStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [68];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  uint *puStack_84;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined1 *local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b96ff5;
  local_10 = ExceptionList;
  local_18 = 0;
  puStack_84 = (uint *)param_1;
  pcStack_88 = (char *)0x0;
  local_20 = 0x2d2d2d;
  uStack_8c = 0x2d2d2d;
  local_1c = auStack_d4;
  uStack_d8 = 0x8b1e15;
  ExceptionList = &local_10;
  FUN_008a88d0();
  uStack_d8 = 0;
  local_1c = auStack_f4;
  local_8 = 1;
  FUN_008afc90(*(undefined4 *)(in_ECX + 8));
  local_8 = local_8 & 0xffffff00;
  FUN_008adbe0(local_58);
  local_8 = 2;
  pcStack_88 = (char *)0x8b1e4b;
  FUN_00989330();
  local_8 = local_8 & 0xffffff00;
  local_18 = 1;
  if (0xf < local_44) {
    puStack_84 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
    pcStack_88 = &UNK_008b1e68;
    FUN_00aae91b();
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  if (*(int *)(param_1 + 0x10) != 0) {
    pbVar3 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pbVar3 = *(byte **)param_1;
    }
    pbVar6 = (byte *)&DAT_00df0d5c;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_008b1eb5:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_008b1eba;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_008b1eb5;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_008b1eba:
    if (iVar4 != 0) {
      puStack_84 = (uint *)0x7;
      pcStack_88 = "_header";
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      uStack_8c = 0x8b1ed6;
      FUN_00409350();
      local_8 = 3;
      puStack_84 = local_3c;
      local_18 = 3;
      pcStack_88 = (char *)0x8b1ef3;
      FUN_00988f20();
      local_8 = 4;
      local_18 = 7;
      puStack_84 = (uint *)0x8b1f09;
      cVar2 = FUN_00416db0();
      local_11 = '\0';
      if (cVar2 == '\0') goto LAB_008b1f14;
    }
  }
  local_11 = '\x01';
LAB_008b1f14:
  if ((local_18 & 4) != 0) {
    local_18 = local_18 & 0xfffffffb;
    if (0xf < local_60) {
      puStack_84 = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
      pcStack_88 = &UNK_008b1f2d;
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
  }
  local_8 = 0;
  if (((local_18 & 2) != 0) && (local_18 = local_18 & 0xfffffffd, 0xf < local_28)) {
    puStack_84 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    pcStack_88 = &UNK_008b1f59;
    FUN_00aae91b();
  }
  if (local_11 == '\0') {
    ExceptionList = local_10;
    return param_1;
  }
  puStack_84 = local_74;
  pcStack_88 = (char *)0x0;
  local_20 = 0x2d2d2d;
  uStack_8c = 0x2d2d2d;
  local_1c = auStack_d4;
  uStack_d8 = 0x8b1f87;
  FUN_008a88d0();
  pcStack_e0 = (char *)(in_ECX + 0x5c);
  local_8 = 5;
  uStack_d8 = 0;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  pcVar5 = pcStack_e0;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  iStack_dc = (int)pcVar5 - (in_ECX + 0x5d);
  uStack_e4 = 0x8b1fb7;
  FUN_00409350();
  local_1c = auStack_f4;
  local_8._0_1_ = 6;
  FUN_00988fa0(local_3c);
  local_8._0_1_ = 7;
  FUN_008adbe0(local_58);
  local_8._0_1_ = 8;
  pcStack_88 = (char *)0x8b1fef;
  uStack_8c = FUN_00989330();
  puStack_84 = (uint *)0xffffffff;
  local_8 = CONCAT31(local_8._1_3_,9);
  pcStack_88 = (char *)0x0;
  uStack_90 = 0x8b2001;
  FUN_00408ed0();
  if (local_60 < 0x10) {
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_44) {
      puStack_84 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
      pcStack_88 = &UNK_008b2032;
      FUN_00aae91b();
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (local_28 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    puStack_84 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    pcStack_88 = &UNK_008b2050;
    FUN_00aae91b();
  }
  puStack_84 = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
  pcStack_88 = &UNK_008b2014;
  FUN_00aae91b();
}

