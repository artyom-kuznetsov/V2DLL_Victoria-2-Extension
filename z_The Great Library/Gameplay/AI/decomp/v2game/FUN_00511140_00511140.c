// FUN_00511140 @ 00511140 body=[[00511140, 00511214] [00511218, 00511292] [00511296, 005112f6]]


bool FUN_00511140(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int in_EDX;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b464f6;
  local_10 = ExceptionList;
  piVar3 = *(int **)(param_1 + 0xe8c);
  do {
    if ((piVar3 < *(int **)(param_1 + 0xe8c)) || (*(int **)(param_1 + 0xe90) <= piVar3)) {
      return false;
    }
    iVar1 = *piVar3;
    local_1c = *(undefined4 *)(iVar1 + 8);
    piVar3 = piVar3 + 1;
  } while (*(int *)(iVar1 + 0xc) != *(int *)(in_EDX + 4));
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("generalised_debt_default",0x18);
  local_8 = 0;
  if (DAT_0125a69c == 0) {
    local_14 = FUN_00aae9af(0xc4);
    local_8._0_1_ = 1;
    if (local_14 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_008b0060();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0044ec00(uVar4);
  }
  iVar5 = FUN_005661b0(local_38);
  local_8 = 0xffffffff;
  local_14 = iVar5;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("in_bankrupcy",0xc);
  local_8 = 2;
  if (DAT_0125a69c == 0) {
    local_18 = FUN_00aae9af(0xc4);
    local_8._0_1_ = 3;
    if (local_18 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_008b0060();
      iVar5 = local_14;
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0044ec00(uVar4);
  }
  local_14 = FUN_005661b0(local_54);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  if (iVar5 != 0) {
    cVar2 = FUN_005068b0();
    if (cVar2 == '\0') {
      cVar2 = FUN_005068b0();
      if (cVar2 == '\0') goto LAB_005112c9;
    }
    ExceptionList = local_10;
    return true;
  }
LAB_005112c9:
  ExceptionList = local_10;
  return *(char *)(iVar1 + 0x20) == '\0';
}

