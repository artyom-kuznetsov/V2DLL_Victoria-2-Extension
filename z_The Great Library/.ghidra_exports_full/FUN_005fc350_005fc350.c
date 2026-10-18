// FUN_005fc350 @ 005fc350 body=[[005fc350, 005fc4a2] [005fc4a6, 005fc4d5] [005fc4d9, 005fc4fd] [005fc501, 005fc523] [005fc527, 005fc563] [005fc57e, 005fc643] [005fc647, 005fc676] [005fc67a, 005fc69e] [005fc6a2, 005fc6c4] [005fc6c8, 005fc738] [005fc73c, 005fc8f4] [005fc8fd, 005fc9c6] [005fc9ca, 005fca9c] [005fcaa0, 005fcacb] [005fcacf, 005fcaf1] [005fcaf5, 005fcb22]]


void FUN_005fc350(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  uint _Value;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uStack_1f8;
  int *piStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint *puStack_1e0;
  undefined4 uStack_1dc;
  int *piStack_1d8;
  int *piVar8;
  undefined4 ***pppuStack_1b0;
  undefined4 ***pppuStack_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_19c;
  uint uStack_198;
  uint local_194;
  undefined4 local_184;
  uint local_180;
  uint local_178;
  undefined1 uStack_16c;
  undefined4 local_168;
  uint local_164;
  uint uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_14c;
  uint uStack_148;
  uint local_140;
  undefined4 local_130;
  uint local_12c;
  uint local_124;
  undefined4 uStack_118;
  undefined4 local_114;
  uint local_110;
  int aiStack_10c [5];
  char local_f8 [88];
  undefined **appuStack_a0 [16];
  undefined **ppuStack_60;
  undefined1 uStack_4c;
  undefined1 uStack_38;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b59bc6;
  local_14 = ExceptionList;
  if ((*(char *)(param_1 + 0x94) == '\0') || (DAT_013f083c != 0)) {
LAB_005fcaf5:
    *(undefined1 *)(param_1 + 0x94) = 0;
    if (0 < DAT_013f083c) {
      DAT_013f083c = DAT_013f083c + -1;
    }
  }
  else {
    local_164 = 0xf;
    local_168 = 0;
    local_178 = local_178 & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350();
    local_c._1_3_ = 0;
    local_19c = 1;
    do {
      local_c._0_1_ = 0;
      local_1a4 = 0xf;
      local_1a8 = 0;
      FUN_00409350();
      local_180 = 0xf;
      local_184 = 0;
      local_194 = local_194 & 0xffffff00;
      local_c._0_1_ = 2;
      piStack_1d8 = (int *)0x5fc404;
      pcVar4 = __itoa(local_19c,local_f8,10);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_c._0_1_ = 3;
      FUN_00988f20();
      local_c = CONCAT31(local_c._1_3_,4);
      pcVar4 = (char *)FUN_00988f20();
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar4 = *(char **)pcVar4;
      }
      if (((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) || (iVar5 = PHYSFS_exists(), iVar5 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      _Value = local_19c;
      if (0xf < local_110) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_110 = 0xf;
      local_114 = 0;
      local_124 = local_124 & 0xffffff00;
      if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_12c = 0xf;
      local_130 = 0;
      local_140 = local_140 & 0xffffff00;
      if (0xf < local_180) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      local_180 = 0xf;
      local_184 = 0;
      local_194 = local_194 & 0xffffff00;
      if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (!bVar3) {
        if ((int)local_19c < 10000) {
          local_1a4 = 0xf;
          local_1a8 = 0;
          FUN_00409350();
          local_180 = 0xf;
          local_184 = 0;
          local_194 = local_194 & 0xffffff00;
          local_c._0_1_ = 6;
          piStack_1d8 = (int *)0x5fc5be;
          pcVar4 = __itoa(_Value,local_f8,10);
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_00409350();
          local_c._0_1_ = 7;
          FUN_00988f20();
          local_c._0_1_ = 8;
          FUN_00988f20();
          local_c._0_1_ = 9;
          piStack_1d8 = (int *)0x5fc629;
          FUN_00408ed0();
          if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_12c = 0xf;
          local_130 = 0;
          local_140 = local_140 & 0xffffff00;
          if (0xf < local_110) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_110 = 0xf;
          local_114 = 0;
          local_124 = local_124 & 0xffffff00;
          if (0xf < local_180) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_c._0_1_ = 0;
          local_180 = 0xf;
          local_184 = 0;
          local_194 = local_194 & 0xffffff00;
          if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1a4 = 0xf;
          local_1a8 = 0;
          FUN_00409350();
          local_c = CONCAT31(local_c._1_3_,10);
          if (DAT_00f20c18 == (int *)0x0) {
            DAT_00f20c18 = (int *)FUN_00aae9af();
            if (DAT_00f20c18 == (int *)0x0) {
              DAT_00f20c18 = (int *)0x0;
            }
            else {
              *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
            }
          }
          (**(code **)(*DAT_00f20c18 + 0x34))();
          puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
          if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          piStack_1d8 = *(int **)(*(int *)(param_1 + 0x9c) + 100);
          piVar8 = aiStack_10c;
          uStack_1dc = 0x5fc759;
          (**(code **)(*piStack_1d8 + 0x20))();
          uStack_1dc = 0;
          puStack_1e0 = (uint *)&DAT_00ded94d;
          uStack_158 = 0xf;
          uStack_15c = 0;
          uStack_16c = 0;
          uStack_1e4 = 0x5fc77f;
          FUN_00409350();
          uStack_1c = 0xb;
          piStack_1f4 = *(int **)(*(int *)(param_1 + 0x9c) + 100);
          uStack_1dc = 0;
          puStack_1e0 = &local_1a8;
          uStack_1e4 = 3;
          uStack_1e8 = 0x15;
          uStack_1ec = local_114;
          uStack_1f0 = uStack_118;
          uStack_1f8 = 0x5fc7b5;
          iVar5 = (**(code **)(*piStack_1f4 + 0x90))();
          if (iVar5 < 0) {
            uStack_1f8 = 0x24;
            FUN_00409350("CreateOffscreenPlainSurface failed: ");
LAB_005fc90d:
            uStack_1f8 = 0x10;
            uStack_1e4 = uStack_1e4 & 0xffffff00;
            FUN_00409350("backendidler.cpp");
            uStack_1f8 = 3;
            uStack_38 = 0xe;
            uVar7 = FUN_004015b0(&uStack_1e4,0x2eb);
            uStack_1f8 = 0;
            uStack_38 = 0xf;
            FUN_00987d50(uVar7,"Failed taking screenshot: ",0x1a);
            uVar6 = FUN_00a93bfc(iVar5);
            uVar7 = FUN_00418e30(uVar7,uVar6);
            FUN_00401280(uVar7);
            uStack_4c = 0xe;
            FUN_00987ac0(appuStack_a0);
            appuStack_a0[0] = std::ios_base::vftable;
            FUN_00aad52d(appuStack_a0);
            uStack_4c = 0xb;
            if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(uStack_1f8);
            }
            uStack_1e4 = 0xf;
            uStack_1e8 = 0;
            uStack_1f8 = uStack_1f8 & 0xffffff00;
            FUN_00409350("backendidler.cpp",0x10);
            uStack_4c = 0x10;
            uVar7 = FUN_004015b0(&uStack_1f8,0x2ec,0x1000);
            uStack_4c = 0x11;
            FUN_00987d50(uVar7,"Screenshot error.  ",0x13,0);
            if (uStack_198 < 0x10) {
              pppuStack_1ac = &pppuStack_1ac;
            }
            FUN_00418e30(uVar7,pppuStack_1ac);
            FUN_00a93bfc(iVar5);
            FUN_00418e30();
            piStack_1d8 = (int *)0x5fca59;
            FUN_00401280();
            local_c = CONCAT31(local_c._1_3_,0x10);
            FUN_00987ac0();
            ppuStack_60 = std::ios_base::vftable;
            FUN_00aad52d();
            if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          else {
            piVar2 = *(int **)(*(int *)(param_1 + 0x9c) + 100);
            iVar5 = (**(code **)(*piVar2 + 0x84))(piVar2,0);
            if (iVar5 < 0) {
              uVar7 = 0x1b;
              pcVar4 = "GetFrontBufferData failed: ";
LAB_005fc813:
              piStack_1f4 = (int *)((uint)piStack_1f4 & 0xffffff);
              FUN_00409350(pcVar4,uVar7);
            }
            else {
              if (local_19c < 0x10) {
                pppuStack_1b0 = &pppuStack_1b0;
              }
              iVar5 = D3DXSaveSurfaceToFileA(pppuStack_1b0,0,piVar8,0,0);
              if (iVar5 < 0) {
                uVar7 = 0x1f;
                pcVar4 = "D3DXSaveSurfaceToFileA failed: ";
                goto LAB_005fc813;
              }
            }
            (**(code **)(*piVar8 + 8))(piVar8);
            if (uStack_1e8._3_1_ == '\0') goto LAB_005fc90d;
            uStack_1f8 = 0x10;
            uStack_1e4 = uStack_1e4 & 0xffffff00;
            FUN_00409350("backendidler.cpp");
            uStack_1f8 = 3;
            uStack_38 = 0xc;
            uVar7 = FUN_004015b0(&uStack_1e4,0x2e7);
            uStack_1f8 = 0;
            uStack_38 = 0xd;
            FUN_00987d50(uVar7,"Screenshot taken: ",0x12);
            FUN_00418e30();
            piStack_1d8 = (int *)0x5fc8ad;
            FUN_00401280();
            local_c = CONCAT31(local_c._1_3_,0xc);
            FUN_00987ac0();
            ppuStack_60 = std::ios_base::vftable;
            FUN_00aad52d();
            if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          DAT_013f083c = 10;
          *(undefined1 *)(param_1 + 0x95) = 1;
          if (0xf < uStack_148) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_148 = 0xf;
          uStack_14c = 0;
          uStack_15c = uStack_15c & 0xffffff00;
          if (0xf < local_164) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          goto LAB_005fcaf5;
        }
        break;
      }
      local_19c = local_19c + 1;
    } while ((int)local_19c < 10000);
    if (0xf < local_164) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

