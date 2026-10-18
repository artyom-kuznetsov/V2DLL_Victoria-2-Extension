// FUN_0056a330 @ 0056a330 body=[[0056a330, 0056a7fa] [0056a7fe, 0056a91c] [0056a937, 0056ab9b] [0056ab9f, 0056aeeb]]


void FUN_0056a330(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char *pcVar10;
  uint local_604 [4];
  undefined4 local_5f4;
  uint local_5f0;
  uint local_5e8 [4];
  undefined4 local_5d8;
  uint local_5d4;
  uint local_5cc [4];
  undefined4 local_5bc;
  uint local_5b8;
  undefined1 local_5b0 [28];
  undefined1 local_594 [28];
  undefined1 local_578 [28];
  undefined1 local_55c [28];
  undefined1 local_540 [288];
  undefined **appuStack_420 [257];
  void *pvStack_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b95f6d;
  local_14 = ExceptionList;
  if (param_2 < 0x590) {
    if (param_2 != 0x58f) {
      if (param_2 < 0x3bb) {
        if (param_2 == 0x3ba) {
          ExceptionList = &local_14;
          (**(code **)(*(int *)(in_ECX + 0x370) + 0xc))(param_1);
          ExceptionList = pvStack_18;
          return;
        }
        if (param_2 < 0x1c1) {
          if (param_2 == 0x1c0) {
            ExceptionList = &local_14;
            uVar2 = FUN_009885d0();
            local_c = 0x11;
            iVar6 = *(int *)(in_ECX + 0xac);
            puVar3 = (undefined1 *)FUN_00aae9af(0x28);
            local_c = CONCAT31(local_c._1_3_,0x12);
            if (puVar3 == (undefined1 *)0x0) {
              puVar3 = (undefined1 *)0x0;
            }
            else {
              *(undefined4 *)(puVar3 + 0x14) = 0xf;
              *(undefined4 *)(puVar3 + 0x10) = 0;
              *puVar3 = 0;
              FUN_00408ed0(uVar2,0,0xffffffff);
              *(int *)(puVar3 + 0x1c) = iVar6;
              *(undefined4 *)(puVar3 + 0x20) = 0;
              puVar3[0x24] = 0;
            }
            iVar7 = *(int *)(in_ECX + 0xb0);
            *(undefined1 **)(in_ECX + 0xac) = puVar3;
            *(int *)(in_ECX + 0xb0) = iVar7 + 1;
            if (iVar7 != 0) {
              *(undefined1 **)(iVar6 + 0x20) = puVar3;
              FUN_00408ad0();
              ExceptionList = local_14;
              return;
            }
            *(undefined1 **)(in_ECX + 0xa8) = puVar3;
            FUN_00408ad0();
            ExceptionList = local_14;
            return;
          }
          if (param_2 == 0xb) {
            ExceptionList = &local_14;
            iVar6 = FUN_00aaf0c5(param_1 + 0x22c);
            if (iVar6 == *(int *)(in_ECX + 0x2e4)) {
              ExceptionList = local_14;
              return;
            }
            FUN_009885d0();
            local_c = 0;
            FUN_004015b0(local_594,0x268,0x10004);
            local_c._0_1_ = 1;
            uVar2 = FUN_00987d20();
            FUN_00401280(uVar2);
            local_c = (uint)local_c._1_3_ << 8;
            FUN_00401650();
            FUN_00408ad0();
            ExceptionList = local_14;
            return;
          }
          if (param_2 == 0x77) {
            ExceptionList = &local_14;
            uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
            *(undefined4 *)(in_ECX + 0x340) = uVar2;
            ExceptionList = local_14;
            return;
          }
        }
        else if (param_2 == 0x2ad) {
          ExceptionList = &local_14;
          FUN_009a1c10();
          ExceptionList = local_14;
          return;
        }
      }
      else if (param_2 < 0x512) {
        if (param_2 == 0x511) {
          ExceptionList = &local_14;
          uVar2 = FUN_009885d0();
          local_c = 2;
          FUN_00576f80();
          iVar6 = FUN_005c2ad0(uVar2);
          local_c = 0xffffffff;
          FUN_00408ad0();
          if (iVar6 != 0) {
            *(int *)(in_ECX + 0x310) = iVar6;
            ExceptionList = local_14;
            return;
          }
          FUN_009885d0();
          local_c = 3;
          FUN_004015b0(local_55c,0x287,0x10004);
          local_c = CONCAT31(local_c._1_3_,4);
          iVar6 = param_1 + 0x24;
          uVar2 = FUN_00987d20(iVar6,iVar6,"\' in ",iVar6,&DAT_00e004e4,iVar6,
                               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 8));
          uVar2 = FUN_00418e30(uVar2);
          uVar2 = FUN_00418e30(uVar2);
          uVar2 = FUN_00989050(uVar2);
          uVar2 = FUN_00418e30(uVar2);
          uVar2 = FUN_00455470(uVar2);
          FUN_00401280(uVar2);
          local_14 = (void *)CONCAT31(local_14._1_3_,3);
          FUN_00401650();
          FUN_00408ad0();
          ExceptionList = pvStack_1c;
          return;
        }
        if (param_2 == 0x3ee) {
          ExceptionList = &local_14;
          uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
          *(undefined4 *)(in_ECX + 0x344) = uVar2;
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x4d5) {
          *(bool *)(in_ECX + 0x358) = *(int *)(param_1 + 0x228) == 0x29f;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        if (param_2 == 0x56c) goto LAB_0056ad96;
      }
      goto LAB_0056ab2f;
    }
    pcVar10 = (char *)(param_1 + 0x22c);
    local_5f0 = 0xf;
    local_5f4 = 0;
    local_604[0] = local_604[0] & 0xffffff00;
    pcVar5 = pcVar10;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350(pcVar10,(int)pcVar5 - (param_1 + 0x22d));
    local_c = 0xe;
    FUN_004dad40();
    iVar6 = FUN_004dc420(local_604);
    if (iVar6 == 0) {
      iVar6 = FUN_004dacc0();
    }
    local_c = 0xffffffff;
    if (0xf < local_5f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_604[0]);
    }
    local_5f0 = 0xf;
    local_5f4 = 0;
    local_604[0] = local_604[0] & 0xffffff00;
    if (iVar6 != 0) {
      *(int *)(in_ECX + 0x354) = iVar6;
      if (*(int *)(iVar6 + 300) != 0) {
        *(undefined4 *)
         (*(int *)(in_ECX + 0x98) + *(int *)(*(int *)(*(int *)(iVar6 + 300) + 0x80) + 8) * 4) = 1;
      }
      *(int *)(*(int *)(in_ECX + 0x354) + 0x14) = in_ECX;
      ExceptionList = local_14;
      return;
    }
    local_5b8 = 0xf;
    local_5bc = 0;
    local_5cc[0] = local_5cc[0] & 0xffffff00;
    FUN_00409350("technology.cpp",0xe);
    local_c = 0xf;
    uVar2 = FUN_004015b0(local_5cc,0x2ca,0x10004);
    local_c._0_1_ = 0x10;
    FUN_00987d50(uVar2,"unknown building \'",0x12,0);
    uVar2 = FUN_00418e30(uVar2,pcVar10,extraout_ECX,"\' in technology files.");
    uVar2 = FUN_00418e30(uVar2);
    FUN_00401280(uVar2);
    local_c = CONCAT31(local_c._1_3_,0xf);
    FUN_00987ac0(appuStack_420);
    appuStack_420[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_420);
    if (0xf < local_5b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5cc[0]);
    }
  }
  else {
    if (param_2 < 0x8cd) {
      if (param_2 != 0x8cc) {
        if (param_2 < 0x72b) {
          if (param_2 == 0x72a) {
            ExceptionList = &local_14;
            (**(code **)(*(int *)(in_ECX + 0x2f0) + 0xc))(param_1);
            ExceptionList = pvStack_18;
            return;
          }
          if (param_2 == 0x5cb) {
            *(bool *)(in_ECX + 0x30c) = *(int *)(param_1 + 0x228) == 0x29f;
            return;
          }
          if (param_2 == 0x674) {
            ExceptionList = &local_14;
            uVar2 = FUN_009885d0();
            local_c = 5;
            uVar4 = FUN_0055e410(uVar2);
            iVar6 = FUN_0055e6e0(uVar4,uVar2);
            local_c = 0xffffffff;
            FUN_00408ad0();
            if (iVar6 != 0) {
              *(int *)(in_ECX + 0x350) = iVar6;
              ExceptionList = local_14;
              return;
            }
            FUN_009885d0();
            local_c = 6;
            FUN_004015b0(local_5b0,0x2a6,0x10004);
            local_c._0_1_ = 7;
            uVar2 = FUN_00987d20(param_1 + 0x22c,extraout_ECX_00,"\' in technology files.");
            uVar2 = FUN_00418e30(uVar2);
            uVar2 = FUN_00418e30(uVar2);
            FUN_00401280(uVar2);
            local_c = CONCAT31(local_c._1_3_,6);
            FUN_00401650();
            FUN_00408ad0();
            ExceptionList = local_14;
            return;
          }
        }
        else if (param_2 == 0x73e) {
          ExceptionList = &local_14;
          FUN_009a1750(in_ECX + 0x314,0);
          ExceptionList = local_14;
          return;
        }
LAB_0056ab2f:
        local_5d4 = 0xf;
        local_5d8 = 0;
        local_5e8[0] = local_5e8[0] & 0xffffff00;
        pcVar5 = (char *)(param_1 + 0x24);
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        ExceptionList = &local_14;
        FUN_00409350((char *)(param_1 + 0x24),(int)pcVar5 - (param_1 + 0x25));
        local_c = 0x13;
        FUN_005c1a10();
        iVar6 = FUN_005c2ad0(local_5e8);
        local_c = 0xffffffff;
        if (0xf < local_5d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5e8[0]);
        }
        local_5d4 = 0xf;
        local_5d8 = 0;
        local_5e8[0] = local_5e8[0] & 0xffffff00;
        if (iVar6 == 0) {
          FUN_0056d450(param_1,param_2);
          ExceptionList = local_14;
          return;
        }
        FUN_00567860(in_ECX);
        iVar7 = FUN_00aae9af(0x260);
        local_c = 0x14;
        if (iVar7 == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)FUN_005ba2a0(iVar7,iVar6 + 8,*(undefined4 *)(iVar6 + 0x24));
        }
        local_c = 0xffffffff;
        (**(code **)(*piVar8 + 0xc))(param_1);
        iVar6 = *(int *)(in_ECX + 0x334);
        puVar9 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = piVar8;
          puVar9[1] = iVar6;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar7 = *(int *)(in_ECX + 0x338);
        *(undefined4 **)(in_ECX + 0x334) = puVar9;
        *(int *)(in_ECX + 0x338) = iVar7 + 1;
        if (iVar7 != 0) {
          *(undefined4 **)(iVar6 + 8) = puVar9;
          ExceptionList = pvStack_18;
          return;
        }
        *(undefined4 **)(in_ECX + 0x330) = puVar9;
        ExceptionList = pvStack_18;
        return;
      }
    }
    else if (param_2 != 0x8ea) {
      if (param_2 == 0x98a) {
        ExceptionList = &local_14;
        FUN_009a1bb0(in_ECX + 0x38c);
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0xa3e) {
        ExceptionList = &local_14;
        uVar2 = FUN_009885d0();
        local_c = 8;
        FUN_005c1a10();
        iVar6 = FUN_005c2ad0(uVar2);
        local_c = 0xffffffff;
        FUN_00408ad0();
        if (iVar6 == 0) {
          FUN_009885d0();
          local_c = 9;
          FUN_004015b0(local_578,0x2b1,0x10004);
          local_c._0_1_ = 10;
          uVar2 = FUN_00987d20(param_1 + 0x22c,extraout_ECX_01,"\' in technology files.");
          uVar2 = FUN_00418e30(uVar2);
          uVar2 = FUN_00418e30(uVar2);
          FUN_00401280(uVar2);
          local_c = CONCAT31(local_c._1_3_,9);
          FUN_00401650();
          local_c = 0xffffffff;
          FUN_00408ad0();
        }
        else {
          *(int *)(in_ECX + 0x348) = iVar6;
        }
LAB_0056ad96:
        uVar2 = FUN_009885d0();
        local_c = 0xb;
        FUN_005c1a10();
        iVar6 = FUN_005c2ad0(uVar2);
        local_c = 0xffffffff;
        FUN_00408ad0();
        if (iVar6 != 0) {
          *(int *)(in_ECX + 0x34c) = iVar6;
          ExceptionList = local_14;
          return;
        }
        FUN_009885d0();
        local_c = 0xc;
        FUN_004015b0(local_540,0x2ba,0x10004);
        local_c._0_1_ = 0xd;
        uVar2 = FUN_00987d20(param_1 + 0x22c,extraout_ECX_02,"\' in technology files.");
        uVar2 = FUN_00418e30(uVar2);
        uVar2 = FUN_00418e30(uVar2);
        FUN_00401280(uVar2);
        local_c = CONCAT31(local_c._1_3_,0xc);
        FUN_00401650();
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      goto LAB_0056ab2f;
    }
    ExceptionList = &local_14;
    FUN_009a1ce0();
  }
  ExceptionList = local_14;
  return;
}

