// FUN_005ba7e0 @ 005ba7e0 body=[[005ba7e0, 005bb475] [005bb479, 005bb4b7]]


void FUN_005ba7e0(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  uint local_250 [4];
  undefined4 local_240;
  uint local_23c;
  uint local_234 [4];
  undefined4 local_224;
  uint local_220;
  undefined1 local_218 [4];
  undefined1 local_214 [4];
  undefined1 local_210 [4];
  undefined1 local_20c [4];
  undefined1 local_208 [4];
  undefined1 local_204 [4];
  undefined1 local_200 [4];
  undefined1 local_1fc [4];
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  undefined1 local_1f0 [4];
  undefined1 local_1ec [4];
  undefined1 local_1e8 [4];
  undefined1 local_1e4 [4];
  undefined1 local_1e0 [4];
  undefined1 local_1dc [4];
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [28];
  undefined1 local_1b4 [148];
  undefined **appuStack_120 [66];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5a8a2;
  local_14 = ExceptionList;
  if (param_2 < 0x664) {
    if (param_2 == 0x663) {
      ExceptionList = &local_14;
      (**(code **)(in_ECX[0x48] + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 < 0x4d7) {
      if (param_2 == 0x4d6) {
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1e4);
        in_ECX[0x2c] = *piVar4;
        ExceptionList = local_14;
        return;
      }
      if (param_2 < 0x28e) {
        if (param_2 == 0x28d) {
          if (*(int *)(param_1 + 0x228) != 0x29f) {
            return;
          }
          *(undefined1 *)(in_ECX + 0xc) = 1;
          return;
        }
        if (param_2 < 0xb3) {
          if (param_2 == 0xb2) {
            ExceptionList = &local_14;
            iVar3 = FUN_00aaf0c5(param_1 + 0x22c);
            in_ECX[10] = iVar3;
            ExceptionList = local_14;
            return;
          }
          if (param_2 == 0x3c) {
            ExceptionList = &local_14;
            FUN_009a1750(in_ECX + 0x5f,0);
            ExceptionList = local_14;
            return;
          }
          if (param_2 == 0x8a) {
            ExceptionList = &local_14;
            iVar3 = FUN_00aaf0c5(param_1 + 0x22c);
            in_ECX[0x5e] = iVar3;
            ExceptionList = local_14;
            return;
          }
        }
        else {
          if (param_2 == 0xd9) {
            iVar3 = *(int *)(param_1 + 0x228);
            if (iVar3 == 0x4cd) {
              *(undefined1 *)((int)in_ECX + 0x39) = 1;
              return;
            }
            if (iVar3 != 0x4ce) {
              if (iVar3 != 0x4cb) {
                return;
              }
              *(undefined1 *)(in_ECX + 0xe) = 1;
              return;
            }
            *(undefined1 *)((int)in_ECX + 0x3a) = 1;
            return;
          }
          if (param_2 == 0x174) {
            ExceptionList = &local_14;
            piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1f0);
            in_ECX[0x8c] = *piVar4;
            ExceptionList = local_14;
            return;
          }
        }
      }
      else if (param_2 < 0x2e9) {
        if (param_2 == 0x2e8) {
          ExceptionList = &local_14;
          piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1ec);
          in_ECX[0x90] = *piVar4;
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x2a2) {
          if (*(int *)(param_1 + 0x228) != 0x29f) {
            return;
          }
          *(undefined1 *)((int)in_ECX + 0x3b) = 1;
          return;
        }
        if (param_2 == 0x2af) {
          ExceptionList = &local_14;
          (**(code **)(in_ECX[0x32] + 0xc))(param_1);
          ExceptionList = pvStack_18;
          return;
        }
      }
      else if (param_2 == 0x436) {
        if (*(int *)(param_1 + 0x228) != 0x29f) {
          return;
        }
        *(undefined1 *)(in_ECX + 0xf) = 1;
        in_ECX[0x96] = 1000;
        return;
      }
    }
    else if (param_2 < 0x4ec) {
      if (param_2 == 0x4eb) {
        ExceptionList = &local_14;
        (**(code **)(in_ECX[0x1c] + 0xc))(param_1);
        ExceptionList = pvStack_18;
        return;
      }
      switch(param_2) {
      case 0x4d7:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_210);
        in_ECX[0x2d] = *piVar4;
        ExceptionList = local_14;
        return;
      case 0x4db:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1e8);
        in_ECX[0x30] = *piVar4;
        ExceptionList = local_14;
        return;
      case 0x4dc:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_208);
        in_ECX[0x2e] = *piVar4;
        ExceptionList = local_14;
        return;
      case 0x4de:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1dc);
        in_ECX[0x31] = *piVar4;
        ExceptionList = local_14;
        return;
      case 0x4e8:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_200);
        in_ECX[0x8d] = *piVar4;
        ExceptionList = local_14;
        return;
      }
    }
    else {
      switch(param_2) {
      case 0x514:
        ExceptionList = &local_14;
        (**(code **)(in_ECX[0x22] + 0xc))(param_1);
        ExceptionList = pvStack_18;
        return;
      case 0x567:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1e0);
        in_ECX[0x91] = *piVar4;
        ExceptionList = local_14;
        return;
      case 0x56b:
        if (*(int *)(param_1 + 0x228) != 0x2a0) {
          return;
        }
        *(undefined1 *)(in_ECX + 0x13) = 1;
        return;
      case 0x5ea:
        *(bool *)((int)in_ECX + 0x42) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      }
    }
  }
  else if (param_2 < 0x969) {
    if (param_2 == 0x968) {
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x66,0);
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x787) {
      if (param_2 == 0x786) {
        iVar3 = *(int *)(param_1 + 0x228);
        if (iVar3 < 0x8ee) {
          if (iVar3 == 0x8ed) {
            in_ECX[0xd] = 1;
            return;
          }
          if (iVar3 == 0x436) {
            in_ECX[0xd] = 6;
            return;
          }
          if (iVar3 == 0x665) {
            in_ECX[0xd] = 3;
            return;
          }
        }
        else {
          switch(iVar3) {
          case 0x8ee:
            in_ECX[0xd] = 5;
            return;
          case 0x8ef:
            in_ECX[0xd] = 4;
            return;
          case 0x8f0:
            in_ECX[0xd] = 0;
            return;
          case 0x8f1:
            in_ECX[0xd] = 2;
            return;
          }
        }
        ExceptionList = &local_14;
        FUN_009885d0();
        local_c = 0;
        (**(code **)(*in_ECX + 0x18))(local_1b4);
        puStack_10._0_1_ = 1;
        FUN_004015b0(local_1d0,0x10d,0x10004);
        puStack_10._0_1_ = 2;
        uVar6 = FUN_00987d20();
        uVar6 = FUN_00989050(uVar6);
        FUN_00401280(uVar6);
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
        FUN_00401650();
        FUN_00408ad0();
        FUN_00408ad0();
        ExceptionList = pvStack_18;
        return;
      }
      switch(param_2) {
      case 0x664:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1f8);
        in_ECX[0x8a] = *piVar4;
        ExceptionList = local_14;
        return;
      case 0x665:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_218);
        in_ECX[0x8f] = *piVar4;
        ExceptionList = local_14;
        return;
      case 0x667:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1d8);
        in_ECX[0x92] = *piVar4;
        ExceptionList = local_14;
        return;
      case 0x702:
        ExceptionList = &local_14;
        piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1d4);
        in_ECX[0x8e] = *piVar4;
        ExceptionList = local_14;
        return;
      }
    }
    else {
      if (param_2 == 0x8ec) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x8fd) {
        ExceptionList = &local_14;
        FUN_009a1750(in_ECX + 0x83,0);
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x8fe) {
        ExceptionList = &local_14;
        FUN_009a1750(in_ECX + 0x7c,0);
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    switch(param_2) {
    case 0x969:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x6d,0);
      ExceptionList = local_14;
      return;
    case 0x96a:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x74,0);
      ExceptionList = local_14;
      return;
    case 0x96b:
      ExceptionList = &local_14;
      piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_214);
      in_ECX[0x2f] = *piVar4;
      ExceptionList = local_14;
      return;
    case 0x96c:
      *(bool *)((int)in_ECX + 0x45) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    case 0x9ff:
      ExceptionList = &local_14;
      iVar3 = FUN_00aaf0c5(param_1 + 0x22c);
      in_ECX[0x2a] = iVar3;
      ExceptionList = local_14;
      return;
    case 0xa00:
      ExceptionList = &local_14;
      iVar3 = FUN_00aaf0c5(param_1 + 0x22c);
      in_ECX[0x29] = iVar3;
      ExceptionList = local_14;
      return;
    case 0xa01:
      ExceptionList = &local_14;
      iVar3 = FUN_00aaf0c5(param_1 + 0x22c);
      in_ECX[0x28] = iVar3;
      ExceptionList = local_14;
      return;
    case 0xa06:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xa07:
      ExceptionList = &local_14;
      piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_20c);
      in_ECX[0x93] = *piVar4;
      ExceptionList = local_14;
      return;
    case 0xa08:
      ExceptionList = &local_14;
      piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_204);
      in_ECX[0x94] = *piVar4;
      ExceptionList = local_14;
      return;
    case 0xa09:
      ExceptionList = &local_14;
      iVar3 = FUN_00aaf0c5(param_1 + 0x22c);
      in_ECX[0xb] = iVar3;
      ExceptionList = local_14;
      return;
    case 0xa1f:
      ExceptionList = &local_14;
      piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1f4);
      in_ECX[0x97] = *piVar4;
      ExceptionList = local_14;
      return;
    case 0xa23:
      ExceptionList = &local_14;
      FUN_009a1bb0((int)in_ECX + 0x3d);
      ExceptionList = local_14;
      return;
    case 0xa42:
      ExceptionList = &local_14;
      piVar4 = (int *)FUN_0098fb60(param_1 + 0x228,local_1fc);
      in_ECX[0x8b] = *piVar4;
      ExceptionList = local_14;
      return;
    case 0xa57:
      ExceptionList = &local_14;
      FUN_009a1bb0((int)in_ECX + 0x3e);
      ExceptionList = local_14;
      return;
    }
  }
  pcVar1 = (char *)(param_1 + 0x24);
  local_220 = 0xf;
  local_224 = 0;
  local_234[0] = local_234[0] & 0xffffff00;
  pcVar5 = pcVar1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_14;
  FUN_00409350(pcVar1,(int)pcVar5 - (param_1 + 0x25));
  local_c = 3;
  iVar3 = FUN_004a0c90(DAT_0125870c,local_234);
  if (iVar3 == 0) {
    local_23c = 0xf;
    local_240 = 0;
    local_250[0] = local_250[0] & 0xffffff00;
    FUN_00409350("subunit.cpp",0xb);
    local_c._0_1_ = 4;
    uVar6 = FUN_004015b0(local_250,0x11d,0x10004);
    local_c._0_1_ = 5;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    uVar7 = 0;
    piVar4 = (int *)(iVar3 + 0x14);
    FUN_00987d50(uVar6,"Unknown keyword \'",0x11,0);
    uVar6 = FUN_00418e30(uVar6,pcVar1,extraout_ECX,"\' in ");
    uVar6 = FUN_00418e30(uVar6);
    if (0xf < *(uint *)(iVar3 + 0x28)) {
      piVar4 = (int *)*piVar4;
    }
    uVar6 = FUN_00418e30(uVar6,piVar4);
    uVar6 = FUN_00418e30(uVar6,&DAT_00e004e4,uVar7,uVar7);
    uVar6 = FUN_00455470(uVar6);
    FUN_00401280(uVar6);
    local_c = CONCAT31(local_c._1_3_,4);
    FUN_00987ac0(appuStack_120);
    appuStack_120[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_120);
    if (0xf < local_23c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_250[0]);
    }
    local_23c = 0xf;
    local_240 = 0;
    local_250[0] = local_250[0] & 0xffffff00;
  }
  else {
    (**(code **)(*(int *)(in_ECX[0x18] + *(int *)(iVar3 + 0x30) * 0x18) + 0xc))(param_1);
  }
  if (local_220 < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_234[0]);
}

