// FUN_00938ad0 @ 00938ad0 body=[[00938ad0, 00938d78] [00938d80, 00939407] [0093940b, 00939431] [00939435, 00939449]]


/* WARNING: Removing unreachable block (ram,0x00939426) */

undefined4 FUN_00938ad0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 local_98 [4];
  int local_94;
  undefined1 local_84 [8];
  undefined1 local_7c [20];
  undefined1 local_68 [28];
  undefined4 local_4c;
  int local_48;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bafde9;
  local_10 = ExceptionList;
  local_18 = 0;
  local_4c = *param_3;
  local_24 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3[1] * 4);
  iVar3 = *(int *)(param_1 + 0x30);
  local_1c = (int *)(param_1 + 0x2c);
  iVar2 = *local_1c;
  if (iVar2 != iVar3) {
    do {
      if (*(int *)(iVar2 + 4) == param_3[1]) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar3);
    if (iVar2 != iVar3) goto LAB_0093935c;
  }
  iVar3 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x3c);
  local_20 = (int *)(param_1 + 0x3c);
  if (iVar2 != iVar3) {
    do {
      if (*(int *)(iVar2 + 4) == param_3[1]) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar3);
    if (iVar2 != iVar3) {
LAB_0093935c:
      ExceptionList = &local_10;
      FUN_00409350("DIPLOMACY_ALREADY_IN_WAR");
      local_8 = 1;
      FUN_009a8ee0(local_98);
      local_8._0_1_ = 2;
      iVar3 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
      local_18 = 1;
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_009adb70();
      if (local_94 == 0) {
        ExceptionList = local_10;
        return param_2;
      }
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(char *)(local_24 + 0x31) == '\0') {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("WE_NOT_GREATNATION");
    local_8 = 4;
    FUN_009a8ee0(local_7c);
    local_8._0_1_ = 5;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_18 = 1;
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_009a9740();
    if (local_30 < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
LAB_0093942d:
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = &local_10;
  if (((*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0) &&
      (ExceptionList = &local_10, cVar1 = FUN_0042b220(), cVar1 != '\0')) ||
     (piVar7 = local_1c, piVar4 = local_20, cVar1 = FUN_005395a0(), cVar1 != '\0')) {
    FUN_009885d0();
    local_8 = 6;
    FUN_009a8ee0(local_7c);
    local_8._0_1_ = 7;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_18 = 1;
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_009a9740();
    FUN_00408ad0();
    ExceptionList = local_10;
    return param_2;
  }
  if (*(char *)(param_1 + 0xfc) == '\0') {
    if ((char)param_4 != '\0') {
      FUN_009885d0();
      local_8 = 8;
      FUN_009a8ee0(local_7c);
      local_8._0_1_ = 9;
      iVar3 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
      local_18 = 1;
      local_8 = CONCAT31(local_8._1_3_,8);
      goto LAB_00938d17;
    }
    local_14 = 0;
    local_48 = piVar4[1] - *piVar4 >> 3;
    if (0 < local_48) {
      do {
        piVar4 = (int *)FUN_009387c0();
        iVar3 = piVar4[1] - *piVar4 >> 6;
        iVar2 = 0;
        if (0 < iVar3) {
          piVar4 = (int *)(*piVar4 + 0xc);
          do {
            piVar7 = *(int **)(*piVar4 + 0x120);
            while( true ) {
              if (piVar7 == (int *)0x0) {
                local_30 = 0xf;
                local_34 = 0;
                local_44[0] = local_44[0] & 0xffffff00;
                FUN_00409350("DIPLOMACY_CANNOT_JOIN_WAR_INVALID_WARGOAL");
                local_8 = 10;
                FUN_009a8ee0(local_7c);
                local_8._0_1_ = 0xb;
                iVar3 = FUN_00475500();
                FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
                local_18 = 1;
                local_8 = CONCAT31(local_8._1_3_,10);
                FUN_009a9740();
                if (local_30 < 0x10) {
                  ExceptionList = local_10;
                  return param_2;
                }
                goto LAB_0093942d;
              }
              if (*piVar7 == 0x8da) break;
              piVar7 = (int *)piVar7[2];
            }
            iVar2 = iVar2 + 1;
            piVar4 = piVar4 + 0x10;
          } while (iVar2 < iVar3);
        }
        local_14 = local_14 + 1;
        piVar4 = local_20;
        piVar7 = local_1c;
      } while (local_14 < local_48);
    }
    iVar3 = FUN_00936fc0(param_1,*piVar7,*piVar4);
    if (iVar3 < -(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3dc) / 1000)) {
      FUN_009888f0();
      local_8 = 0xc;
      goto LAB_00938ea0;
    }
  }
  FUN_00936640();
  iVar3 = *(int *)(DAT_012586dc + 0x30);
  FUN_00424810();
  if (*(int *)(DAT_012588e8 + 0xb0c) < local_14) {
    FUN_009888f0();
    local_8 = 0xd;
LAB_00938ea0:
    FUN_0042c180(param_2);
    FUN_00408ad0();
    ExceptionList = local_10;
    return param_2;
  }
  if (*(char *)(param_1 + 0xfc) != '\0') {
    local_4c = *param_3;
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3[1] * 4);
    if ((char)param_4 == '\0') {
      local_24 = *piVar4;
    }
    else {
      local_24 = *local_1c;
    }
    if (*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(local_24 + 4) * 4) + 0x3c) <
        *(int *)(iVar3 + 0x494)) {
      FUN_00988970(local_84);
      local_8 = 0x11;
      uVar5 = FUN_00988970(local_44);
      local_8._0_1_ = 0x12;
      uVar6 = FUN_0055dd40();
      local_8 = CONCAT31(local_8._1_3_,0x13);
      FUN_0043e9a0(param_2,"TARGET",uVar6,&DAT_00e11334,uVar5,&DAT_00df7e90);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      ExceptionList = local_10;
      return param_2;
    }
    if (*(int *)(iVar3 + 0x498) < *(int *)(iVar2 + 0x680)) {
      FUN_00988970(local_44);
      local_8 = 0x14;
      uVar5 = FUN_00988970(local_68);
      local_8 = CONCAT31(local_8._1_3_,0x15);
      FUN_0043ec10(param_2,&DAT_00dfad2c,uVar5,&DAT_00df7e90);
      FUN_00408ad0();
      FUN_00408ad0();
      ExceptionList = local_10;
      return param_2;
    }
LAB_00939157:
    cVar1 = FUN_00939450(param_1,param_3,param_4,0);
    if (cVar1 == '\0') {
      FUN_00939930(param_1,param_2,param_3,param_4,1);
      ExceptionList = local_10;
      return param_2;
    }
    cVar1 = FUN_0093ac50();
    if (cVar1 != '\0') {
      FUN_009885d0();
      local_8 = 0x16;
      FUN_009885d0();
      local_8._0_1_ = 0x17;
      FUN_0093b950();
      local_8._0_1_ = 0x18;
      FUN_009a8ee0(local_7c);
      local_8._0_1_ = 0x19;
      iVar3 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
      local_8._0_1_ = 0x1a;
      FUN_00988f20();
      local_8._0_1_ = 0x1b;
      FUN_00988f20();
      local_18 = 1;
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x18);
      FUN_009a9740();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      ExceptionList = local_10;
      return param_2;
    }
    FUN_009885d0();
    local_8 = 0x1c;
    FUN_0093b950();
    local_8._0_1_ = 0x1d;
    FUN_009a8ee0(local_7c);
    local_8._0_1_ = 0x1e;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0x1f;
    FUN_00988f20();
    local_18 = 1;
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    FUN_009a9740();
    FUN_00408ad0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return param_2;
  }
  local_14 = 0;
  iVar3 = piVar4[1] - *local_20 >> 3;
  if (0 < iVar3) {
    local_48 = *(int *)(local_24 + 0xbe8);
    puVar8 = (undefined4 *)*local_20;
    do {
      local_24 = puVar8[1];
      local_28 = *puVar8;
      cVar1 = FUN_009315a0();
      if ((cVar1 != '\0') && (cVar1 = FUN_0093c1e0(), cVar1 != '\0')) goto LAB_00939157;
      local_14 = local_14 + 1;
      puVar8 = puVar8 + 2;
    } while (local_14 < iVar3);
  }
  FUN_009885d0();
  local_8 = 0xe;
  FUN_009a8ee0(local_7c);
  local_8._0_1_ = 0xf;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_8._0_1_ = 0x10;
  FUN_0042c180(param_2);
  local_18 = 1;
  FUN_00408ad0();
  local_8 = CONCAT31(local_8._1_3_,0xe);
LAB_00938d17:
  FUN_009a9740();
  FUN_00408ad0();
  ExceptionList = local_10;
  return param_2;
}

