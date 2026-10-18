// FUN_007bed80 @ 007bed80 body=[[007bed80, 007befdb] [007befdf, 007bf01b] [007bf01f, 007bf042] [007bf046, 007bf149] [007bf14d, 007bf196] [007bf19a, 007bf331] [007bf335, 007bf384] [007bf388, 007bf3a9] [007bf3ad, 007bf3ee] [007bf3f2, 007bf7eb]]


undefined1 * FUN_007bed80(int param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  bool bVar11;
  undefined8 uStack_138;
  undefined1 local_120 [92];
  undefined1 local_c4 [20];
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_94 [4];
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 local_48;
  int local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b88c14;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_18 = 1;
  uStack_138 = CONCAT44(0x7bede5,(int)uStack_138);
  pbVar4 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar10 = "growth_indicator";
  do {
    bVar1 = *pbVar4;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_007bee12:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_007bee17;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_007bee12;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_007bee17:
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      uStack_138 = CONCAT44(0x7bee9e,(int)uStack_138);
      cVar3 = (**(code **)(**(int **)(param_1 + 0x30) + 0x24))();
      if (cVar3 == '\0') {
        if (*(int *)(param_1 + 0x2c) < 1) {
          ExceptionList = local_10;
          return param_2;
        }
        uStack_138 = CONCAT44(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x2c) * 4
                                      ) + 0x240,local_120);
        FUN_0095e0a0();
        local_8 = 3;
        uStack_138 = CONCAT44(0x7bef28,(int)uStack_138);
        FUN_004115d0();
        local_8 = local_8 & 0xffffff00;
        uStack_138 = CONCAT44(0x7bef36,(int)uStack_138);
        FUN_00459820();
        iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x2c) * 4) + 0x1a8;
      }
      else {
        uStack_138 = CONCAT44(*(int *)(param_1 + 0x30) + 0x160,local_120);
        FUN_0095e0a0();
        local_8 = 2;
        uStack_138 = CONCAT44(0x7beecd,(int)uStack_138);
        FUN_004115d0();
        local_8 = local_8 & 0xffffff00;
        uStack_138 = CONCAT44(0x7beedb,(int)uStack_138);
        FUN_00459820();
        iVar5 = *(int *)(param_1 + 0x30) + 200;
      }
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x34);
      uStack_138 = CONCAT44(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) +
                            0x1380,local_120);
      FUN_0095e0a0();
      local_8 = 1;
      uStack_138 = CONCAT44(0x7bee62,(int)uStack_138);
      FUN_004115d0();
      local_8 = local_8 & 0xffffff00;
      uStack_138 = CONCAT44(0x7bee70,(int)uStack_138);
      FUN_00459820();
      local_20 = *(undefined4 *)(param_1 + 0x34);
      iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x12e8;
    }
    if (iVar5 == 0) {
      ExceptionList = local_10;
      return param_2;
    }
    uStack_138 = 0xd00e18c40;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350();
    uStack_138 = CONCAT44(local_80,local_94);
    local_8 = 4;
    FUN_009a8ee0();
    local_8._0_1_ = 5;
    uStack_138 = CONCAT44(0x7bef98,(int)uStack_138);
    iVar6 = FUN_00475500();
    uStack_138 = *(undefined8 *)(iVar6 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
    local_8._0_1_ = 6;
    uStack_138 = 0xffffffff00000000;
    FUN_00448aa0();
    if (0xf < local_50) {
      uStack_138 = CONCAT44(local_64[0],&UNK_007befdc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8._0_1_ = 7;
    uStack_138 = CONCAT44(0x7beffb,(int)uStack_138);
    FUN_009adb70();
    if (local_90 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      if (0xf < local_6c) {
        uStack_138 = CONCAT44(local_80[0],&UNK_007bf043);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar6 = 0;
      if (DAT_0131bb34 == 0) {
        uStack_138 = 0x188007bf05c;
        param_3 = (int *)FUN_00aae9af();
        local_8 = 8;
        if (param_3 == (int *)0x0) {
          uVar7 = 0;
        }
        else {
          uStack_138 = CONCAT44(0x7bf074,(int)uStack_138);
          uVar7 = FUN_0041a160();
        }
        local_8 = local_8 & 0xffffff00;
        uStack_138 = CONCAT44(uVar7,0x7bf081);
        FUN_00423700();
      }
      iVar8 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
      param_3 = (int *)iVar8;
      if (iVar8 < 1) {
        ExceptionList = local_10;
        return param_2;
      }
      do {
        if (*(int *)(*(int *)(iVar5 + 0xe8) + iVar6 * 4) != 0) {
          uStack_138 = 0x100dee2cc;
          FUN_00448740();
          if (DAT_0131bb34 == 0) {
            uStack_138 = 0x188007bf0d2;
            local_44 = FUN_00aae9af();
            local_8 = 9;
            if (local_44 == 0) {
              uVar7 = 0;
            }
            else {
              uStack_138 = CONCAT44(0x7bf0ea,(int)uStack_138);
              uVar7 = FUN_0041a160();
            }
            local_8 = local_8 & 0xffffff00;
            uStack_138 = CONCAT44(uVar7,0x7bf0f7);
            FUN_00423700();
          }
          if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar6) {
            uStack_138 = CONCAT44(0x7bf10e,(int)uStack_138);
            uVar7 = FUN_0096bb70();
          }
          else {
            uVar7 = *(undefined4 *)(*(int *)(DAT_0131bb34 + 0xc) + iVar6 * 4);
          }
          uStack_138 = CONCAT44(local_3c,uVar7);
          FUN_0096d650();
          local_8 = 10;
          uStack_138 = 0xffffffff00000000;
          FUN_00448aa0();
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_28) {
            uStack_138 = CONCAT44(local_3c[0],&UNK_007bf14a);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_138 = 0x200df9638;
          FUN_00448740();
          uStack_138 = CONCAT44(local_3c,0x7bf170);
          FUN_009c95b0();
          uStack_138 = 0xffffffff00000000;
          local_8 = 0xb;
          FUN_00448aa0();
          local_8 = local_8 & 0xffffff00;
          iVar8 = (int)param_3;
          if (0xf < local_28) {
            uStack_138 = CONCAT44(local_3c[0],&UNK_007bf197);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        iVar6 = iVar6 + 1;
        if (iVar8 <= iVar6) {
          ExceptionList = local_10;
          return param_2;
        }
      } while( true );
    }
    uStack_138 = CONCAT44(0x7bf010,(int)uStack_138);
    FUN_009e6a80();
    uStack_138 = CONCAT44(local_90,&UNK_007bf01c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_138 = CONCAT44(0x7bf1b5,(int)uStack_138);
  pbVar4 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar10 = "colonial_state_icon";
  do {
    bVar1 = *pbVar4;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_007bf1e2:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_007bf1e7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_007bf1e2;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_007bf1e7:
  if (iVar5 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x30) + 0x84) == 2) {
      uStack_138 = 0x900e13160;
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      FUN_00409350();
      local_8 = 0xc;
      uStack_138 = CONCAT44(local_64,local_c4);
      local_18 = 3;
      param_3 = (int *)FUN_009a8ee0();
      local_8 = 0xd;
      local_18 = 7;
      uStack_138 = CONCAT44(0x7bf252,(int)uStack_138);
      iVar5 = FUN_00475500();
      uStack_138 = *(undefined8 *)(iVar5 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
      local_8 = 0xe;
      local_18 = 0xf;
    }
    else {
      uStack_138 = 0xf00e1316c;
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      FUN_00409350();
      local_8 = 0xf;
      uStack_138 = CONCAT44(local_80,local_94);
      local_18 = 0x11;
      param_3 = (int *)FUN_009a8ee0();
      local_8 = 0x10;
      local_18 = 0x31;
      uStack_138 = CONCAT44(0x7bf2d4,(int)uStack_138);
      iVar5 = FUN_00475500();
      uStack_138 = *(undefined8 *)(iVar5 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
      local_8 = 0x11;
      local_18 = 0x71;
    }
    uStack_138 = 0xffffffff00000000;
    FUN_00408ed0();
    if ((local_18 & 0x40) != 0) {
      local_18 = local_18 & 0xffffffbf;
      if (0xf < local_9c) {
        uStack_138 = CONCAT44(local_b0[0],&UNK_007bf332);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
    }
    local_8 = 0xf;
    if ((local_18 & 0x20) != 0) {
      local_18 = local_18 & 0xffffffdf;
      uStack_138 = CONCAT44(local_94,0x7bf36c);
      FUN_009a9740();
    }
    if ((local_18 & 0x10) != 0) {
      local_18 = local_18 & 0xffffffef;
      if (0xf < local_6c) {
        uStack_138 = CONCAT44(local_80[0],&UNK_007bf385);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
    }
    if ((local_18 & 8) != 0) {
      local_18 = local_18 & 0xfffffff7;
      if (0xf < local_28) {
        uStack_138 = CONCAT44(local_3c[0],&UNK_007bf3aa);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
    }
    local_8 = 0xc;
    if ((local_18 & 4) != 0) {
      local_18 = local_18 & 0xfffffffb;
      uStack_138 = CONCAT44(local_c4,0x7bf3d3);
      FUN_009a9740();
    }
    local_8 = 0;
    if (((local_18 & 2) != 0) && (local_18 = local_18 & 0xfffffffd, 0xf < local_50)) {
      uStack_138 = CONCAT44(local_64[0],&UNK_007bf3ef);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar5 = *(int *)(param_1 + 0x30);
    if ((DAT_012586f1 == '\0') && ((*(int *)(iVar5 + 0x84) < 1 || (*(int *)(iVar5 + 0x84) != 1)))) {
      uStack_138 = CONCAT44(0x7bf49f,(int)uStack_138);
      cVar3 = FUN_004d1e40();
      if (cVar3 == '\0') {
        if (*(int *)(iVar5 + 0x84) != 2) {
          ExceptionList = local_10;
          return param_2;
        }
        local_20 = *(undefined4 *)(iVar5 + 0xb8);
        local_1c = *(undefined4 *)(iVar5 + 0xbc);
        local_48 = 0x320000;
        local_44 = 0;
        FUN_0043a6a0();
        uVar7 = FUN_00988bb0(local_64,2);
        local_8 = 0x16;
        local_48 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x118);
        local_44 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x11c);
        local_20 = 0x320000;
        local_1c = 0;
        param_3 = (int *)&uStack_138;
        FUN_0043a6a0();
        uVar9 = FUN_00988bb0(local_b0,1);
        uStack_138 = CONCAT44(uVar7,&DAT_00dfd18c);
        local_8._0_1_ = 0x17;
        FUN_0043ec10(local_3c,&DAT_00df7e7c,uVar9);
        uStack_138 = 0xffffffff00000000;
        local_8._0_1_ = 0x18;
        FUN_00408ed0();
        uStack_138 = CONCAT44(0x7bf5fb,(int)uStack_138);
        FUN_00408ad0();
        uStack_138 = CONCAT44(0x7bf606,(int)uStack_138);
        FUN_00408ad0();
        local_8 = (uint)local_8._1_3_ << 8;
        uStack_138 = CONCAT44(0x7bf611,(int)uStack_138);
        FUN_00408ad0();
        local_20 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                     0x67c) == '\0') {
          ExceptionList = local_10;
          return param_2;
        }
        uStack_138 = CONCAT44(0x7bf64a,(int)uStack_138);
        FUN_009885d0();
        uStack_138 = CONCAT44(local_3c,local_c4);
        local_8 = 0x19;
        FUN_009a8ee0();
        local_8._0_1_ = 0x1a;
        uStack_138 = CONCAT44(0x7bf66c,(int)uStack_138);
        iVar5 = FUN_00475500();
        uStack_138 = *(undefined8 *)(iVar5 + 0x74);
        uVar7 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c));
        local_8._0_1_ = 0x1b;
        uStack_138 = CONCAT44(uVar7,0x7bf6a4);
        FUN_00988fa0();
        uStack_138 = 0xffffffff00000000;
        local_8._0_1_ = 0x1c;
        FUN_00448aa0();
        uStack_138 = CONCAT44(0x7bf6c2,(int)uStack_138);
        FUN_00408ad0();
        uStack_138 = CONCAT44(0x7bf6c9,(int)uStack_138);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x19);
        uStack_138 = CONCAT44(local_c4,0x7bf6d9);
        FUN_009a9740();
        goto LAB_007bf7ce;
      }
      uStack_138 = CONCAT44(0x7bf4ae,(int)uStack_138);
      param_3 = (int *)FUN_004d5d10();
      local_20 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x58);
      iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 0x30) + 0x5c) * 4);
      if (*(int *)(iVar5 + 0x15c4) - *(int *)(iVar5 + 0x15c0) < (int)param_3) {
        uStack_138 = CONCAT44(&param_3,local_3c);
        FUN_0054a540();
        local_8 = 0x15;
      }
      else {
        uStack_138 = CONCAT44(&param_3,local_3c);
        FUN_0054a540();
        local_8 = 0x14;
      }
    }
    else {
      uStack_138 = CONCAT44(0x7bf41e,(int)uStack_138);
      param_3 = (int *)FUN_004d5e90();
      local_20 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x58);
      iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 0x30) + 0x5c) * 4);
      if (*(int *)(iVar5 + 0x15c4) - *(int *)(iVar5 + 0x15c0) < (int)param_3) {
        uStack_138 = CONCAT44(&param_3,local_3c);
        FUN_0054a540();
        local_8 = 0x13;
      }
      else {
        uStack_138 = CONCAT44(&param_3,local_3c);
        FUN_0054a540();
        local_8 = 0x12;
      }
    }
  }
  else {
    uStack_138 = CONCAT44(0x7bf6e8,(int)uStack_138);
    (**(code **)(*param_3 + 0x44))();
    uStack_138 = CONCAT44(0x7bf6f2,(int)uStack_138);
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      if (*(int *)(param_1 + 0x28) != 0) {
        ExceptionList = local_10;
        return param_2;
      }
      local_20 = *(undefined4 *)(param_1 + 0x34);
      uStack_138 = CONCAT44(local_3c,0x7bf780);
      FUN_0053d860();
      uStack_138 = 0xffffffff00000000;
      local_8 = 0x1e;
      FUN_00408ed0();
      local_8 = local_8 & 0xffffff00;
      uStack_138 = CONCAT44(0x7bf79d,(int)uStack_138);
      FUN_00408ad0();
      local_20 = *(undefined4 *)(param_1 + 0x34);
      uStack_138 = CONCAT44(local_3c,*(undefined4 *)
                                      (*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4));
      FUN_0053da30();
      local_8 = 0x1f;
    }
    else {
      if (*(int *)(param_1 + 0x30) == 0) {
        ExceptionList = local_10;
        return param_2;
      }
      piVar2 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) +
                                 *(int *)(DAT_012588e8 + 0xb60) * 0x10) +
                        *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x250) + 0x6c) * 4);
      if (piVar2 == (int *)0x0) {
        ExceptionList = local_10;
        return param_2;
      }
      uStack_138 = CONCAT44(0x7bf738,(int)uStack_138);
      cVar3 = (**(code **)(*piVar2 + 0x34))();
      if (cVar3 == '\0') {
        ExceptionList = local_10;
        return param_2;
      }
      uStack_138 = CONCAT44(local_3c,0x7bf74d);
      (**(code **)(*piVar2 + 0x30))();
      local_8 = 0x1d;
    }
  }
  uStack_138 = 0xffffffff00000000;
  FUN_00408ed0();
LAB_007bf7ce:
  uStack_138 = CONCAT44(0x7bf7d6,(int)uStack_138);
  FUN_00408ad0();
  ExceptionList = local_10;
  return param_2;
}

