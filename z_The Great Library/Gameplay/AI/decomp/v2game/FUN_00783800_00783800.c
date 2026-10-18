// FUN_00783800 @ 00783800 body=[[00783800, 00783904] [00783908, 0078392b] [0078392f, 007839b9] [007839bd, 00783b19] [00783b1d, 00783b4c] [00783b50, 00783b75] [00783b79, 00783b9e] [00783ba2, 00783bc7] [00783bcb, 00783bed] [00783bf1, 00783c0a] [00783c0e, 00783c2a] [00783c2e, 00783c51] [00783c55, 00783ccc] [00783cd0, 00783d00] [00783d04, 00783d23] [00783d27, 00783d43] [00783d47, 00783dfa] [00783dfe, 00783e21] [00783e25, 00783eb9] [00783ebd, 00783ff3] [00783ff7, 0078401d] [00784021, 00784046] [0078404a, 0078406f] [00784073, 00784098] [0078409c, 007841e8] [007841ec, 0078420b] [0078420f, 0078426a] [0078426e, 0078451c] [00784520, 00784789] [0078478d, 00784af0]]


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00783800(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  byte *******pppppppbVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  uint local_134 [4];
  undefined4 local_124;
  uint local_120;
  uint local_118;
  undefined4 local_108;
  uint local_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [2];
  undefined1 local_84 [4];
  int local_80;
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  byte *******local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7b012;
  local_10 = ExceptionList;
  local_8 = 0;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("modifier_icon",0xd);
  local_8._0_1_ = 1;
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e01d5c,4);
  local_8._0_1_ = 2;
  iVar4 = (**(code **)(*param_4 + 0x30))(local_8c);
  if (iVar4 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)(iVar4 + -0x18);
  }
  iVar4 = (**(code **)(*piVar8 + 0x44))(local_c4);
  local_15 = param_3 == iVar4;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0;
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((bool)local_15) {
    while (local_8._0_1_ = 0, param_5 != 0) {
      local_8._0_1_ = 0;
      iVar4 = *(int *)(param_5 + 0x24);
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = (byte *******)((uint)local_38[0] & 0xffffff00);
      FUN_00408ed0();
      local_1c = *(int *)(param_5 + 0x1c);
      local_8._0_1_ = 3;
      pppppppbVar5 = local_38[0];
      if (local_24 < 0x10) {
        pppppppbVar5 = (byte *******)local_38;
      }
      pbVar9 = &DAT_00e01d5c;
      do {
        bVar1 = *(byte *)pppppppbVar5;
        bVar11 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_007839a0:
          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_007839a5;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)pppppppbVar5 + 1);
        bVar11 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_007839a0;
        pppppppbVar5 = (byte *******)((int)pppppppbVar5 + 2);
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_007839a5:
      if (iVar6 == 0) {
        pcVar10 = &DAT_00dfd24c;
        if (*(int *)(param_5 + 0x1c) < 1) {
          pcVar10 = &DAT_00df8510;
        }
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        pcVar7 = pcVar10;
        do {
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        FUN_00409350(pcVar10,(int)pcVar7 - (int)(pcVar10 + 1));
        local_8._0_1_ = 4;
        local_b0 = 0xf;
        local_b4 = 0;
        local_c4[0] = local_c4[0] & 0xffffff00;
        FUN_00409350(&DAT_00df8514,2);
        local_8._0_1_ = 5;
        FUN_009888f0();
        local_8._0_1_ = 6;
        local_78 = 0xf;
        local_7c = 0;
        local_8c[0] = local_8c[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded950,1);
        local_8._0_1_ = 7;
        FUN_005937d0(local_38,local_a8);
        local_8._0_1_ = 8;
        FUN_00988f20();
        local_8._0_1_ = 9;
        FUN_00988f20();
        local_8._0_1_ = 10;
        FUN_00988f20();
        local_8._0_1_ = 0xb;
        FUN_00988f20();
        local_8._0_1_ = 0xc;
        FUN_00408ed0();
        if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_e8 = 0xf;
        local_ec = 0;
        local_fc[0] = local_fc[0] & 0xffffff00;
        if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_cc = 0xf;
        local_d0 = 0;
        local_e0[0] = local_e0[0] & 0xffffff00;
        if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_120 = 0xf;
        local_124 = 0;
        local_134[0] = local_134[0] & 0xffffff00;
        if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_104 = 0xf;
        local_108 = 0;
        local_118 = local_118 & 0xffffff00;
        if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_94 = 0xf;
        local_98 = 0;
        local_a8[0] = local_a8[0] & 0xffffff00;
        if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_78 = 0xf;
        local_7c = 0;
        local_8c[0] = local_8c[0] & 0xffffff00;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 3;
        local_b0 = 0xf;
        local_b4 = 0;
        local_c4[0] = local_c4[0] & 0xffffff00;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        FUN_00409350("COMBAT_DICE",0xb);
        local_8._0_1_ = 0xd;
        FUN_009a8ee0(local_84,local_70);
        local_8._0_1_ = 0xe;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_8._0_1_ = 0xf;
        FUN_00408ed0();
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        local_8._0_1_ = 0x10;
        FUN_009adb70();
        if (local_80 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        local_80 = 0;
        local_7c = 0;
        local_78 = 0;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_0040c830();
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = (byte *******)((uint)local_38[0] & 0xffffff00);
        FUN_00459820();
        ExceptionList = local_10;
        return param_2;
      }
      local_8._0_1_ = 0;
      param_5 = iVar4;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350("modifier_icon",0xd);
    local_8._0_1_ = 0x11;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    FUN_00409350("digin",5);
    local_8._0_1_ = 0x12;
    iVar4 = (**(code **)(*param_4 + 0x30))();
    if (iVar4 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)(iVar4 + -0x18);
    }
    iVar4 = (**(code **)(*piVar8 + 0x44))(local_70);
    local_15 = param_3 == iVar4;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if ((bool)local_15) {
      while (local_8._0_1_ = 0, param_5 != 0) {
        local_8._0_1_ = 0;
        iVar4 = *(int *)(param_5 + 0x24);
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = (byte *******)((uint)local_38[0] & 0xffffff00);
        FUN_00408ed0();
        local_1c = *(int *)(param_5 + 0x1c);
        local_8._0_1_ = 0x13;
        pppppppbVar5 = local_38[0];
        if (local_24 < 0x10) {
          pppppppbVar5 = (byte *******)local_38;
        }
        pcVar10 = "digin";
        do {
          bVar1 = *(byte *)pppppppbVar5;
          bVar11 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_00783ea0:
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00783ea5;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)pppppppbVar5 + 1);
          bVar11 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_00783ea0;
          pppppppbVar5 = (byte *******)((int)pppppppbVar5 + 2);
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00783ea5:
        if (iVar6 == 0) {
          pcVar10 = &DAT_00dfd24c;
          if (*(int *)(param_5 + 0x1c) < 1) {
            pcVar10 = &DAT_00df8510;
          }
          local_b0 = 0xf;
          local_b4 = 0;
          local_c4[0] = local_c4[0] & 0xffffff00;
          pcVar7 = pcVar10;
          do {
            cVar3 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          FUN_00409350(pcVar10,(int)pcVar7 - (int)(pcVar10 + 1));
          local_8._0_1_ = 0x14;
          local_5c = 0xf;
          local_60 = 0;
          local_70[0] = local_70[0] & 0xffffff00;
          FUN_00409350(&DAT_00df8514,2);
          local_8._0_1_ = 0x15;
          FUN_009888f0();
          local_8._0_1_ = 0x16;
          local_e8 = 0xf;
          local_ec = 0;
          local_fc[0] = local_fc[0] & 0xffffff00;
          FUN_00409350(&DAT_00ded950,1);
          local_8._0_1_ = 0x17;
          FUN_005937d0(local_38,local_e0);
          local_8._0_1_ = 0x18;
          FUN_00988f20();
          local_8._0_1_ = 0x19;
          FUN_00988f20();
          local_8._0_1_ = 0x1a;
          FUN_00988f20();
          local_8._0_1_ = 0x1b;
          FUN_00988f20();
          local_8._0_1_ = 0x1c;
          FUN_00408ed0();
          if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_94 = 0xf;
          local_98 = 0;
          local_a8[0] = local_a8[0] & 0xffffff00;
          if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_104 = 0xf;
          local_108 = 0;
          local_118 = local_118 & 0xffffff00;
          if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_120 = 0xf;
          local_124 = 0;
          local_134[0] = local_134[0] & 0xffffff00;
          if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_cc = 0xf;
          local_d0 = 0;
          local_e0[0] = local_e0[0] & 0xffffff00;
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8._0_1_ = 0x13;
          FUN_00408ad0();
          FUN_009885d0();
          local_8._0_1_ = 0x1d;
          FUN_009a8ee0(local_84,local_54);
          local_8._0_1_ = 0x1e;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_8._0_1_ = 0x1f;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8._0_1_ = 0x1d;
          FUN_009a9740();
          local_8 = CONCAT31(local_8._1_3_,0x13);
          FUN_00408ad0();
LAB_0078415f:
          FUN_0040c830();
          FUN_0099ee70();
          FUN_00459820();
          ExceptionList = local_10;
          return param_2;
        }
        local_8._0_1_ = 0;
        param_5 = iVar4;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      FUN_009885d0();
      local_8._0_1_ = 0x20;
      FUN_009885d0();
      local_8._0_1_ = 0x21;
      iVar4 = (**(code **)(*param_4 + 0x30))();
      if (iVar4 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)(iVar4 + -0x18);
      }
      iVar4 = (**(code **)(*piVar8 + 0x44))(local_54);
      local_15 = param_3 == iVar4;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = local_70[0] & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if ((bool)local_15) {
        while (local_8._0_1_ = 0, param_5 != 0) {
          local_8._0_1_ = 0;
          iVar4 = *(int *)(param_5 + 0x24);
          local_24 = 0xf;
          local_28 = 0;
          local_38[0] = (byte *******)((uint)local_38[0] & 0xffffff00);
          FUN_00408ed0();
          local_1c = *(int *)(param_5 + 0x1c);
          local_8._0_1_ = 0x22;
          cVar3 = FUN_0040b360();
          if (cVar3 != '\0') {
            FUN_009885d0();
            local_8._0_1_ = 0x23;
            FUN_009885d0();
            local_8._0_1_ = 0x24;
            FUN_009888f0();
            local_8._0_1_ = 0x25;
            FUN_009885d0();
            local_8._0_1_ = 0x26;
            FUN_005937d0(local_38,local_fc);
            local_8._0_1_ = 0x27;
            FUN_00988f20();
            local_8._0_1_ = 0x28;
            FUN_00988f20();
            local_8._0_1_ = 0x29;
            FUN_00988f20();
            local_8._0_1_ = 0x2a;
            FUN_00988f20();
            local_8._0_1_ = 0x2b;
            FUN_00408ed0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8._0_1_ = 0x22;
            FUN_00408ad0();
            FUN_009885d0();
            local_8._0_1_ = 0x2c;
            FUN_009a8ee0(local_84,local_54);
            local_8._0_1_ = 0x2d;
            iVar4 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
            local_8._0_1_ = 0x2e;
            FUN_00408ed0();
            FUN_00408ad0();
            local_8._0_1_ = 0x2c;
            FUN_009a9740();
            local_8 = CONCAT31(local_8._1_3_,0x22);
            FUN_00408ad0();
            FUN_0040c830();
            FUN_0099ee70();
            FUN_00459820();
            ExceptionList = local_10;
            return param_2;
          }
          local_8._0_1_ = 0;
          param_5 = iVar4;
          if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
      else {
        FUN_009885d0();
        local_8._0_1_ = 0x2f;
        FUN_009885d0();
        local_8._0_1_ = 0x30;
        iVar4 = (**(code **)(*param_4 + 0x30))();
        if (iVar4 == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)(iVar4 + -0x18);
        }
        iVar4 = (**(code **)(*piVar8 + 0x44))(local_a8);
        local_15 = param_3 == iVar4;
        FUN_00408ad0();
        local_8._0_1_ = 0;
        FUN_00408ad0();
        uVar2 = (undefined1)local_8;
        if (local_15 == '\0') {
          FUN_009885d0();
          local_8._0_1_ = 0x3c;
          FUN_009885d0();
          local_8._0_1_ = 0x3d;
          iVar4 = (**(code **)(*param_4 + 0x30))();
          if (iVar4 == 0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)(iVar4 + -0x18);
          }
          iVar4 = (**(code **)(*piVar8 + 0x44))(local_a8);
          local_15 = param_3 == iVar4;
          FUN_00408ad0();
          local_8._0_1_ = 0;
          FUN_00408ad0();
          uVar2 = (undefined1)local_8;
          if (local_15 == '\0') {
            FUN_009885d0();
            local_8._0_1_ = 0x49;
            FUN_009885d0();
            local_8._0_1_ = 0x4a;
            iVar4 = (**(code **)(*param_4 + 0x30))();
            if (iVar4 == 0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)(iVar4 + -0x18);
            }
            iVar4 = (**(code **)(*piVar8 + 0x44))(local_a8);
            FUN_00408ad0();
            local_8._0_1_ = 0;
            FUN_00408ad0();
            if (param_3 == iVar4) {
              while (param_5 != 0) {
                param_5 = *(int *)(param_5 + 0x24);
                FUN_005947d0();
                local_8._0_1_ = 0x4b;
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  FUN_009885d0();
                  local_8._0_1_ = 0x4c;
                  FUN_009885d0();
                  local_8._0_1_ = 0x4d;
                  FUN_009888f0();
                  local_8._0_1_ = 0x4e;
                  FUN_00475d50();
                  local_8._0_1_ = 0x4f;
                  FUN_00988f20();
                  local_8._0_1_ = 0x50;
                  FUN_00988f20();
                  local_8._0_1_ = 0x51;
                  FUN_00988f20();
                  local_8._0_1_ = 0x52;
                  FUN_00408ed0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  local_8 = CONCAT31(local_8._1_3_,0x4b);
                  FUN_00408ad0();
                  goto LAB_0078415f;
                }
                local_8._0_1_ = 0;
                FUN_0099ee70();
              }
            }
          }
          else {
            while (local_8._0_1_ = uVar2, param_5 != 0) {
              iVar4 = *(int *)(param_5 + 0x24);
              local_24 = 0xf;
              local_28 = 0;
              local_38[0] = (byte *******)((uint)local_38[0] & 0xffffff00);
              FUN_00408ed0();
              local_1c = *(int *)(param_5 + 0x1c);
              local_8._0_1_ = 0x3e;
              cVar3 = FUN_0040b360();
              if (cVar3 != '\0') {
                FUN_009885d0();
                local_8._0_1_ = 0x3f;
                FUN_009888f0();
                local_8._0_1_ = 0x40;
                FUN_009885d0();
                local_8._0_1_ = 0x41;
                FUN_005937d0(local_38,local_e0);
                local_8._0_1_ = 0x42;
                FUN_00988f20();
                local_8._0_1_ = 0x43;
                FUN_00988f20();
                local_8._0_1_ = 0x44;
                FUN_00988f20();
                local_8._0_1_ = 0x45;
                FUN_00408ed0();
                FUN_00408ad0();
                FUN_00408ad0();
                FUN_00408ad0();
                FUN_00408ad0();
                FUN_00408ad0();
                FUN_00408ad0();
                local_8._0_1_ = 0x3e;
                FUN_00408ad0();
                FUN_009885d0();
                local_8._0_1_ = 0x46;
                FUN_009a8ee0(local_84,local_54);
                local_8._0_1_ = 0x47;
                iVar4 = FUN_00475500();
                FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
                local_8._0_1_ = 0x48;
                FUN_00408ed0();
                FUN_00408ad0();
                local_8._0_1_ = 0x46;
                FUN_009a9740();
                local_8 = CONCAT31(local_8._1_3_,0x3e);
                FUN_00408ad0();
                FUN_0040c830();
                FUN_0099ee70();
                FUN_00459820();
                ExceptionList = local_10;
                return param_2;
              }
              local_8._0_1_ = 0;
              uVar2 = (undefined1)local_8;
              local_8._0_1_ = 0;
              param_5 = iVar4;
              if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
            }
          }
        }
        else {
          while (local_8._0_1_ = uVar2, param_5 != 0) {
            iVar4 = *(int *)(param_5 + 0x24);
            local_24 = 0xf;
            local_28 = 0;
            local_38[0] = (byte *******)((uint)local_38[0] & 0xffffff00);
            FUN_00408ed0();
            local_1c = *(int *)(param_5 + 0x1c);
            local_8._0_1_ = 0x31;
            cVar3 = FUN_0040b360();
            if (cVar3 != '\0') {
              FUN_009885d0();
              local_8._0_1_ = 0x32;
              FUN_009888f0();
              local_8._0_1_ = 0x33;
              FUN_009885d0();
              local_8._0_1_ = 0x34;
              FUN_005937d0(local_38,local_134);
              local_8._0_1_ = 0x35;
              FUN_00988f20();
              local_8._0_1_ = 0x36;
              FUN_00988f20();
              local_8._0_1_ = 0x37;
              FUN_00988f20();
              local_8._0_1_ = 0x38;
              FUN_00408ed0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              local_8._0_1_ = 0x31;
              FUN_00408ad0();
              FUN_009885d0();
              local_8._0_1_ = 0x39;
              FUN_009a8ee0(local_84,local_54);
              local_8._0_1_ = 0x3a;
              iVar4 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
              local_8._0_1_ = 0x3b;
              FUN_00408ed0();
              FUN_00408ad0();
              local_8._0_1_ = 0x39;
              FUN_009a9740();
              local_8 = CONCAT31(local_8._1_3_,0x31);
              FUN_00408ad0();
              FUN_0040c830();
              FUN_0099ee70();
              FUN_00459820();
              ExceptionList = local_10;
              return param_2;
            }
            local_8._0_1_ = 0;
            uVar2 = (undefined1)local_8;
            local_8._0_1_ = 0;
            param_5 = iVar4;
            if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
        }
      }
    }
  }
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = local_10;
  return param_2;
}

