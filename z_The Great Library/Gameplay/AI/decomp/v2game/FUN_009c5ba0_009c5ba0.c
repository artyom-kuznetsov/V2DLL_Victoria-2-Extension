// FUN_009c5ba0 @ 009c5ba0 body=[[009c5ba0, 009c5c48] [009c5c4c, 009c5d83] [009c5d87, 009c5db9] [009c5dbd, 009c5f59] [009c5f5d, 009c5f8f] [009c5f93, 009c6019] [009c601d, 009c6103] [009c6107, 009c6131] [009c6135, 009c61ab] [009c61af, 009c61cd] [009c61d1, 009c6279] [009c627d, 009c62a9] [009c62ad, 009c6329] [009c632d, 009c634b] [009c634f, 009c6383] [009c638c, 009c641f] [009c6423, 009c6453] [009c6457, 009c64af] [009c64b3, 009c64dd] [009c64e6, 009c6579] [009c657d, 009c65ad] [009c65b1, 009c6625] [009c6629, 009c6b64] [009c6b68, 009c6b9e]]


undefined1 * FUN_009c5ba0(int *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int local_12c [3];
  byte abStack_120 [148];
  char local_8c [4];
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  uint local_5c;
  uint local_58;
  uint local_50;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_34 [4];
  uint local_24;
  uint local_20;
  char local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b78555;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  local_14 = 1;
  if (0xf < *(uint *)(in_ECX + 0x14)) {
    in_ECX = *(char **)in_ECX;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  local_8 = 1;
  FUN_009c6c20(local_12c,local_34);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_009c6cf0(local_12c);
  while (local_5c != 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfd424,1);
    uVar8 = local_14;
    uVar6 = local_24;
    uVar4 = local_5c;
    local_8 = CONCAT31(local_8._1_3_,5);
    uVar7 = local_14 | 2;
    local_14 = uVar7;
    iVar3 = FUN_00414bd0();
    bVar9 = false;
    if (iVar3 == 0) {
      if (uVar4 < uVar6) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(uVar4 != uVar6);
      }
      bVar9 = uVar4 == 0;
    }
    if (bVar9) {
LAB_009c5d66:
      local_15 = '\x01';
    }
    else {
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350(&DAT_00dfaa34,1);
      uVar6 = local_40;
      uVar4 = local_5c;
      uVar7 = uVar8 | 6;
      local_14 = uVar7;
      iVar3 = FUN_00414bd0();
      bVar9 = false;
      if (iVar3 == 0) {
        if (uVar4 < uVar6) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar4 != uVar6);
        }
        bVar9 = uVar4 == 0;
      }
      local_15 = '\0';
      if (bVar9) goto LAB_009c5d66;
    }
    if ((uVar7 & 4) != 0) {
      uVar7 = uVar7 & 0xfffffffb;
      local_14 = uVar7;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
    }
    local_8 = 4;
    if (((uVar7 & 2) != 0) && (uVar7 = uVar7 & 0xfffffffd, local_14 = uVar7, 0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    if (local_15 == '\0') {
      local_24 = 0;
      local_34[0] = (uint)local_34[0]._1_3_ << 8;
      FUN_00409350(&DAT_00e3ae58,1);
      uVar6 = local_24;
      uVar4 = local_5c;
      local_8 = CONCAT31(local_8._1_3_,10);
      uVar8 = uVar7 | 8;
      local_14 = uVar8;
      iVar3 = FUN_00414bd0();
      bVar9 = false;
      if (iVar3 == 0) {
        if (uVar4 < uVar6) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar4 != uVar6);
        }
        bVar9 = uVar4 == 0;
      }
      if (bVar9) {
LAB_009c5f3c:
        local_15 = '\x01';
      }
      else {
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        FUN_00409350(&DAT_00dfaa30,1);
        uVar6 = local_40;
        uVar4 = local_5c;
        uVar8 = uVar7 | 0x18;
        local_14 = uVar8;
        iVar3 = FUN_00414bd0();
        bVar9 = false;
        if (iVar3 == 0) {
          if (uVar4 < uVar6) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(uVar4 != uVar6);
          }
          bVar9 = uVar4 == 0;
        }
        local_15 = '\0';
        if (bVar9) goto LAB_009c5f3c;
      }
      if ((uVar8 & 0x10) != 0) {
        uVar8 = uVar8 & 0xffffffef;
        local_14 = uVar8;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
      }
      local_8 = 4;
      if (((uVar8 & 8) != 0) && (uVar8 = uVar8 & 0xfffffff7, local_14 = uVar8, 0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (local_15 != '\0') {
        iVar3 = FUN_004249e0();
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        local_8._0_1_ = 0xc;
        pcVar5 = __itoa(iVar3,local_8c,10);
        pcVar2 = pcVar5;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar5,(int)pcVar2 - (int)(pcVar5 + 1));
        local_8._0_1_ = 0xd;
        FUN_00988f20();
        local_8 = CONCAT31(local_8._1_3_,0xe);
        goto LAB_009c5ffc;
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350(&DAT_00e3ae5c,2);
      uVar6 = local_40;
      uVar4 = local_5c;
      local_8 = CONCAT31(local_8._1_3_,0xf);
      uVar7 = uVar8 | 0x20;
      local_14 = uVar7;
      iVar3 = FUN_00414bd0();
      bVar9 = false;
      if (iVar3 == 0) {
        if (uVar4 < uVar6) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar4 != uVar6);
        }
        bVar9 = uVar4 == 0;
      }
      if (bVar9) {
LAB_009c60e6:
        local_15 = '\x01';
      }
      else {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350(&DAT_00e3ae60,2);
        local_8 = 0x10;
        uVar7 = uVar8 | 0x60;
        local_14 = uVar7;
        cVar1 = FUN_00416db0();
        local_15 = '\0';
        if (cVar1 != '\0') goto LAB_009c60e6;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar7 = uVar7 & 0xffffffbf;
        local_14 = uVar7;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
      }
      local_8 = 4;
      if (((uVar7 & 0x20) != 0) && (uVar7 = uVar7 & 0xffffffdf, local_14 = uVar7, 0xf < local_3c)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (local_15 == '\0') {
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        FUN_00409350(&DAT_00e3ae64,3);
        local_8 = CONCAT31(local_8._1_3_,0x15);
        uVar4 = uVar7 | 0x80;
        local_14 = uVar4;
        cVar1 = FUN_00416db0();
        if (cVar1 == '\0') {
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          FUN_00409350(&DAT_00e3ae68,3);
          local_8 = 0x16;
          uVar4 = uVar7 | 0x180;
          local_14 = uVar4;
          cVar1 = FUN_00416db0();
          local_15 = '\0';
          if (cVar1 != '\0') goto LAB_009c6256;
        }
        else {
LAB_009c6256:
          local_15 = '\x01';
        }
        if ((uVar4 & 0x100) != 0) {
          uVar4 = uVar4 & 0xfffffeff;
          local_14 = uVar4;
          if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
        }
        local_8 = 4;
        if (((char)uVar4 < '\0') && (uVar4 = uVar4 & 0xffffff7f, local_14 = uVar4, 0xf < local_3c))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (local_15 != '\0') {
          FUN_009c5310();
          local_8._0_1_ = 0x17;
          FUN_009a9880(param_3,param_4);
          local_8._0_1_ = 0x18;
          FUN_00988f20();
          local_8._0_1_ = 0x19;
          FUN_00408ed0();
          if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_74 = 0xf;
          local_78 = 0;
          local_88 = local_88 & 0xffffff00;
          if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_34[0] = local_34[0] & 0xffffff00;
          local_8._0_1_ = 0x1a;
          goto LAB_009c635c;
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        FUN_00409350(&DAT_00e0d294,1);
        local_8 = CONCAT31(local_8._1_3_,0x1b);
        uVar6 = uVar4 | 0x200;
        local_14 = uVar6;
        cVar1 = FUN_00416db0();
        if (cVar1 == '\0') {
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          FUN_00409350(&DAT_00dfaa2c,1);
          local_8 = 0x1c;
          uVar6 = uVar4 | 0x600;
          local_14 = uVar6;
          cVar1 = FUN_00416db0();
          local_15 = '\0';
          if (cVar1 != '\0') goto LAB_009c63fc;
        }
        else {
LAB_009c63fc:
          local_15 = '\x01';
        }
        if ((uVar6 & 0x400) != 0) {
          uVar6 = uVar6 & 0xfffffbff;
          local_14 = uVar6;
          if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
        }
        local_8 = 4;
        if (((uVar6 & 0x200) != 0) && (uVar6 = uVar6 & 0xfffffdff, local_14 = uVar6, 0xf < local_3c)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (local_15 == '\0') {
          local_3c = 0xf;
          local_40 = 0;
          local_50 = local_50 & 0xffffff00;
          FUN_00409350(&DAT_00e3ae6c,2);
          local_8 = CONCAT31(local_8._1_3_,0x1f);
          uVar4 = uVar6 | 0x800;
          local_14 = uVar4;
          cVar1 = FUN_00416db0();
          if (cVar1 == '\0') {
            local_20 = 0xf;
            local_24 = 0;
            local_34[0] = local_34[0] & 0xffffff00;
            FUN_00409350(&DAT_00e3ae70,2);
            local_8 = 0x20;
            uVar4 = uVar6 | 0x1800;
            local_14 = uVar4;
            cVar1 = FUN_00416db0();
            local_15 = '\0';
            if (cVar1 != '\0') goto LAB_009c6556;
          }
          else {
LAB_009c6556:
            local_15 = '\x01';
          }
          if ((uVar4 & 0x1000) != 0) {
            uVar4 = uVar4 & 0xffffefff;
            local_14 = uVar4;
            if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_20 = 0xf;
            local_24 = 0;
            local_34[0] = local_34[0] & 0xffffff00;
          }
          local_8 = 4;
          if (((uVar4 & 0x800) != 0) &&
             (uVar4 = uVar4 & 0xfffff7ff, local_14 = uVar4, 0xf < local_3c)) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (local_15 == '\0') {
            FUN_004471e0();
            local_8 = CONCAT31(local_8._1_3_,0x24);
            local_14 = uVar4 | 0x2000;
            cVar1 = FUN_00416db0();
            if (cVar1 == '\0') {
              FUN_004471e0();
              local_8 = 0x25;
              local_14 = uVar4 | 0x6000;
              cVar1 = FUN_00416db0();
              if (cVar1 != '\0') goto LAB_009c66ae;
              bVar9 = false;
            }
            else {
LAB_009c66ae:
              bVar9 = true;
            }
            if ((local_14 & 0x4000) != 0) {
              local_14 = local_14 & 0xffffbfff;
              FUN_00408ad0();
            }
            local_8 = 4;
            if ((local_14 & 0x2000) != 0) {
              local_14 = local_14 & 0xffffdfff;
              FUN_00408ad0();
            }
            if (bVar9) {
              FUN_009c5840();
              local_8._0_1_ = 0x26;
              FUN_009a9880(param_3,param_4);
              local_8._0_1_ = 0x27;
              FUN_00988f20();
              local_8._0_1_ = 0x28;
              FUN_00408ed0();
              FUN_00408ad0();
              FUN_00408ad0();
              local_8 = CONCAT31(local_8._1_3_,4);
              FUN_009a9740();
            }
            else {
              FUN_004471e0();
              local_8 = CONCAT31(local_8._1_3_,0x29);
              local_14 = local_14 | 0x8000;
              cVar1 = FUN_00416db0();
              if (cVar1 == '\0') {
                FUN_004471e0();
                local_8 = 0x2a;
                local_14 = local_14 | 0x10000;
                cVar1 = FUN_00416db0();
                if (cVar1 != '\0') goto LAB_009c67be;
                bVar9 = false;
              }
              else {
LAB_009c67be:
                bVar9 = true;
              }
              if ((local_14 & 0x10000) != 0) {
                local_14 = local_14 & 0xfffeffff;
                FUN_00408ad0();
              }
              local_8 = 4;
              if ((local_14 & 0x8000) != 0) {
                local_14 = local_14 & 0xffff7fff;
                FUN_00408ad0();
              }
              if (bVar9) {
                iVar3 = FUN_00424a50();
                if (iVar3 < 0) {
                  FUN_009885d0();
                  local_8._0_1_ = 0x2b;
                  FUN_00988f20();
                  local_8._0_1_ = 0x2c;
                }
                else {
                  FUN_009885d0();
                  local_8._0_1_ = 0x2d;
                  FUN_00988f20();
                  local_8._0_1_ = 0x2e;
                }
              }
              else {
                FUN_004471e0();
                local_8 = CONCAT31(local_8._1_3_,0x2f);
                local_14 = local_14 | 0x20000;
                cVar1 = FUN_00416db0();
                if (cVar1 == '\0') {
                  FUN_004471e0();
                  local_8 = 0x30;
                  local_14 = local_14 | 0x40000;
                  cVar1 = FUN_00416db0();
                  if (cVar1 != '\0') goto LAB_009c68ac;
                  bVar9 = false;
                }
                else {
LAB_009c68ac:
                  bVar9 = true;
                }
                if ((local_14 & 0x40000) != 0) {
                  local_14 = local_14 & 0xfffbffff;
                  FUN_00408ad0();
                }
                local_8 = 4;
                if ((local_14 & 0x20000) != 0) {
                  local_14 = local_14 & 0xfffdffff;
                  FUN_00408ad0();
                }
                if (bVar9) {
                  FUN_009888f0();
                  local_8._0_1_ = 0x31;
                  FUN_00988f20();
                  local_8._0_1_ = 0x32;
                }
                else {
                  FUN_004471e0();
                  local_8 = CONCAT31(local_8._1_3_,0x33);
                  local_14 = local_14 | 0x80000;
                  cVar1 = FUN_00416db0();
                  if (cVar1 == '\0') {
                    FUN_004471e0();
                    local_8 = 0x34;
                    local_14 = local_14 | 0x100000;
                    cVar1 = FUN_00416db0();
                    if (cVar1 != '\0') goto LAB_009c6976;
                    bVar9 = false;
                  }
                  else {
LAB_009c6976:
                    bVar9 = true;
                  }
                  if ((local_14 & 0x100000) != 0) {
                    local_14 = local_14 & 0xffefffff;
                    FUN_00408ad0();
                  }
                  local_8 = 4;
                  if ((local_14 & 0x80000) != 0) {
                    local_14 = local_14 & 0xfff7ffff;
                    FUN_00408ad0();
                  }
                  if (bVar9) {
                    if ((*param_1 + -43800000) % 0x18 < 0xd) {
                      FUN_009885d0();
                      local_8._0_1_ = 0x37;
                      FUN_00988f20();
                      local_8._0_1_ = 0x38;
                    }
                    else {
                      FUN_009885d0();
                      local_8._0_1_ = 0x35;
                      FUN_00988f20();
                      local_8._0_1_ = 0x36;
                    }
                  }
                  else {
                    FUN_004471e0();
                    local_8 = CONCAT31(local_8._1_3_,0x39);
                    local_14 = local_14 | 0x200000;
                    cVar1 = FUN_00416db0();
                    if (cVar1 == '\0') {
                      FUN_004471e0();
                      local_8 = 0x3a;
                      local_14 = local_14 | 0x400000;
                      cVar1 = FUN_00416db0();
                      if (cVar1 != '\0') goto LAB_009c6a6e;
                      bVar9 = false;
                    }
                    else {
LAB_009c6a6e:
                      bVar9 = true;
                    }
                    if ((local_14 & 0x400000) != 0) {
                      local_14 = local_14 & 0xffbfffff;
                      FUN_00408ad0();
                    }
                    local_8 = 4;
                    if ((local_14 & 0x200000) != 0) {
                      local_14 = local_14 & 0xffdfffff;
                      FUN_00408ad0();
                    }
                    if (bVar9) {
                      FUN_009885d0();
                      local_8._0_1_ = 0x3b;
                      FUN_00988f20();
                      local_8._0_1_ = 0x3c;
                    }
                    else {
                      FUN_009885d0();
                      local_8._0_1_ = 0x3d;
                      FUN_00988f20();
                      local_8._0_1_ = 0x3e;
                    }
                  }
                }
              }
              FUN_00408ed0();
              FUN_00408ad0();
              local_8 = CONCAT31(local_8._1_3_,4);
              FUN_00408ad0();
            }
          }
          else {
            FUN_009c5840();
            local_8._0_1_ = 0x21;
            FUN_009a9880(param_3,param_4);
            local_8._0_1_ = 0x22;
            FUN_00988f20();
            local_8._0_1_ = 0x23;
            FUN_00408ed0();
            if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_74 = 0xf;
            local_78 = 0;
            local_88 = local_88 & 0xffffff00;
            FUN_00408ad0();
            local_8 = CONCAT31(local_8._1_3_,4);
            FUN_009a9740();
          }
          goto LAB_009c6b26;
        }
        FUN_00424930();
        FUN_009888f0();
        local_8._0_1_ = 0x1d;
        FUN_00988f20();
        local_8 = CONCAT31(local_8._1_3_,0x1e);
        FUN_00408ed0();
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        goto LAB_009c64c8;
      }
      FUN_009c5310();
      local_8._0_1_ = 0x11;
      FUN_009a9880(param_3,param_4);
      local_8._0_1_ = 0x12;
      FUN_00988f20();
      local_8._0_1_ = 0x13;
      FUN_00408ed0();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88 = local_88 & 0xffffff00;
      local_8._0_1_ = 0x14;
LAB_009c635c:
      local_20 = 0xf;
      local_24 = 0;
      local_74 = 0xf;
      local_78 = 0;
      FUN_009adb70();
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_44 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      uVar4 = (uint)((double)((*param_1 + -43800000) / 0x18) / 365.0);
      uVar6 = (int)uVar4 >> 0x1f;
      local_24 = 0;
      local_34[0] = (uint)local_34[0]._1_3_ << 8;
      local_8._0_1_ = 7;
      local_8._1_3_ = 0;
      pcVar5 = __itoa((uVar4 ^ uVar6) - uVar6,local_8c,10);
      pcVar2 = pcVar5;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar5,(int)pcVar2 - (int)(pcVar5 + 1));
      local_8._0_1_ = 8;
      FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,9);
LAB_009c5ffc:
      FUN_00408ed0();
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
LAB_009c64c8:
      local_8 = CONCAT31(local_8._1_3_,4);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
LAB_009c6b26:
    if ((abStack_120[*(int *)(local_12c[0] + 4)] & 1) != 0) break;
    FUN_009c6cf0();
  }
  if (local_58 < 0x10) {
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    local_8 = local_8 & 0xffffff00;
    FUN_009c6ba0();
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

