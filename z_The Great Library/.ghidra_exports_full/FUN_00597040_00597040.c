// FUN_00597040 @ 00597040 body=[[00597040, 005970ce] [005970e5, 00597bca]]


/* WARNING: Removing unreachable block (ram,0x005970c6) */

void FUN_00597040(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5f72e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_00967f50();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 5;
    uVar1 = DAT_01268ff0;
    local_8 = 2;
    *(undefined4 *)(param_1 + 0x34) = DAT_01268fec;
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00408ed0();
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(param_1 + 0x5c) == 6) {
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(param_1 + 0x5c) == 4) {
    local_1c = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x68);
    FUN_00967f10();
    FUN_00401000();
    FUN_00b31c00();
    FUN_009b7ac0();
    __alldiv();
    __alldiv();
    __alldiv();
    iVar3 = __alldiv();
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    if (999 < *(int *)(param_1 + 0x58)) {
      *(undefined4 *)(param_1 + 0x5c) = 6;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x80);
    piVar4 = (int *)FUN_00967f10();
    iVar5 = FUN_00967f10();
    iVar5 = *(int *)(iVar5 + 0x3c);
    piVar4 = (int *)(**(code **)(*piVar4 + 0x30))();
    if (*piVar4 == 0) {
      iVar5 = -1;
    }
    else if (iVar5 + 0x189373U < 0x39580e) {
      iVar5 = (iVar5 * 1000) / *piVar4;
    }
    else {
      __allmul();
      iVar5 = __alldiv();
    }
    if (iVar3 < iVar5) {
      piVar4 = (int *)FUN_00967f10();
      iVar5 = FUN_00967f10();
      if ((*(int *)(iVar5 + 0x74) == 0) || (*(char *)(*(int *)(iVar5 + 0x74) + 0x164) == '\0')) {
        iVar5 = *(int *)(iVar5 + 0x40);
      }
      else {
        iVar5 = 0;
      }
      piVar4 = (int *)(**(code **)(*piVar4 + 0x34))();
      if (*piVar4 == 0) {
        iVar5 = -1;
      }
      else if ((iVar5 < -0x189373) || (0x20c49a < iVar5)) {
        __allmul();
        iVar5 = __alldiv();
      }
      else {
        iVar5 = (iVar5 * 1000) / *piVar4;
      }
      if (iVar3 < iVar5) goto LAB_005973bd;
    }
    FUN_00401000();
    FUN_00b31c00();
    iVar3 = __alldiv();
    iVar3 = iVar3 / 1000;
    iVar5 = FUN_00595b90();
    if (iVar5 != 0) {
      __allmul();
      iVar5 = __alldiv();
      __allmul();
      iVar6 = __alldiv();
      iVar3 = iVar3 + iVar5 / 1000 + iVar6 / 1000;
    }
    if ((0 < iVar3) && (iVar5 = FUN_009b7950(), iVar5 % 100 <= iVar3)) {
      FUN_00596290();
    }
  }
LAB_005973bd:
  iVar3 = FUN_00967f50();
  if (iVar3 != 0) {
    FUN_00967f50();
    iVar3 = FUN_00598ed0();
    if ((iVar3 != 0) && ((*(int *)(iVar3 + 0x5c) == 5 || (*(int *)(iVar3 + 0x5c) == 6)))) {
      local_8 = 5;
      FUN_004c0270();
      local_8 = 0xffffffff;
      FUN_00584e60();
    }
  }
  iVar3 = *(int *)(param_2 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x5c);
  if (iVar5 == 1) {
    iVar5 = FUN_00967f50();
    if (iVar5 != 0) {
      iVar5 = FUN_00967f50();
      piVar4 = (int *)FUN_00967f50();
      cVar2 = FUN_005c0110();
      if (cVar2 == '\0') {
        FUN_00596880();
        if (*(int *)(*(int *)(iVar5 + 0x38) + 0x24c) < local_1c) {
          *(undefined4 *)(param_1 + 0x5c) = 2;
          ExceptionList = local_10;
          return;
        }
        if ((((int)(*(int *)(param_3 + 0x70) - *(int *)(param_3 + 0x6c) & 0xfffffffcU) < 5) ||
            (iVar3 < 1)) || (cVar2 = FUN_00596ed0(), cVar2 == '\0')) {
          FUN_00401000();
          FUN_00b31c00();
          __allmul();
          iVar3 = __alldiv();
          piVar8 = (int *)FUN_009b7ac0();
          if (iVar3 < *piVar8) {
            ExceptionList = local_10;
            return;
          }
          FUN_00596fd0();
          FUN_00594230();
          __alldiv();
          if (0 < *(int *)(piVar4[0xe] + 0x244)) {
            __allmul();
            __alldiv();
          }
          FUN_00401000();
          FUN_00b31c00();
          __alldiv();
          __allmul();
          __alldiv();
          __allmul();
          __alldiv();
          iVar3 = __alldiv();
          if ((piVar4[0x1d] == 0) || (*(char *)(piVar4[0x1d] + 0x164) == '\0')) {
            iVar5 = piVar4[0x10];
          }
          else {
            iVar5 = 0;
          }
          if (iVar5 < 1) {
            __allmul();
            __alldiv();
          }
          __alldiv();
          iVar5 = __alldiv();
          piVar4[0x1c] = piVar4[0x1c] + iVar3;
          piVar4[0x1b] = piVar4[0x1b] + iVar5;
          *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar5;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar3;
          (**(code **)(*piVar4 + 0x30))();
          FUN_00416e10();
          (**(code **)(*piVar4 + 0x34))();
          FUN_00416e10();
          cVar2 = FUN_005c0110();
          if (cVar2 == '\0') {
            ExceptionList = local_10;
            return;
          }
          iVar3 = FUN_00598f20();
          if (iVar3 == 0) {
            ExceptionList = local_10;
            return;
          }
          FUN_005988c0();
          ExceptionList = local_10;
          return;
        }
        local_8 = 0xc;
        FUN_004c0270();
        FUN_00584e60();
      }
      *(undefined4 *)(param_1 + 0x5c) = 3;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        iVar5 = FUN_00967f50();
        if (iVar5 == 0) {
          FUN_00401000();
          FUN_00b31c00();
          iVar5 = __alldiv();
          iVar5 = iVar5 / 1000;
          iVar6 = __alldiv();
          iVar7 = FUN_00595b90();
          if (iVar7 != 0) {
            __allmul();
            iVar7 = __alldiv();
            iVar5 = iVar5 + iVar7 / 1000;
          }
          if (0 < iVar3) {
            __alldiv();
            iVar5 = __alldiv();
            iVar5 = iVar5 / 1000;
          }
          if (iVar5 < iVar6 / 1000) {
            iVar5 = iVar6 / 1000;
          }
          iVar3 = FUN_009b7950();
          if (iVar3 % 100 <= iVar5) {
            FUN_00967f50();
            FUN_00596980();
            FUN_0072d4e0();
            local_8 = 6;
            FUN_004c0270();
            local_8 = 0xffffffff;
            FUN_00584e60();
          }
        }
        iVar3 = FUN_00967f50();
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x5c) = 2;
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined4 *)(param_1 + 0x60) = 0;
          if (*(int *)(param_1 + 0x58) < 1000) {
            iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 100) / 1000;
            iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + 0x20);
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (iVar5 < iVar3) {
              iVar3 = iVar5;
            }
            if ((iVar5 * 1000 != 0) && (0x39580d < iVar3 * 1000 + 0x189373U)) {
              __allmul();
              __alldiv();
            }
            FUN_009b7ac0();
            __alldiv();
            iVar3 = __alldiv();
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
            if (1000 < *(int *)(param_1 + 0x58)) {
              *(undefined4 *)(param_1 + 0x58) = 1000;
              ExceptionList = local_10;
              return;
            }
          }
        }
      }
      ExceptionList = local_10;
      return;
    }
    iVar3 = FUN_00967f50();
    if (iVar3 != 0) {
      FUN_00967f50();
      iVar3 = FUN_00967f50();
      FUN_00596880();
      if (*(int *)(*(int *)(iVar3 + 0x38) + 0x24c) < param_1) {
        FUN_00401000();
        FUN_00b31c00();
        FUN_009b7ac0();
        __alldiv();
        __alldiv();
        iVar3 = __alldiv();
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar3;
        if (*(int *)(param_1 + 0x58) < 0) {
          *(undefined4 *)(param_1 + 0x58) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 1;
      }
      if ((int)(*(int *)(param_3 + 0x70) - *(int *)(param_3 + 0x6c) & 0xfffffffcU) < 5) {
        ExceptionList = local_10;
        return;
      }
      cVar2 = FUN_00596ed0();
      if (cVar2 == '\0') {
        ExceptionList = local_10;
        return;
      }
      local_8 = 9;
      FUN_004c0270();
      FUN_00584e60();
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 3;
  ExceptionList = local_10;
  return;
}

