// FUN_00956950 @ 00956950 body=[[00956950, 00957925] [00957929, 009579f5]]


void FUN_00956950(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *puVar6;
  undefined8 local_3d8;
  undefined1 local_3d0 [16];
  undefined4 local_3c0;
  undefined4 local_3bc;
  uint local_3b4 [4];
  undefined4 local_3a4;
  uint local_3a0;
  undefined1 local_398 [28];
  undefined1 local_37c [28];
  undefined1 auStack_360 [28];
  undefined1 local_344 [28];
  undefined1 auStack_328 [56];
  undefined1 local_2f0 [728];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b902f3;
  local_14 = ExceptionList;
  if (param_2 < 0x918) {
    if (param_2 == 0x917) {
      ExceptionList = &local_14;
      FUN_00968190(param_1);
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x692) {
      if (param_2 == 0x691) {
switchD_0095741d_caseD_a67:
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
      if (param_2 < 0x293) {
        if (param_2 == 0x292) {
          ExceptionList = &local_14;
          uVar5 = FUN_009885d0();
          local_c = 3;
          FUN_005662c0();
          iVar3 = FUN_005677b0(uVar5);
          if (iVar3 == 0) {
            iVar3 = FUN_005676d0();
          }
          *(int *)(in_ECX + 0x70) = iVar3;
          local_c = 0xffffffff;
          FUN_00408ad0();
          cVar1 = (**(code **)(**(int **)(in_ECX + 0x70) + 0x18))();
          if (cVar1 != '\0') {
            ExceptionList = local_14;
            return;
          }
          FUN_009885d0();
          local_c = 4;
          FUN_004015b0(auStack_328,0x27f,0x10004);
          local_c._0_1_ = 5;
          uVar5 = FUN_00987d20(param_1 + 0x22c,extraout_ECX_00,"\' in popfiles.");
          uVar5 = FUN_00418e30(uVar5);
          uVar5 = FUN_00418e30(uVar5);
          FUN_00401280(uVar5);
          local_c = CONCAT31(local_c._1_3_,4);
          FUN_00401650();
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
        if (param_2 < 0x1df) {
          if (param_2 == 0x1de) {
            ExceptionList = &local_14;
            (**(code **)(*(int *)(in_ECX + 0x9c) + 0xc))(param_1);
            ExceptionList = pvStack_18;
            return;
          }
          if (param_2 == 0xb) {
            ExceptionList = &local_14;
            iVar3 = FUN_00aaf0c5(param_1 + 0x22c);
            if (iVar3 == 0) {
              FUN_009c1a60(param_1,0xb);
              ExceptionList = local_14;
              return;
            }
            uVar5 = FUN_00aaf0c5(param_1 + 0x22c);
            *(undefined4 *)(in_ECX + 8) = 0x2e;
            *(undefined4 *)(in_ECX + 0xc) = uVar5;
            ExceptionList = local_14;
            return;
          }
          if (param_2 == 0x2e) {
            ExceptionList = &local_14;
            FUN_009a1c10();
            ExceptionList = local_14;
            return;
          }
        }
        else {
          if (param_2 == 0x1e3) {
            ExceptionList = &local_14;
            FUN_009a1d40();
            ExceptionList = local_14;
            return;
          }
          if (param_2 == 0x28c) {
            local_3d8 = CONCAT44(local_3d8._4_4_,param_1 + 0x22c);
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 0;
            uVar5 = FUN_0055f640();
            *(undefined4 *)(in_ECX + 0x6c) = uVar5;
            local_c = 0xffffffff;
            FUN_00408ad0();
            cVar1 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x18))();
            if (cVar1 != '\0') {
              ExceptionList = local_14;
              return;
            }
            FUN_009885d0();
            local_c = 1;
            FUN_004015b0(auStack_360,0x278,0x10004);
            local_c._0_1_ = 2;
            uVar5 = FUN_00987d20((undefined4)local_3d8,extraout_ECX,"\' in popfiles.");
            uVar5 = FUN_00418e30(uVar5);
            uVar5 = FUN_00418e30(uVar5);
            FUN_00401280(uVar5);
            local_c = CONCAT31(local_c._1_3_,1);
            FUN_00401650();
            FUN_00408ad0();
            ExceptionList = local_14;
            return;
          }
        }
      }
      else if (param_2 < 0x4f1) {
        if (param_2 == 0x4f0) {
          ExceptionList = &local_14;
          FUN_009a1d40();
          local_3d8 = 0;
          cVar1 = FUN_0043a5e0();
          if (cVar1 == '\0') {
            ExceptionList = local_14;
            return;
          }
          *(undefined4 *)(in_ECX + 0x180) = 0;
          *(undefined4 *)(in_ECX + 0x184) = 0;
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x2b0) {
          ExceptionList = &local_14;
          FUN_009a1d40();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x4c6) {
          ExceptionList = &local_14;
          (**(code **)(*(int *)(in_ECX + 0x74) + 0xc))(param_1);
          ExceptionList = pvStack_18;
          return;
        }
      }
      else if (param_2 == 0x4f3) {
        ExceptionList = &local_14;
        if (*(int *)(in_ECX + 0x1d4) == 0) {
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af(0x100);
          local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
          local_c = 9;
          if (iVar3 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00954910(iVar3);
          }
          *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
        }
        local_c = 0xffffffff;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
    }
    else if (param_2 < 0x8b4) {
      if (param_2 == 0x8b3) {
        return;
      }
      if (param_2 < 0x7b1) {
        if (param_2 == 0x7b0) {
          local_3d8 = 0;
          ExceptionList = &local_14;
          FUN_009a19f0(param_1,&local_3d8);
          FUN_009885d0();
          local_c = 0x14;
          FUN_00967ed0(local_398);
          local_c = CONCAT31(local_c._1_3_,0x15);
          FUN_004c0270();
          FUN_00584e60();
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x692) goto switchD_0095741d_caseD_a68;
        if (param_2 == 0x697) {
          ExceptionList = &local_14;
          FUN_009885d0();
          local_c = 0x16;
          FUN_004ebcb0();
          uVar5 = FUN_005677b0(local_37c);
          *(undefined4 *)(in_ECX + 0x268) = uVar5;
          local_c = 0xffffffff;
          FUN_00408ad0();
          if (*(int *)(in_ECX + 0x268) != 0) {
            ExceptionList = local_14;
            return;
          }
          FUN_009885d0();
          local_c = 0x17;
          FUN_009a2090(param_1,local_2f0);
          local_c._0_1_ = 0x18;
          FUN_004015b0(local_344,0x322,0x10004);
          local_c._0_1_ = 0x19;
          uVar5 = FUN_00987d20(param_1 + 0x22c);
          uVar5 = FUN_00418e30(uVar5);
          uVar5 = FUN_00989050(uVar5);
          FUN_00401280(uVar5);
          local_c = CONCAT31(local_c._1_3_,0x18);
          FUN_00401650();
          FUN_00408ad0();
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x70c) {
          ExceptionList = &local_14;
          FUN_009a1c10();
          ExceptionList = local_14;
          return;
        }
      }
      else {
        if (param_2 == 0x839) {
          local_3bc = 0xf;
          local_3c0 = 0;
          local_3d0[0] = 0;
          local_c = 6;
          ExceptionList = &local_14;
          FUN_009a1750(local_3d0,0);
          if (*(int *)(in_ECX + 0x1d4) == 0) {
            iVar3 = FUN_00aae9af(0x100);
            local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
            local_c._0_1_ = 7;
            if (iVar3 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00954910(iVar3);
            }
            local_c = CONCAT31(local_c._1_3_,6);
            *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
          }
          puVar6 = local_3d0;
          uVar5 = FUN_004de580(puVar6);
          uVar5 = FUN_004de9a0(uVar5,puVar6);
          *(undefined4 *)(*(int *)(in_ECX + 0x1d4) + 0xb0) = uVar5;
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x84f) {
          ExceptionList = &local_14;
          if (*(int *)(in_ECX + 0x1d4) == 0) {
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af(0x100);
            local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
            local_c = 8;
            if (iVar3 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00954910(iVar3);
            }
            *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
          }
          local_c = 0xffffffff;
          FUN_009a1d40();
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      switch(param_2) {
      case 0x8b4:
        goto switchD_00957133_caseD_8b4;
      case 0x8ff:
        ExceptionList = &local_14;
        if (*(int *)(in_ECX + 0x1d4) == 0) {
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af(0x100);
          local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
          local_c = 10;
          if (iVar3 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00954910(iVar3);
          }
          *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
        }
        local_c = 0xffffffff;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      case 0x900:
        ExceptionList = &local_14;
        if (*(int *)(in_ECX + 0x1d4) == 0) {
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af(0x100);
          local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
          local_c = 0xb;
          if (iVar3 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00954910(iVar3);
          }
          *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
        }
        local_c = 0xffffffff;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      case 0x901:
        ExceptionList = &local_14;
        if (*(int *)(in_ECX + 0x1d4) == 0) {
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af(0x100);
          local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
          local_c = 0xc;
          if (iVar3 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00954910(iVar3);
          }
          *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
        }
        local_c = 0xffffffff;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      case 0x902:
        ExceptionList = &local_14;
        if (*(int *)(in_ECX + 0x1d4) == 0) {
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af(0x100);
          local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
          local_c = 0x12;
          if (iVar3 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00954910(iVar3);
          }
          *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
        }
        local_c = 0xffffffff;
        (**(code **)(*(int *)(*(int *)(in_ECX + 0x1d4) + 0x58) + 0xc))(param_1);
        ExceptionList = pvStack_18;
        return;
      }
    }
  }
  else if (param_2 < 0xa4a) {
    if (param_2 == 0xa49) {
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x96d) {
      ExceptionList = &local_14;
      uVar5 = FUN_009885d0();
      local_c = 0x1a;
      iVar3 = FUN_00975ed0(uVar5);
      if (iVar3 == 0) {
        iVar3 = FUN_00974850();
      }
      FUN_00408ad0();
      *(int *)(in_ECX + 0x270) = -*(int *)(iVar3 + 0x50);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x96e) {
      ExceptionList = &local_14;
      FUN_0055c6c0(DAT_012587e4,&local_3d8,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x270) = local_3d8._4_4_;
      ExceptionList = local_14;
      return;
    }
  }
  else {
    ExceptionList = &local_14;
    switch(param_2) {
    case 0xa67:
      goto switchD_0095741d_caseD_a67;
    case 0xa68:
switchD_0095741d_caseD_a68:
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0xa69:
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0xa6f:
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0xa70:
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0xa71:
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0xa7c:
      ExceptionList = &local_14;
      if (*(int *)(in_ECX + 0x1d4) == 0) {
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af(0x100);
        local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
        local_c = 0x11;
        if (iVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00954910(iVar3);
        }
        *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
      }
      local_c = 0xffffffff;
      (**(code **)(**(int **)(in_ECX + 0x1d4) + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    case 0xa7f:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa80:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa81:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa82:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa84:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa85:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa86:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa89:
      ExceptionList = &local_14;
      if (*(int *)(in_ECX + 0x1d4) == 0) {
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af(0x100);
        local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
        local_c = 0xd;
        if (iVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00954910(iVar3);
        }
        *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
      }
      local_c = 0xffffffff;
      FUN_009a1d40();
    case 0xa8a:
      if (*(int *)(in_ECX + 0x1d4) == 0) {
        iVar3 = FUN_00aae9af(0x100);
        local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
        local_c = 0xe;
        if (iVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00954910(iVar3);
        }
        local_c = 0xffffffff;
        *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
      }
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0xa8b:
      ExceptionList = &local_14;
      if (*(int *)(in_ECX + 0x1d4) == 0) {
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af(0x100);
        local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
        local_c = 0xf;
        if (iVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00954910(iVar3);
        }
        *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
      }
      local_c = 0xffffffff;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0xa8c:
      ExceptionList = &local_14;
      if (*(int *)(in_ECX + 0x1d4) == 0) {
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af(0x100);
        local_3d8 = CONCAT44(local_3d8._4_4_,iVar3);
        local_c = 0x10;
        if (iVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00954910(iVar3);
        }
        *(undefined4 *)(in_ECX + 0x1d4) = uVar5;
      }
      local_c = 0xffffffff;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    case 0xa8d:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa96:
      local_3bc = 0xf;
      local_3c0 = 0;
      local_3d0[0] = 0;
      local_c = 0x13;
      ExceptionList = &local_14;
      FUN_009a1750(local_3d0,0);
      iVar3 = FUN_005c2ad0(local_3d0);
      if (iVar3 == 0) {
        iVar3 = FUN_0096bb70();
      }
      *(int *)(in_ECX + 0x68) = iVar3;
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    }
  }
  local_3a0 = 0xf;
  local_3a4 = 0;
  local_3b4[0] = local_3b4[0] & 0xffffff00;
  pcVar2 = (char *)(param_1 + 0x24);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350((char *)(param_1 + 0x24),(int)pcVar2 - (param_1 + 0x25));
  local_c = 0x1b;
  iVar3 = FUN_004a2f70(local_3b4);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_00561180();
  }
  else {
    piVar4 = (int *)FUN_004a2f70(local_3b4);
  }
  local_c = 0xffffffff;
  if (0xf < local_3a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3b4[0]);
  }
  local_3a0 = 0xf;
  local_3a4 = 0;
  local_3b4[0] = local_3b4[0] & 0xffffff00;
  if ((piVar4 != (int *)0x0) && (cVar1 = (**(code **)(*piVar4 + 0x18))(), cVar1 != '\0')) {
    *(int **)(in_ECX + 0x6c) = piVar4;
    uVar5 = FUN_009885d0();
    local_c = 0x1c;
    FUN_005662c0();
    iVar3 = FUN_005677b0(uVar5);
    if (iVar3 == 0) {
      iVar3 = FUN_005676d0();
    }
    *(int *)(in_ECX + 0x70) = iVar3;
    FUN_00408ad0();
    ExceptionList = local_14;
    return;
  }
  if (param_2 != 0xb) {
    FUN_009a0f40();
    ExceptionList = local_14;
    return;
  }
  FUN_009a19f0(param_1,in_ECX + 8);
switchD_00957133_caseD_8b4:
  ExceptionList = local_14;
  return;
}

