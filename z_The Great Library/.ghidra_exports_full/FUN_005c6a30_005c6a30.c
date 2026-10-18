// FUN_005c6a30 @ 005c6a30 body=[[005c6a30, 005c730f]]


void FUN_005c6a30(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  char *pcVar8;
  undefined1 local_184 [8];
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int *local_174;
  int *local_170;
  undefined1 **local_16c;
  undefined1 *local_150;
  undefined1 local_14c [4];
  undefined1 local_148 [8];
  undefined1 local_140 [48];
  undefined1 local_110 [248];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9eaef;
  local_14 = ExceptionList;
  if (0x339 < param_2) {
    if (param_2 < 0x518) {
      if (param_2 == 0x517) {
        local_16c = &local_150;
        local_170 = (int *)(param_1 + 0x228);
        local_174 = (int *)0x5c71e3;
        ExceptionList = &local_14;
        puVar4 = (undefined4 *)FUN_0098fb60();
        *(undefined4 *)(in_ECX + 0x17c) = *puVar4;
        ExceptionList = local_14;
        return;
      }
      if (0x48b < param_2) {
        if (param_2 == 0x4cc) {
          local_16c = (undefined1 **)0x8c;
          local_170 = (int *)0x5c715a;
          ExceptionList = &local_14;
          piVar7 = (int *)FUN_00aae9af();
          local_c = 8;
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            local_170 = (int *)0x5c7178;
            local_16c = (undefined1 **)piVar7;
            FUN_005be1a0();
            *piVar7 = (int)CWing::vftable;
          }
          local_c = 0xffffffff;
          piVar7[0x18] = *(int *)(in_ECX + 0xb8);
          pcVar2 = *(code **)(*piVar7 + 0xc);
          piVar7[0x19] = *(int *)(in_ECX + 0xbc);
          local_16c = (undefined1 **)param_1;
          piVar7[0x1d] = in_ECX + -8;
          local_170 = (int *)0x5c71b2;
          (*pcVar2)();
          local_174 = (int *)0x5c71b8;
          local_170 = piVar7;
          FUN_005cb1d0();
          ExceptionList = pvStack_18;
          return;
        }
        if (param_2 != 0x4ef) {
          return;
        }
        local_16c = (undefined1 **)local_14c;
        local_170 = (int *)(param_1 + 0x228);
        local_174 = (int *)0x5c7131;
        ExceptionList = &local_14;
        puVar4 = (undefined4 *)FUN_0098fb60();
        *(undefined4 *)(in_ECX + 0xa8) = *puVar4;
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x48b) {
        local_16c = (undefined1 **)(param_1 + 0x22c);
        local_170 = (int *)0x5c70ed;
        ExceptionList = &local_14;
        uVar6 = FUN_00aaf0c5();
        *(undefined4 *)(in_ECX + 0x138) = uVar6;
        ExceptionList = local_14;
        return;
      }
      if (param_2 != 0x33a) {
        if (param_2 == 899) {
          *(bool *)(in_ECX + 0x70) = *(int *)(param_1 + 0x228) == 0x29f;
          return;
        }
        if (param_2 != 0x3f4) {
          return;
        }
        local_16c = (undefined1 **)(param_1 + 0x22c);
        local_170 = (int *)0x5c7064;
        ExceptionList = &local_14;
        iVar5 = FUN_00aaf0c5();
        *(undefined4 *)(in_ECX + 0xd8) =
             *(undefined4 *)(*(int *)(DAT_0125870c + 0x2238) + iVar5 * 4);
        ExceptionList = local_14;
        return;
      }
      ExceptionList = &local_14;
      FUN_009885d0();
    }
    else {
      if (param_2 < 0x816) {
        if (param_2 == 0x815) {
          local_16c = (undefined1 **)(param_1 + 0x22c);
          local_170 = (int *)local_148;
          local_174 = (int *)DAT_012587e4;
          uStack_178 = 0x5c7282;
          ExceptionList = &local_14;
          puVar4 = (undefined4 *)FUN_0055c6c0();
          *(undefined4 *)(in_ECX + 0x188) = *puVar4;
          *(undefined4 *)(in_ECX + 0x18c) = puVar4[1];
          ExceptionList = local_14;
          return;
        }
        if (param_2 != 0x5f7) {
          if (param_2 != 0x6cf) {
            return;
          }
          local_16c = (undefined1 **)(in_ECX + 0x58);
          local_170 = (int *)param_1;
          local_174 = (int *)0x5c722e;
          ExceptionList = &local_14;
          FUN_005dace0();
          ExceptionList = local_14;
          return;
        }
        local_16c = (undefined1 **)(in_ECX + 0x7e);
        local_170 = (int *)0x5c7251;
        ExceptionList = &local_14;
        FUN_009a1bb0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x816) {
        local_150 = local_184;
        ExceptionList = &local_14;
        FUN_009885d0();
      }
      else {
        if (param_2 != 0x9ac) {
          return;
        }
        local_150 = local_184;
        ExceptionList = &local_14;
        FUN_009885d0();
      }
    }
LAB_005c72f4:
    FUN_0043bb10();
    ExceptionList = local_14;
    return;
  }
  if (param_2 == 0x339) {
    pcVar8 = (char *)(param_1 + 0x22c);
    local_170 = (int *)0xf;
    local_174 = (int *)0x0;
    local_184[0] = 0;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    ExceptionList = &local_14;
    FUN_00409350();
    goto LAB_005c72f4;
  }
  if (param_2 < 0x2ca) {
    if (param_2 == 0x2c9) {
      local_16c = (undefined1 **)(param_1 + 0x22c);
      local_170 = (int *)0x5c6bd4;
      ExceptionList = &local_14;
      iVar5 = FUN_00aaf0c5();
      iVar5 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + iVar5 * 4);
      if (*(char *)(DAT_012588e8 + 0xd10) == '\0') {
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x134) * 4);
        if ((*(int *)(in_ECX + 0xbc) != *(int *)(iVar1 + 0x20)) &&
           (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(in_ECX + 0xbc) * 4) + 0x34) != 0
             || (((*(char *)(in_ECX + 0xb8) == 'R' && (*(char *)(in_ECX + 0xb9) == 'E')) &&
                 (*(char *)(in_ECX + 0xba) == 'B')))) ||
            (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
             (*(char *)(iVar1 + 0x1e) == 'B')))))) {
          local_16c = (undefined1 **)0x5c6c6e;
          cVar3 = FUN_00416e40();
          if (cVar3 == '\0') {
            local_16c = (undefined1 **)0x5c6c84;
            FUN_009885d0();
            local_c = 1;
            local_170 = *(int **)(iVar5 + 0x58);
            local_16c = (undefined1 **)0xe02bdc;
            local_174 = (int *)0xe02c04;
            uStack_178 = 0x5c6ca8;
            (**(code **)(*(int *)(in_ECX + -8) + 0x20))();
            FUN_00401320();
            local_c._0_1_ = 2;
            uVar6 = FUN_004015b0(local_110,0x175,0x10004);
            local_c._0_1_ = 4;
            uStack_178 = FUN_004238b0(uVar6);
            uStack_17c = 0x5c6cfe;
            local_174 = (int *)FUN_00418e30();
            uStack_178 = 0x5c6d07;
            local_170 = (int *)FUN_00455470();
            local_174 = (int *)0x5c6d0d;
            local_174 = (int *)FUN_00418e30();
            uStack_178 = 0x5c6d13;
            FUN_00401280();
            local_c = CONCAT31(local_c._1_3_,1);
            local_16c = (undefined1 **)0x5c6d2a;
            FUN_00401650();
            local_c = 0xffffffff;
            local_16c = (undefined1 **)0x5c6d3e;
            FUN_00408ad0();
          }
        }
      }
      local_170 = (int *)0x5c6d47;
      local_16c = (undefined1 **)iVar5;
      FUN_005cb2c0();
      ExceptionList = local_14;
      return;
    }
    if (0x19c < param_2) {
      if (param_2 == 0x1a6) {
        *(bool *)(in_ECX + 0xfc) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      }
      if (param_2 != 0x1d1) {
        return;
      }
      local_170 = (int *)local_140;
      local_174 = (int *)DAT_012587e4;
      uStack_178 = 0x5c6b78;
      ExceptionList = &local_14;
      local_16c = (undefined1 **)(in_ECX + 200);
      puVar4 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 200) = *puVar4;
      *(undefined4 *)(in_ECX + 0xcc) = puVar4[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x19c) {
      local_16c = (undefined1 **)(in_ECX + 0xdc);
      local_170 = (int *)param_1;
      local_174 = (int *)0x5c6b3a;
      ExceptionList = &local_14;
      FUN_00409810();
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0xb) {
      if (param_2 == 0x1a) {
        local_16c = (undefined1 **)0x5c6ad4;
        ExceptionList = &local_14;
        local_16c = (undefined1 **)FUN_009885d0();
        local_c = 0;
        local_170 = (int *)0x5c6ae8;
        FUN_005cdc70();
        local_16c = (undefined1 **)0x5c6af1;
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 != 0x88) {
        return;
      }
      local_16c = (undefined1 **)(in_ECX + 0x7d);
      local_170 = (int *)0x5c6aab;
      ExceptionList = &local_14;
      FUN_009a1bb0();
      ExceptionList = local_14;
      return;
    }
    local_16c = (undefined1 **)0xb;
    local_170 = (int *)param_1;
    local_174 = (int *)0x5c6b13;
    ExceptionList = &local_14;
    FUN_009c1a60();
    ExceptionList = local_14;
    return;
  }
  switch(param_2) {
  case 0x2f5:
    local_16c = (undefined1 **)0x8c;
    local_170 = (int *)0x5c6f37;
    ExceptionList = &local_14;
    piVar7 = (int *)FUN_00aae9af();
    local_c = 7;
    if (piVar7 != (int *)0x0) {
      local_170 = (int *)0x5c6f55;
      local_16c = (undefined1 **)piVar7;
      FUN_005be1a0();
      *piVar7 = (int)CRegiment::vftable;
      goto LAB_005c6f5f;
    }
    break;
  case 0x2f6:
    local_16c = (undefined1 **)0x8c;
    local_170 = (int *)0x5c6fb6;
    ExceptionList = &local_14;
    piVar7 = (int *)FUN_00aae9af();
    local_c = 9;
    if (piVar7 != (int *)0x0) {
      local_170 = (int *)0x5c6fd4;
      local_16c = (undefined1 **)piVar7;
      FUN_005be1a0();
      *piVar7 = (int)CShip::vftable;
      goto LAB_005c6f5f;
    }
    break;
  case 0x2f7:
    local_16c = (undefined1 **)0x5c6d85;
    ExceptionList = &local_14;
    FUN_009a1c10();
    ExceptionList = local_14;
    return;
  default:
    return;
  case 0x2fa:
    local_16c = (undefined1 **)0x5c6daa;
    ExceptionList = &local_14;
    FUN_009a1ce0();
    ExceptionList = local_14;
    return;
  case 0x307:
    if (*(int *)(param_1 + 0x228) != 0xc) {
      if (*(char *)(DAT_012588e8 + 0xd10) != '\x01') {
        local_16c = (undefined1 **)0x144;
        local_170 = (int *)0x5c6e97;
        ExceptionList = &local_14;
        local_16c = (undefined1 **)FUN_00aae9af();
        local_c = 6;
        if (local_16c == (undefined1 **)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          local_170 = (int *)0x5c6eb3;
          piVar7 = (int *)FUN_005b61c0();
        }
        local_c = 0xffffffff;
        iVar5 = *(int *)(in_ECX + 0xb8);
        piVar7[0x24] = *(int *)(in_ECX + 0xbc);
        piVar7[0x23] = iVar5;
        local_16c = (undefined1 **)param_1;
        local_170 = (int *)0x5c6ee9;
        (**(code **)(*piVar7 + 0xc))();
        local_170 = (int *)0x1;
        uStack_178 = 0x5c6f0d;
        local_174 = piVar7;
        FUN_0050e760();
        local_174 = (int *)0x5c6f16;
        local_170 = piVar7;
        FUN_005cbcc0();
        ExceptionList = pvStack_18;
        return;
      }
      ExceptionList = &local_14;
      FUN_009885d0();
      FUN_005ab780();
      local_c = 5;
      local_16c = (undefined1 **)0x5c6e56;
      FUN_0072d580();
      local_16c = (undefined1 **)0x5c6e5b;
      iVar5 = FUN_00967f50();
      if (iVar5 != 0) {
        local_16c = (undefined1 **)0x5c6e64;
        local_16c = (undefined1 **)FUN_00967f50();
        local_170 = (int *)0x5c6e6d;
        FUN_005cbcc0();
      }
      local_16c = (undefined1 **)0x5c6e76;
      FUN_00584e60();
      ExceptionList = local_14;
      return;
    }
    local_16c = (undefined1 **)(param_1 + 0x22c);
    local_170 = (int *)0x5c6dd9;
    ExceptionList = &local_14;
    local_16c = (undefined1 **)FUN_00aaf0c5();
    local_170 = (int *)0x25;
    local_174 = (int *)0x5c6dee;
    local_16c = (undefined1 **)FUN_009c16d0();
    if (local_16c == (undefined1 **)0x0) {
      ExceptionList = local_14;
      return;
    }
    local_170 = (int *)0x5c6e02;
    FUN_005cbcc0();
    ExceptionList = local_14;
    return;
  }
  piVar7 = (int *)0x0;
LAB_005c6f5f:
  local_c = 0xffffffff;
  piVar7[0x18] = *(int *)(in_ECX + 0xb8);
  piVar7[0x19] = *(int *)(in_ECX + 0xbc);
  piVar7[0x1d] = in_ECX + -8;
  local_16c = (undefined1 **)param_1;
  local_170 = (int *)0x5c6f8f;
  (**(code **)(*piVar7 + 0xc))();
  local_174 = (int *)0x5c6f95;
  local_170 = piVar7;
  FUN_005cb1d0();
  ExceptionList = pvStack_18;
  return;
}

