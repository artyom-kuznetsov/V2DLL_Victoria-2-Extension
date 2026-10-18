// FUN_0096c680 @ 0096c680 body=[[0096c680, 0096c83b] [0096c840, 0096ca23] [0096ca30, 0096cce9] [0096ccf0, 0096cdd8] [0096cde0, 0096ce17] [0096ce20, 0096d577]]


void FUN_0096c680(int param_1,int param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_514 [108];
  undefined1 local_4a8 [40];
  undefined1 local_480 [8];
  undefined1 auStack_478 [28];
  undefined1 auStack_45c [28];
  undefined1 local_440 [28];
  undefined1 auStack_424 [28];
  undefined1 auStack_408 [168];
  int aiStack_360 [210];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6435c;
  local_14 = ExceptionList;
  if (param_2 < 0x8dd) {
    if (param_2 == 0x8dc) {
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x3da);
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x1c0) {
      if (param_2 == 0x1bf) {
        ExceptionList = &local_14;
        *(undefined1 *)(in_ECX + 0x3d0) = 1;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x3c) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x55) {
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0xe8) + 0xc))(param_1);
        ExceptionList = pvStack_18;
        return;
      }
    }
    else if (param_2 < 499) {
      if (param_2 == 0x1f2) {
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_4a8);
        *(undefined4 *)(in_ECX + 0x3c0) = *puVar3;
        *(undefined4 *)(in_ECX + 0x3c4) = puVar3[1];
        ExceptionList = local_14;
        return;
      }
      ppvVar1 = &local_14;
      ppvVar2 = &local_14;
      switch(param_2) {
      case 0x1cb:
        ExceptionList = &local_14;
        FUN_009a1bb0(in_ECX + 0x3d9);
        ExceptionList = local_14;
        return;
      case 0x1d3:
        ExceptionList = &local_14;
        FUN_009a1bb0(in_ECX + 0x40);
        ExceptionList = local_14;
        return;
      case 0x1db:
        if (*(int *)(param_1 + 0x228) != 0xa5f) {
          *(uint *)(in_ECX + 0x3c) = (*(int *)(param_1 + 0x228) == 0xa61) + 1;
          return;
        }
        *(undefined4 *)(in_ECX + 0x3c) = 0;
        return;
      case 0x1dc:
        goto switchD_0096c776_caseD_1dc;
      case 0x1dd:
        goto switchD_0096c776_caseD_1dd;
      case 0x1de:
        while( true ) {
          ExceptionList = ppvVar2;
          piVar8 = *(int **)(param_1 + 0x1c);
          if ((char)piVar8[0x44] == '\0') {
            iVar4 = (**(code **)(*piVar8 + 4))();
            piVar8[2] = iVar4;
            if (iVar4 == 0) {
              piVar8[3] = 0x13;
            }
            *(undefined1 *)(piVar8 + 0x44) = 1;
          }
          piVar8 = piVar8 + 3;
          piVar9 = aiStack_360;
          for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar9 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar9 = piVar9 + 1;
          }
          if ((aiStack_360[0] == 4) || (aiStack_360[0] == 0x13)) break;
          FUN_009a1440(param_1);
          uVar5 = FUN_009885d0();
          local_c = 0;
          iVar4 = FUN_00975ed0(uVar5);
          if (iVar4 == 0) {
            iVar4 = FUN_00974850();
          }
          local_c = 0xffffffff;
          FUN_00408ad0();
          if (iVar4 == 0) {
            FUN_009885d0();
            local_c = 1;
            FUN_009885d0();
            local_c._0_1_ = 2;
            FUN_004015b0(auStack_424,0xae,0x10004);
            local_c._0_1_ = 3;
            uVar5 = FUN_00987d20(extraout_ECX,"\' in popfile.");
            uVar5 = FUN_00989050(uVar5);
            uVar5 = FUN_00418e30(uVar5);
            FUN_00401280(uVar5);
            local_c = CONCAT31(local_c._1_3_,2);
            FUN_00401650();
            FUN_00408ad0();
            local_c = 0xffffffff;
            FUN_00408ad0();
            ppvVar2 = ExceptionList;
          }
          else {
            (**(code **)(*(int *)(*(int *)(in_ECX + 0x70) + *(int *)(iVar4 + 0x50) * 0x1c) + 0xc))
                      (param_1);
            ppvVar2 = ExceptionList;
          }
        }
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        ExceptionList = local_14;
        return;
      case 0x1df:
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0x90) + 0xc))(param_1);
        ExceptionList = pvStack_18;
        return;
      case 0x1e1:
        while( true ) {
          ExceptionList = ppvVar1;
          piVar8 = *(int **)(param_1 + 0x1c);
          if ((char)piVar8[0x44] == '\0') {
            iVar4 = (**(code **)(*piVar8 + 4))();
            piVar8[2] = iVar4;
            if (iVar4 == 0) {
              piVar8[3] = 0x13;
            }
            *(undefined1 *)(piVar8 + 0x44) = 1;
          }
          piVar8 = piVar8 + 3;
          piVar9 = aiStack_360;
          for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar9 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar9 = piVar9 + 1;
          }
          if ((aiStack_360[0] == 4) || (aiStack_360[0] == 0x13)) break;
          FUN_009a1440(param_1);
          FUN_009885d0();
          local_c = 8;
          if (DAT_0131bb34 == 0) {
            iVar4 = FUN_00aae9af(0x188);
            local_c._0_1_ = 9;
            if (iVar4 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_0041a160();
            }
            local_c = CONCAT31(local_c._1_3_,8);
            FUN_00423700(uVar5);
          }
          iVar4 = FUN_005c2ad0(auStack_478);
          if (iVar4 == 0) {
            iVar4 = FUN_0096bb70();
          }
          iVar4 = *(int *)(iVar4 + 0x28);
          local_c = 0xffffffff;
          FUN_00408ad0();
          if (iVar4 < 1) {
            FUN_009885d0();
            local_c = 10;
            FUN_004015b0(auStack_408,0xd9,0x10004);
            local_c._0_1_ = 0xb;
            uVar5 = FUN_00987d20(param_1 + 0x24,param_1,&DAT_00df12c8);
            uVar5 = FUN_00418e30(uVar5);
            uVar5 = FUN_00418e30(uVar5);
            uVar5 = FUN_00989050(uVar5);
            FUN_00401280(uVar5);
            local_c = CONCAT31(local_c._1_3_,10);
            FUN_00401650();
            local_c = 0xffffffff;
            FUN_00408ad0();
          }
          (**(code **)(*(int *)(iVar4 * 0x30 + *(int *)(in_ECX + 200)) + 0xc))(param_1);
          ppvVar1 = ExceptionList;
        }
LAB_0096cfbe:
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        ExceptionList = local_14;
        return;
      }
    }
    else if (param_2 < 0x64d) {
      if (param_2 == 0x64c) {
        *(bool *)(in_ECX + 0x2c) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      }
      if (param_2 < 0x63f) {
        ExceptionList = &local_14;
        if (param_2 == 0x63e) {
          while( true ) {
            piVar8 = *(int **)(param_1 + 0x1c);
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar9 = aiStack_360;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar9 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar9 = piVar9 + 1;
            }
            if ((aiStack_360[0] == 4) || (aiStack_360[0] == 0x13)) break;
            FUN_009a1440(param_1);
            uVar5 = FUN_009885d0();
            local_c = 4;
            iVar4 = FUN_00973bd0(uVar5);
            local_c = 0xffffffff;
            FUN_00408ad0();
            if (iVar4 == 0) {
              FUN_009885d0();
              local_c = 5;
              FUN_009885d0();
              local_c._0_1_ = 6;
              FUN_004015b0(auStack_45c,0xbf,0x10004);
              local_c._0_1_ = 7;
              uVar5 = FUN_00987d20(*(undefined4 *)(param_1 + 0x1c),"\' in popfile ");
              uVar5 = FUN_00989050(uVar5);
              uVar5 = FUN_00418e30(uVar5);
              uVar5 = FUN_00989050(uVar5);
              FUN_00401280(uVar5);
              local_c = CONCAT31(local_c._1_3_,6);
              FUN_00401650();
              FUN_00408ad0();
              local_c = 0xffffffff;
              FUN_00408ad0();
            }
            else {
              (**(code **)(*(int *)(*(int *)(in_ECX + 0x80) + *(int *)(iVar4 + 0x28) * 0x1c) + 0xc))
                        (param_1);
            }
          }
          goto LAB_0096cfbe;
        }
        if (param_2 == 899) {
          ExceptionList = &local_14;
          FUN_005c1a10();
          FUN_004d5f50();
          while( true ) {
            piVar8 = *(int **)(param_1 + 0x1c);
            if ((char)piVar8[0x44] == '\0') {
              iVar4 = (**(code **)(*piVar8 + 4))();
              piVar8[2] = iVar4;
              if (iVar4 == 0) {
                piVar8[3] = 0x13;
              }
              *(undefined1 *)(piVar8 + 0x44) = 1;
            }
            piVar8 = piVar8 + 3;
            piVar9 = aiStack_360;
            for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar9 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar9 = piVar9 + 1;
            }
            if ((aiStack_360[0] == 4) || (aiStack_360[0] == 0x13)) break;
            FUN_009a1440(param_1);
            uVar5 = FUN_009885d0();
            local_c = 0x11;
            iVar4 = FUN_005c2ad0(uVar5);
            iVar4 = *(int *)(iVar4 + 0x24);
            iVar7 = *(int *)(in_ECX + 0x3dc);
            puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_514);
            *(undefined4 *)(iVar7 + iVar4 * 4) = *puVar3;
            local_c = 0xffffffff;
            FUN_00408ad0();
          }
          (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
          iVar7 = 0;
          iVar4 = 0;
          if ((int)(*(int *)(in_ECX + 0x3e0) - *(int *)(in_ECX + 0x3dc) & 0xfffffffcU) < 1) {
            ExceptionList = local_14;
            return;
          }
          iVar6 = *(int *)(in_ECX + 0x3dc);
          do {
            piVar8 = (int *)(iVar6 + iVar4 * 4);
            *piVar8 = *piVar8 + iVar7;
            iVar6 = *(int *)(in_ECX + 0x3dc);
            iVar7 = iVar7 + *(int *)(iVar6 + iVar4 * 4);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(in_ECX + 0x3e0) - iVar6 >> 2);
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x508) {
          ExceptionList = &local_14;
          puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_480);
          *(undefined4 *)(in_ECX + 0x48) = *puVar3;
          *(undefined4 *)(in_ECX + 0x4c) = puVar3[1];
          ExceptionList = local_14;
          return;
        }
      }
      else if (param_2 == 0x646) {
        ExceptionList = &local_14;
        FUN_009a1bb0(in_ECX + 0x41);
        ExceptionList = local_14;
        return;
      }
    }
    else {
      if (param_2 == 0x668) {
        *(bool *)(in_ECX + 0x42) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      }
      if (param_2 == 0x675) {
        ExceptionList = &local_14;
        FUN_009a1bb0(in_ECX + 0x3db);
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x6ac) {
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    switch(param_2) {
    case 0xa47:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa4b:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa62:
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    case 0xa63:
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    case 0xa64:
switchD_0096c776_caseD_1dc:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x50);
      ExceptionList = local_14;
      return;
    case 0xa65:
switchD_0096c776_caseD_1dd:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x51);
      ExceptionList = local_14;
      return;
    case 0xa6a:
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0xa6c:
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0xac) + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    case 0xa6f:
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x110) + 0xc))(param_1);
      FUN_0047db00(auStack_514,in_ECX + 0x110);
      puStack_10 = (undefined1 *)0xc;
      FUN_005621a0(auStack_514);
      FUN_0047dec0();
      puVar3 = (undefined4 *)FUN_0043a6a0();
      *(undefined4 *)(in_ECX + 800) = *puVar3;
      *(undefined4 *)(in_ECX + 0x324) = puVar3[1];
      FUN_0047dbb0(in_ECX + 0x218,in_ECX + 0x110);
      FUN_0047e4a0();
      ExceptionList = pvStack_18;
      return;
    case 0xa70:
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x168) + 0xc))(param_1);
      FUN_0047db00(auStack_514,in_ECX + 0x168);
      puStack_10 = (undefined1 *)0xd;
      FUN_005621a0(auStack_514);
      FUN_0047dec0();
      puVar3 = (undefined4 *)FUN_0043a6a0();
      *(undefined4 *)(in_ECX + 0x328) = *puVar3;
      *(undefined4 *)(in_ECX + 0x32c) = puVar3[1];
      FUN_0047dbb0(in_ECX + 0x270,in_ECX + 0x168);
      FUN_0047e4a0();
      ExceptionList = pvStack_18;
      return;
    case 0xa71:
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x1c0) + 0xc))(param_1);
      FUN_0047db00(auStack_514,in_ECX + 0x1c0);
      puStack_10 = (undefined1 *)0xe;
      FUN_005621a0(auStack_514);
      FUN_0047dec0();
      puVar3 = (undefined4 *)FUN_0043a6a0();
      *(undefined4 *)(in_ECX + 0x330) = *puVar3;
      *(undefined4 *)(in_ECX + 0x334) = puVar3[1];
      FUN_0047dbb0(in_ECX + 0x2c8,in_ECX + 0x1c0);
      FUN_0047e4a0();
      ExceptionList = pvStack_18;
      return;
    case 0xa76:
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x338) + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    case 0xa77:
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x358) + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    case 0xa78:
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x378) + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    case 0xa7a:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x39c);
      ExceptionList = local_14;
      return;
    case 0xa7d:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa7e:
      ExceptionList = &local_14;
      FUN_009885d0();
      local_c = 0xf;
      if (DAT_0131bb34 == 0) {
        iVar4 = FUN_00aae9af(0x188);
        local_c._0_1_ = 0x10;
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0041a160();
        }
        local_c = CONCAT31(local_c._1_3_,0xf);
        FUN_00423700(uVar5);
      }
      iVar4 = FUN_005c2ad0(local_440);
      if (iVar4 == 0) {
        iVar4 = FUN_0096bb70();
      }
      *(int *)(in_ECX + 0x3d4) = iVar4;
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    case 0xa83:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x3d8);
      ExceptionList = local_14;
      return;
    case 0xa88:
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x3ec);
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = &local_14;
  FUN_009a0f40();
  ExceptionList = local_14;
  return;
}

