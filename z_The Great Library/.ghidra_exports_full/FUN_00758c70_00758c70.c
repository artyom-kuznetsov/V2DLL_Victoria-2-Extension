// FUN_00758c70 @ 00758c70 body=[[00758c70, 00758dc2] [00758dc6, 00758df5] [00758df9, 00758e1d] [00758e21, 00758e43] [00758e47, 00758e83] [00758e9e, 00758f63] [00758f67, 00758f96] [00758f9a, 00758fbe] [00758fc2, 00758fe4] [00758fe8, 00759058] [0075905c, 00759214] [0075921d, 007592e6] [007592ea, 007593bc] [007593c0, 007593eb] [007593ef, 00759411] [00759415, 00759442]]


void FUN_00758c70(int param_1)

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
  if ((*(char *)(param_1 + 0x1b0) == '\0') || (DAT_013f08a8 != 0)) {
LAB_00759415:
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    if (0 < DAT_013f08a8) {
      DAT_013f08a8 = DAT_013f08a8 + -1;
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
      piStack_1d8 = (int *)0x758d24;
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
          piStack_1d8 = (int *)0x758ede;
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
          piStack_1d8 = (int *)0x758f49;
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
          piStack_1d8 = *(int **)(*(int *)(param_1 + 0x1e4) + 100);
          piVar8 = aiStack_10c;
          uStack_1dc = 0x759079;
          (**(code **)(*piStack_1d8 + 0x20))();
          uStack_1dc = 0;
          puStack_1e0 = (uint *)&DAT_00ded94d;
          uStack_158 = 0xf;
          uStack_15c = 0;
          uStack_16c = 0;
          uStack_1e4 = 0x75909f;
          FUN_00409350();
          uStack_1c = 0xb;
          piStack_1f4 = *(int **)(*(int *)(param_1 + 0x1e4) + 100);
          uStack_1dc = 0;
          puStack_1e0 = &local_1a8;
          uStack_1e4 = 3;
          uStack_1e8 = 0x15;
          uStack_1ec = local_114;
          uStack_1f0 = uStack_118;
          uStack_1f8 = 0x7590d5;
          iVar5 = (**(code **)(*piStack_1f4 + 0x90))();
          if (iVar5 < 0) {
            uStack_1f8 = 0x24;
            FUN_00409350("CreateOffscreenPlainSurface failed: ");
LAB_0075922d:
            uStack_1f8 = 0xc;
            uStack_1e4 = uStack_1e4 & 0xffffff00;
            FUN_00409350("frontend.cpp");
            uStack_1f8 = 3;
            uStack_38 = 0xe;
            uVar7 = FUN_004015b0(&uStack_1e4,0x3bb);
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
            FUN_00409350("frontend.cpp",0xc);
            uStack_4c = 0x10;
            uVar7 = FUN_004015b0(&uStack_1f8,0x3bc,0x1000);
            uStack_4c = 0x11;
            FUN_00987d50(uVar7,"Screenshot error.  ",0x13,0);
            if (uStack_198 < 0x10) {
              pppuStack_1ac = &pppuStack_1ac;
            }
            FUN_00418e30(uVar7,pppuStack_1ac);
            FUN_00a93bfc(iVar5);
            FUN_00418e30();
            piStack_1d8 = (int *)0x759379;
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
            piVar2 = *(int **)(*(int *)(param_1 + 0x1e4) + 100);
            iVar5 = (**(code **)(*piVar2 + 0x84))(piVar2,0);
            if (iVar5 < 0) {
              uVar7 = 0x1b;
              pcVar4 = "GetFrontBufferData failed: ";
LAB_00759133:
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
                goto LAB_00759133;
              }
            }
            (**(code **)(*piVar8 + 8))(piVar8);
            if (uStack_1e8._3_1_ == '\0') goto LAB_0075922d;
            uStack_1f8 = 0xc;
            uStack_1e4 = uStack_1e4 & 0xffffff00;
            FUN_00409350("frontend.cpp");
            uStack_1f8 = 3;
            uStack_38 = 0xc;
            uVar7 = FUN_004015b0(&uStack_1e4,0x3b7);
            uStack_1f8 = 0;
            uStack_38 = 0xd;
            FUN_00987d50(uVar7,"Screenshot taken: ",0x12);
            FUN_00418e30();
            piStack_1d8 = (int *)0x7591cd;
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
          DAT_013f08a8 = 10;
          *(undefined1 *)(param_1 + 0x1b1) = 1;
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
          goto LAB_00759415;
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

