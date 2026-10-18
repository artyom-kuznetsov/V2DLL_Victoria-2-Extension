// FUN_005b67f0 @ 005b67f0 body=[[005b67f0, 005b6ba9] [005b6bad, 005b6c84]]


/* WARNING: Removing unreachable block (ram,0x005b6ba0) */

void FUN_005b67f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  char *pcVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5a99c;
  local_14 = ExceptionList;
  if (param_2 < 0x2e8) {
    if (param_2 == 0x2e7) {
      ExceptionList = &local_14;
      FUN_009a1bb0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0xda) {
      if (param_2 == 0xd9) {
        iVar3 = *(int *)(param_1 + 0x228);
        if (iVar3 == 0x4cd) {
          in_ECX[0x2c] = 0;
          return;
        }
        if (iVar3 != 0x4f8) {
          if (iVar3 != 0x4cb) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 2;
            FUN_004015b0();
            local_c._0_1_ = 3;
            FUN_00987d20();
            FUN_00418e30();
            FUN_00418e30();
            FUN_00989050();
            FUN_00401280();
            local_c = CONCAT31(local_c._1_3_,2);
            FUN_00401650();
            FUN_00408ad0();
            ExceptionList = local_14;
            return;
          }
          in_ECX[0x2c] = 2;
          return;
        }
        in_ECX[0x2c] = 1;
        return;
      }
      if (param_2 == 0x1a) {
        ExceptionList = &local_14;
        FUN_004012f0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x99) {
        ExceptionList = &local_14;
        FUN_009885d0();
        local_c = 1;
        iVar2 = FUN_005c3e00();
        iVar3 = FUN_005c4bd0();
        if (iVar3 == 0) {
          iVar3 = **(int **)(iVar2 + 0xc);
        }
        local_c = 0xffffffff;
        FUN_00408ad0();
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        in_ECX[0x20] = iVar3;
        FUN_005b5ef0();
        ExceptionList = local_14;
        return;
      }
    }
    else if (param_2 == 0x2a1) {
      ExceptionList = &local_14;
      FUN_009885d0();
      FUN_0043bb10();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 < 0x763) {
    if (param_2 == 0x762) {
      pcVar5 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350();
      local_c = 0;
      iVar2 = FUN_005c3e00();
      iVar3 = FUN_005c4bd0();
      if (iVar3 == 0) {
        iVar3 = **(int **)(iVar2 + 0xc);
      }
      local_c = 0xffffffff;
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return;
      }
      in_ECX[0x1f] = iVar3;
      FUN_005b5ef0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x2f0) {
      ExceptionList = &local_14;
      piVar4 = (int *)FUN_0055c6c0();
      in_ECX[0x23] = *piVar4;
      in_ECX[0x24] = piVar4[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x3ed) {
      ExceptionList = &local_14;
      FUN_0098fb60();
      FUN_005b66b0();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 == 0x7df) {
    pcVar5 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350();
    ExceptionList = local_14;
    return;
  }
  if (param_2 == 0xb) {
    ExceptionList = &local_14;
    FUN_009a19f0();
  }
  else {
    ExceptionList = &local_14;
    FUN_009a0f40();
  }
  if ((char)in_ECX[4] == '\0') {
    (**(code **)(*in_ECX + 0x18))();
    if (DAT_00f096c4 <= (uint)in_ECX[3]) {
      DAT_00f096c4 = in_ECX[3] + 1;
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = local_14;
  return;
}

