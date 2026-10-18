// FUN_00a21520 @ 00a21520 body=[[00a21520, 00a215ac] [00a215b0, 00a215d8] [00a215dc, 00a216f2] [00a216f6, 00a219ec] [00a219f0, 00a21b16] [00a21b1a, 00a21b3f] [00a21b43, 00a21b55]]


void FUN_00a21520(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte ****ppppbVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  int *piVar13;
  int *piVar14;
  bool bVar15;
  int local_1c4 [65];
  undefined4 local_c0 [5];
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  byte ***local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b60fc3;
  local_10 = ExceptionList;
  local_18 = 0;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00e3f7bc,4);
  local_8 = 0;
  FUN_00988fa0(param_1 + 0x78);
  local_8._0_1_ = 1;
  FUN_00988f20(local_6c);
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  local_8._0_1_ = 4;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  puVar4 = (undefined4 *)FUN_00aae9af(0x360);
  local_8._0_1_ = 5;
  local_1c = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_8 = CONCAT31(local_8._1_3_,6);
    local_18 = 1;
    local_20 = (undefined4 *)FUN_00aae9af(0x114);
    local_8 = 7;
    if (local_20 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      FUN_0098ffc0(local_c0);
      *local_20 = &PTR_FUN_00e37c3c;
      puVar10 = local_20;
    }
    *puVar4 = &PTR_FUN_00e38524;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    local_8 = 8;
    *(undefined1 *)(puVar4 + 5) = 0;
    puVar4[7] = puVar10;
    puVar4[0xd0] = 0xf;
    puVar4[0xcf] = 0;
    *(undefined1 *)(puVar4 + 0xcb) = 0;
    FUN_00408ed0(local_88,0,0xffffffff);
    puVar4[0xd2] = 0;
    puVar4[0xd3] = 0;
    puVar4[0xd4] = 0;
    *(undefined1 *)(puVar4 + 0xd6) = 1;
    puVar4[0xd7] = 0;
  }
  local_8 = 4;
  if ((local_18 & 1) != 0) {
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88[0]);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
  }
  (**(code **)(*(int *)puVar4[7] + 4))();
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  (**(code **)(*(int *)puVar4[7] + 4))();
  (**(code **)(*(int *)puVar4[7] + 4))();
  (**(code **)(*(int *)puVar4[7] + 4))();
  (**(code **)(*(int *)puVar4[7] + 4))();
  (**(code **)(*(int *)puVar4[7] + 4))();
  (**(code **)(*(int *)puVar4[7] + 4))();
  FUN_009a1440(puVar4);
  (**(code **)(*(int *)puVar4[7] + 4))();
  (**(code **)(*(int *)puVar4[7] + 4))();
  (**(code **)(*(int *)puVar4[7] + 4))();
  FUN_009a1440(puVar4);
  uVar5 = FUN_00aaf0c5(puVar4 + 0x8b);
  *(undefined4 *)(param_1 + 0x494) = uVar5;
  FUN_009a1440(puVar4);
  uVar5 = FUN_00aaf0c5(puVar4 + 0x8b);
  *(undefined4 *)(param_1 + 0x498) = uVar5;
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  FUN_009a1440(puVar4);
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = (byte ***)((uint)local_3c[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,10);
  (**(code **)(*(int *)puVar4[7] + 4))();
  pcVar6 = (char *)(puVar4[7] + 0x10);
  pcVar11 = pcVar6;
  do {
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar6,(int)pcVar11 - (puVar4[7] + 0x11));
LAB_00a21827:
  ppppbVar7 = (byte ****)local_3c[0];
  if (local_28 < 0x10) {
    ppppbVar7 = local_3c;
  }
  pbVar12 = &DAT_00e29538;
  do {
    bVar2 = *(byte *)ppppbVar7;
    bVar15 = bVar2 < *pbVar12;
    if (bVar2 != *pbVar12) {
LAB_00a21858:
      iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_00a2185d;
    }
    if (bVar2 == 0) break;
    bVar2 = *(byte *)((int)ppppbVar7 + 1);
    bVar15 = bVar2 < pbVar12[1];
    if (bVar2 != pbVar12[1]) goto LAB_00a21858;
    ppppbVar7 = (byte ****)((int)ppppbVar7 + 2);
    pbVar12 = pbVar12 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_00a2185d:
  if (iVar8 == 0) {
    piVar13 = (int *)puVar4[7];
    if ((char)piVar13[0x44] == '\0') {
      iVar8 = (**(code **)(*piVar13 + 4))();
      piVar13[2] = iVar8;
      if (iVar8 == 0) {
        piVar13[3] = 0x13;
      }
      *(undefined1 *)(piVar13 + 0x44) = 1;
    }
    piVar13 = piVar13 + 3;
    piVar14 = local_1c4;
    for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar14 = *piVar13;
      piVar13 = piVar13 + 1;
      piVar14 = piVar14 + 1;
    }
    if (local_1c4[0] == 0x13) goto LAB_00a219f0;
    FUN_009a1440(puVar4);
    puVar10 = puVar4 + 0x8b;
    puVar9 = (undefined4 *)FUN_00aaf0c5(puVar10);
    local_1c = puVar9;
    FUN_009a1440(puVar4);
    local_20 = (undefined4 *)FUN_00aaf0c5(puVar10);
    FUN_009a1440(puVar4);
    local_44 = FUN_00aaf0c5(puVar10);
    FUN_009a1440(puVar4);
    local_48 = FUN_00aaf0c5(puVar10);
    FUN_009a1440(puVar4);
    local_18 = FUN_00aaf0c5(puVar10);
    if (puVar9 == (undefined4 *)0x20) {
      local_18 = 0;
    }
    FUN_009a1440(puVar4);
    local_50 = FUN_00aaf0c5(puVar10);
    FUN_009a1440(puVar4);
    local_4c = FUN_00aaf0c5(puVar10);
    FUN_009a1440(puVar4);
    local_40 = FUN_00aaf0c5(puVar10);
    FUN_009a1440(puVar4);
    (**(code **)(*(int *)puVar4[7] + 4))();
    pcVar6 = (char *)(puVar4[7] + 0x10);
    pcVar11 = pcVar6;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar6,(int)pcVar11 - (puVar4[7] + 0x11));
    puVar10 = (undefined4 *)FUN_00aae9af(0x820);
    if (puVar10 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x94 + (int)local_1c * 4) = 0;
    }
    else {
      *puVar10 = local_20;
      puVar10[1] = local_44;
      puVar10[2] = local_48;
      puVar10[3] = local_18;
      puVar10[4] = local_50;
      puVar10[5] = local_4c;
      puVar10[6] = local_40;
      puVar10[0x207] = 0;
      *(undefined4 **)(param_1 + 0x94 + (int)local_1c * 4) = puVar10;
    }
    goto LAB_00a21827;
  }
LAB_00a219f0:
  do {
    ppppbVar7 = (byte ****)local_3c[0];
    if (local_28 < 0x10) {
      ppppbVar7 = local_3c;
    }
    pcVar11 = "kerning";
    do {
      bVar2 = *(byte *)ppppbVar7;
      bVar15 = bVar2 < (byte)*pcVar11;
      if (bVar2 != *pcVar11) {
LAB_00a21a21:
        iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00a21a26;
      }
      if (bVar2 == 0) break;
      bVar2 = *(byte *)((int)ppppbVar7 + 1);
      bVar15 = bVar2 < (byte)pcVar11[1];
      if (bVar2 != pcVar11[1]) goto LAB_00a21a21;
      ppppbVar7 = (byte ****)((int)ppppbVar7 + 2);
      pcVar11 = pcVar11 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_00a21a26:
    if (iVar8 != 0) {
LAB_00a21afa:
      (**(code **)*puVar4)(1);
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = (byte ***)((uint)local_3c[0] & 0xffffff00);
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c0[0]);
      }
      ExceptionList = local_10;
      return;
    }
    piVar13 = (int *)puVar4[7];
    if ((char)piVar13[0x44] == '\0') {
      iVar8 = (**(code **)(*piVar13 + 4))();
      piVar13[2] = iVar8;
      if (iVar8 == 0) {
        piVar13[3] = 0x13;
      }
      *(undefined1 *)(piVar13 + 0x44) = 1;
    }
    piVar13 = piVar13 + 3;
    piVar14 = local_1c4;
    for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar14 = *piVar13;
      piVar13 = piVar13 + 1;
      piVar14 = piVar14 + 1;
    }
    if (local_1c4[0] == 0x13) goto LAB_00a21afa;
    FUN_009a1440(puVar4);
    puVar10 = puVar4 + 0x8b;
    iVar8 = FUN_00aaf0c5(puVar10);
    FUN_009a1440(puVar4);
    local_1c = (undefined4 *)FUN_00aaf0c5(puVar10);
    FUN_009a1440(puVar4);
    uVar5 = FUN_00aaf0c5(puVar10);
    iVar8 = *(int *)(param_1 + 0x94 + iVar8 * 4);
    iVar3 = *(int *)(iVar8 + 0x81c);
    *(undefined4 **)(iVar8 + 0x1c + iVar3 * 8) = local_1c;
    *(undefined4 *)(iVar8 + 0x20 + iVar3 * 8) = uVar5;
    *(int *)(iVar8 + 0x81c) = *(int *)(iVar8 + 0x81c) + 1;
    (**(code **)(*(int *)puVar4[7] + 4))();
    pcVar6 = (char *)(puVar4[7] + 0x10);
    pcVar11 = pcVar6;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar6,(int)pcVar11 - (puVar4[7] + 0x11));
  } while( true );
}

