// FUN_009ffe60 @ 009ffe60 body=[[009ffe60, 009fff9d] [009fffa1, 009fffcf] [009fffd3, 00a00001] [00a00005, 00a0002d] [00a00031, 00a00058] [00a0005c, 00a00149] [00a0014d, 00a0017c] [00a00180, 00a001b2] [00a001b8, 00a00266] [00a0026a, 00a002a0] [00a002a4, 00a002c5] [00a002c9, 00a002dd]]


/* WARNING: Removing unreachable block (ram,0x00a0004f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009ffe60(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  int iStack_17c;
  undefined4 uStack_178;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 ***local_118 [2];
  undefined1 local_110 [8];
  undefined4 uStack_108;
  uint uStack_104;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  uint local_50;
  uint local_40;
  uint local_3c;
  void *local_34 [2];
  undefined1 uStack_2c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  piVar5 = DAT_01258b64;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7808d;
  pvStack_14 = ExceptionList;
  iVar3 = DAT_01258a94;
  if (DAT_00f0d838 < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  ExceptionList = &pvStack_14;
  if (iVar3 != 0) {
    ExceptionList = &pvStack_14;
    FUN_009c1d40();
  }
  FUN_00409350();
  local_c = 0;
  local_118[0] = (undefined4 ***)0xf;
  FUN_00409350();
  local_c._0_1_ = 1;
  FUN_00988fa0();
  local_c._0_1_ = 2;
  FUN_00988f20();
  local_c._0_1_ = 3;
  FUN_00988f20();
  local_c._0_1_ = 4;
  FUN_00988f20();
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  if ((undefined4 ***)0xf < local_118[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_118[0] = (undefined4 ****)0xf;
  local_c._0_1_ = 10;
  pbVar2 = _DAT_013f0670;
  if (DAT_013f0684 < 0x10) {
    pbVar2 = &DAT_013f0670;
  }
  pcVar6 = "diplomacy";
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00a000a3:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00a000a8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00a000a3;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a000a8:
  if (iVar3 == 0) {
    local_c8 = 0xf;
    local_cc = 0;
    local_dc = local_dc & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0xb;
    FUN_00988fa0();
    local_c._0_1_ = 0xc;
    FUN_00988f20();
    local_c._0_1_ = 0xd;
    uStack_178 = 0xa0012f;
    FUN_00408ed0();
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 10;
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_c._0_1_ = 10;
  FUN_00408ed0(local_34,0,0xffffffff);
  (**(code **)(*piVar5 + 0x10))(local_110);
  uStack_2c = 0xe;
  FUN_00a714a0(0);
  uStack_2c = 0xf;
  ppppuVar4 = (undefined4 ****)local_118[0];
  if (uStack_104 < 0x10) {
    ppppuVar4 = local_118;
  }
  iVar3 = FUN_00aaf0c5(ppppuVar4);
  for (piVar5 = *(int **)(iStack_17c + 0x3c);
      (*(int **)(iStack_17c + 0x3c) <= piVar5 && (piVar5 < *(int **)(iStack_17c + 0x40)));
      piVar5 = piVar5 + 2) {
    if (*piVar5 == iVar3) {
      iVar3 = piVar5[1];
      goto LAB_00a0024d;
    }
  }
  iVar3 = 0;
LAB_00a0024d:
  FUN_00a71ae0(iStack_17c,iVar3);
  if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_118[0]);
  }
  uStack_104 = 0xf;
  uStack_108 = 0;
  local_118[0] = (undefined4 ***)((uint)local_118[0] & 0xffffff00);
  if (iStack_128 != 0) {
    FUN_00463b30(uStack_124,uStack_178);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iStack_128);
  }
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_54);
  }
  ExceptionList = local_34[0];
  return;
}

