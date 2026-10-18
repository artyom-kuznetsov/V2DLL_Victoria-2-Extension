// FUN_009fabb0 @ 009fabb0 body=[[009fabb0, 009fac6c] [009fac70, 009fada1] [009fada5, 009fadcc] [009fadd0, 009fae37] [009fae3b, 009fae9a] [009fae9e, 009faeb6]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_009fabb0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 ***local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_48;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5264f;
  local_14 = ExceptionList;
  iVar3 = DAT_01258a94;
  if (DAT_00f0d838 < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  ExceptionList = &local_14;
  if (iVar3 != 0) {
    ExceptionList = &local_14;
    FUN_009c1d40();
  }
  iVar3 = FUN_00a727a0(param_1 + 0x3c);
  if (iVar3 != 0) {
    local_b8 = 0xf;
    local_bc = 0;
    local_cc = local_cc & 0xffffff00;
    FUN_00408ed0(param_1 + 0x58,0,0xffffffff);
    local_c._0_1_ = 0;
    local_c._1_3_ = 0;
    pbVar4 = _DAT_013f0670;
    if (DAT_013f0684 < 0x10) {
      pbVar4 = &DAT_013f0670;
    }
    pcVar10 = "diplomacy";
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_009fac90:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_009fac95;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_009fac90;
      pbVar4 = pbVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_009fac95:
    if (iVar5 == 0) {
      piVar9 = (int *)(iVar3 + 0x1c);
      local_48 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_b0 = 0x67452301;
      local_ac = 0xefcdab89;
      local_a8 = 0x98badcfe;
      local_a4 = 0x10325476;
      if (0xf < *(uint *)(iVar3 + 0x30)) {
        piVar9 = (int *)*piVar9;
      }
      FUN_00a1d420(piVar9);
      FUN_00a1d6f0();
    }
    else {
      FUN_00988f20(iVar3 + 0x44);
      local_c._0_1_ = 1;
      local_48 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_b0 = 0x67452301;
      local_ac = 0xefcdab89;
      local_a8 = 0x98badcfe;
      local_a4 = 0x10325476;
      ppppuVar6 = (undefined4 ****)local_f0[0];
      if (local_dc < 0x10) {
        ppppuVar6 = local_f0;
      }
      FUN_00a1d420(ppppuVar6);
      FUN_00a1d6f0();
      pcVar7 = (char *)FUN_00a1d7c0(&local_b0);
      pcVar10 = pcVar7;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_00409350(pcVar7,(int)pcVar10 - (int)(pcVar7 + 1));
      local_c._0_1_ = 0;
      if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_f0[0]);
      }
    }
    cVar2 = FUN_00416db0();
    if (cVar2 != '\0') {
      *(undefined4 *)(iVar3 + 100) = 0;
      if (local_b8 < 0x10) {
        ExceptionList = local_14;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_cc);
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = (undefined4 ***)((uint)local_f0[0] & 0xffffff00);
    FUN_00408ed0(param_1 + 8,0,0xffffffff);
    local_c._0_1_ = 2;
    iVar3 = FUN_009c1bd0(local_f0);
    local_c._0_1_ = 0;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f0[0]);
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = (undefined4 ***)((uint)local_f0[0] & 0xffffff00);
    iVar5 = FUN_00aae9af(0x3c);
    local_c._0_1_ = 3;
    if (iVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00a0d280(iVar5,*(undefined4 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x28));
    }
    local_c = (uint)local_c._1_3_ << 8;
    (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar8);
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_cc);
    }
  }
  ExceptionList = local_14;
  return 0;
}

