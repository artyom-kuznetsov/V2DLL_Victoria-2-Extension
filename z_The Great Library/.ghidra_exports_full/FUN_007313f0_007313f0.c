// FUN_007313f0 @ 007313f0 body=[[007313f0, 007317ad] [007317b1, 007317e1] [007317e5, 00731813] [00731817, 00731845] [00731849, 00731877] [0073187b, 007318a3] [007318a7, 007318c6] [007318ca, 007318e9] [007318ed, 0073191a] [0073191e, 007319a1]]


void FUN_007313f0(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int in_ECX;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  int local_148;
  int local_144;
  uint auStack_134 [4];
  undefined4 uStack_124;
  uint uStack_120;
  uint auStack_118 [4];
  undefined4 uStack_108;
  uint uStack_104;
  uint auStack_fc [4];
  undefined4 uStack_ec;
  uint uStack_e8;
  uint auStack_e0 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  uint uStack_c4;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_a8;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_8c;
  undefined4 uStack_7c;
  uint uStack_78;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  char acStack_38 [36];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b52f03;
  pvStack_14 = ExceptionList;
  uVar10 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x20) * 4);
  iVar7 = (*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) / 0x14;
  bVar3 = true;
  local_144 = 0;
  ExceptionList = &pvStack_14;
  if (0 < iVar7) {
    local_148 = 0;
    ExceptionList = &pvStack_14;
    do {
      puVar12 = (uint *)(*(int *)(in_ECX + 0xc) + local_148);
      if (puVar12[4] != 0) {
LAB_007314e1:
        bVar3 = false;
        break;
      }
      if ((puVar12[1] == DAT_01268ff0) && (*puVar12 == DAT_01268fec)) {
        uVar13 = puVar12[3];
      }
      else {
        iVar5 = DAT_01258a94;
        if (*puVar12 < 0x1269) {
          iVar5 = DAT_01258a98;
        }
        if ((iVar5 == 0) || (iVar5 = FUN_009c1d40(), iVar5 == 0)) goto LAB_007314e1;
        uVar13 = puVar12[3];
      }
      cVar4 = FUN_005141d0(uVar10,uVar13);
      if (cVar4 == '\0') goto LAB_007314e1;
      local_148 = local_148 + 0x14;
      local_144 = local_144 + 1;
    } while (local_144 < iVar7);
  }
  bVar2 = false;
  if (*(char *)(in_ECX + 0x74) != '\0') {
    (**(code **)(**(int **)(in_ECX + 0x78) + 0x38))();
    (**(code **)(**(int **)(in_ECX + 0x7c) + 0x34))();
    if (bVar3) {
      (**(code **)(**(int **)(in_ECX + 0x7c) + 0xb8))();
    }
    else {
      (**(code **)(**(int **)(in_ECX + 0x7c) + 0xbc))();
    }
    goto LAB_0073194c;
  }
  (**(code **)(**(int **)(in_ECX + 0x7c) + 0x38))();
  (**(code **)(**(int **)(in_ECX + 0x78) + 0x34))();
  if (bVar3) {
    pcVar6 = *(code **)(**(int **)(in_ECX + 0x78) + 0xb8);
  }
  else {
    pcVar6 = *(code **)(**(int **)(in_ECX + 0x78) + 0xbc);
  }
  (*pcVar6)();
  if (*(int *)(in_ECX + 0x88) == 0) goto LAB_0073194c;
  if (**(uint **)(in_ECX + 0xc) < 0x1269) {
    if (DAT_01258a98 != 0) {
      iVar7 = FUN_009c1d40();
      goto LAB_007315b7;
    }
LAB_00731597:
    iVar7 = 0;
  }
  else {
    if (DAT_01258a94 == 0) goto LAB_00731597;
    iVar7 = FUN_009c1d40();
LAB_007315b7:
    if (iVar7 != 0) {
      iVar5 = *(int *)(iVar7 + 0x58);
      uStack_cc = 0xf;
      uStack_d0 = 0;
      auStack_e0[0] = auStack_e0[0] & 0xffffff00;
      FUN_00409350(&DAT_00dedc68,1);
      uStack_c = 0;
      uStack_120 = 0xf;
      uStack_124 = 0;
      auStack_134[0] = auStack_134[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      iVar8 = FUN_00965870(iVar7,0);
      uStack_e8 = 0xf;
      uStack_ec = 0;
      auStack_fc[0] = auStack_fc[0] & 0xffffff00;
      uStack_c._0_1_ = 2;
      pcVar9 = __itoa(iVar8,acStack_38,10);
      pcVar11 = pcVar9;
      do {
        cVar4 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar9,(int)pcVar11 - (int)(pcVar9 + 1));
      uStack_c._0_1_ = 3;
      iVar8 = FUN_00965930(0);
      uStack_104 = 0xf;
      uStack_108 = 0;
      auStack_118[0] = auStack_118[0] & 0xffffff00;
      uStack_c._0_1_ = 4;
      pcVar9 = __itoa(iVar8,acStack_38,10);
      pcVar11 = pcVar9;
      do {
        cVar4 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar9,(int)pcVar11 - (int)(pcVar9 + 1));
      uStack_c._0_1_ = 5;
      FUN_009c9e20(auStack_70,iVar5,iVar5 < 10000);
      uStack_c._0_1_ = 6;
      FUN_00988f20(auStack_134);
      uStack_c._0_1_ = 7;
      FUN_00988f20(auStack_118);
      uStack_c._0_1_ = 8;
      FUN_00988f20(auStack_e0);
      uStack_c._0_1_ = 9;
      uVar10 = FUN_00988f20(auStack_fc);
      uStack_c = CONCAT31(uStack_c._1_3_,10);
      FUN_00408ed0(uVar10,0,0xffffffff);
      FUN_00a5ecc0(uVar10,0);
      if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_8c);
      }
      uStack_78 = 0xf;
      uStack_7c = 0;
      uStack_8c = uStack_8c & 0xffffff00;
      if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_c4);
      }
      uStack_b0 = 0xf;
      uStack_b4 = 0;
      uStack_c4 = uStack_c4 & 0xffffff00;
      if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_54);
      }
      uStack_40 = 0xf;
      uStack_44 = 0;
      uStack_54 = uStack_54 & 0xffffff00;
      if (0xf < uStack_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_a8);
      }
      uStack_94 = 0xf;
      uStack_98 = 0;
      uStack_a8 = uStack_a8 & 0xffffff00;
      if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_70[0]);
      }
      uStack_5c = 0xf;
      uStack_60 = 0;
      auStack_70[0] = auStack_70[0] & 0xffffff00;
      if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_118[0]);
      }
      uStack_104 = 0xf;
      uStack_108 = 0;
      auStack_118[0] = auStack_118[0] & 0xffffff00;
      if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_fc[0]);
      }
      uStack_e8 = 0xf;
      uStack_ec = 0;
      auStack_fc[0] = auStack_fc[0] & 0xffffff00;
      if (0xf < uStack_120) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_134[0]);
      }
      uStack_c = 0xffffffff;
      uStack_120 = 0xf;
      uStack_124 = 0;
      auStack_134[0] = auStack_134[0] & 0xffffff00;
      if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_e0[0]);
      }
      uStack_d0 = 0;
      auStack_e0[0] = auStack_e0[0] & 0xffffff00;
      uStack_cc = 0xf;
      bVar2 = true;
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x78) + 0x48))(2 - (uint)(iVar7 != 0));
LAB_0073194c:
  piVar1 = *(int **)(in_ECX + 0x88);
  if (piVar1 != (int *)0x0) {
    if (bVar2) {
      if (*(char *)((int)piVar1 + 0x4f) == '\0') {
        (**(code **)(*piVar1 + 0x34))();
        ExceptionList = pvStack_14;
        return;
      }
    }
    else if (*(char *)((int)piVar1 + 0x4f) != '\0') {
      (**(code **)(*piVar1 + 0x38))();
    }
  }
  ExceptionList = pvStack_14;
  return;
}

