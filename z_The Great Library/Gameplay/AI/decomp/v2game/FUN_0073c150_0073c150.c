// FUN_0073c150 @ 0073c150 body=[[0073c150, 0073c28c] [0073c290, 0073c325] [0073c329, 0073c350] [0073c354, 0073c373] [0073c377, 0073c39c] [0073c3a0, 0073c3bf] [0073c3c3, 0073c3d9] [0073c3dd, 0073c3fa] [0073c403, 0073c446] [0073c44a, 0073c4db]]


undefined4 FUN_0073c150(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 local_1bc [92];
  char local_160 [32];
  undefined1 local_140;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_124;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined1 local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b91e6a;
  local_10 = ExceptionList;
  local_50 = 0;
  local_12c = 0xf;
  local_130 = 0;
  local_140 = 0;
  local_110 = 0xf;
  local_114 = 0;
  local_124 = 0;
  local_f4 = 0xf;
  local_f8 = 0;
  local_108 = 0;
  local_ec = 0;
  local_e8 = 1;
  local_8 = 0;
  ExceptionList = &local_10;
  pbVar4 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar9 = "controller_flag";
  do {
    bVar1 = *pbVar4;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_0073c200:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0073c205;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_0073c200;
    pbVar4 = pbVar4 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0073c205:
  if (iVar5 == 0) {
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc20,2);
    local_8._0_1_ = 1;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc940,4);
    local_54 = *(undefined4 *)(param_1 + 0x28);
    iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x2c) * 4);
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_8._0_1_ = 3;
    pcVar6 = __itoa(*(int *)(iVar5 + 0x15c4) - *(int *)(iVar5 + 0x15c0),local_160,10);
    pcVar9 = pcVar6;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    FUN_00409350(pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
    local_8._0_1_ = 4;
    FUN_00475d50(local_a8);
    local_8._0_1_ = 5;
    FUN_00988f20(local_30);
    local_8._0_1_ = 6;
    FUN_00988f20(local_4c);
    local_8._0_1_ = 7;
    uVar7 = FUN_00988f20(local_70);
    local_8._0_1_ = 8;
    FUN_00408ed0(uVar7,0,0xffffffff);
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c4);
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4 = local_c4 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e0);
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0 = local_e0 & 0xffffff00;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a8[0]);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("levels",6);
    local_8._0_1_ = 9;
    iVar5 = (**(code **)(**(int **)(param_1 + 0x20) + 0x9c))(local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    puVar8 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 0x74) + 0x2c))();
    piVar2 = (int *)*puVar8;
    do {
      if (piVar2 == (int *)0x0) goto LAB_0073c4b1;
      iVar5 = *piVar2;
      piVar2 = (int *)piVar2[2];
      cVar3 = (**(code **)(*(int *)(iVar5 + 0x1c) + 0x58))(param_3);
    } while (cVar3 == '\0');
    FUN_0073bb80(iVar5,local_1bc,param_3);
    local_8._0_1_ = 10;
    FUN_004115d0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00459820();
  }
LAB_0073c4b1:
  FUN_0040c830(param_2);
  FUN_00459820();
  ExceptionList = local_10;
  return param_2;
}

