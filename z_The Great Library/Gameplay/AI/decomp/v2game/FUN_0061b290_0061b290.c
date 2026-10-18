// FUN_0061b290 @ 0061b290 body=[[0061b290, 0061b6fa]]


bool FUN_0061b290(int *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8acd9;
  local_10 = ExceptionList;
  switch(param_1[1]) {
  case 0:
    ExceptionList = &local_10;
    FUN_004f97a0();
    local_8 = 0;
    FUN_004f97a0();
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = FUN_0098ab20();
    FUN_00408ad0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return (bool)uVar1;
  case 1:
    return *(int *)(*(int *)(*param_1 + 0x13f0) + *(int *)(in_ECX + 0x20) * 4) <
           *(int *)(*(int *)(*param_1 + 0x13f0) + *(int *)(param_2 + 0x20) * 4);
  case 2:
    local_1c = 0;
    param_1 = (int *)0x0;
    if (*(int *)(in_ECX + 0x142c) == *(int *)(DAT_012588e8 + 0xb60)) {
      local_1c = 10;
    }
    if (*(int *)(param_2 + 0x142c) == *(int *)(DAT_012588e8 + 0xb60)) {
      param_1 = (int *)0xa;
    }
    ExceptionList = &local_10;
    FUN_0055dd40();
    local_8 = 2;
    FUN_0055dd40();
    local_8 = CONCAT31(local_8._1_3_,3);
    cVar2 = FUN_0098ab20();
    FUN_00408ad0();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    if (cVar2 != '\0') {
      local_1c = local_1c + 1;
    }
    FUN_0055dd40();
    local_8 = 4;
    FUN_0055dd40();
    local_8 = CONCAT31(local_8._1_3_,5);
    cVar2 = FUN_0098ab20();
    FUN_00408ad0();
    FUN_00408ad0();
    if (cVar2 != '\0') {
      param_1 = (int *)((int)param_1 + 1);
    }
    ExceptionList = local_10;
    return param_1 < local_1c;
  case 3:
    return *(int *)(in_ECX + 0x1410) < *(int *)(param_2 + 0x1410);
  case 4:
    return *(int *)(in_ECX + 0x1408) < *(int *)(param_2 + 0x1408);
  case 5:
    return *(int *)(in_ECX + 0x140c) < *(int *)(param_2 + 0x140c);
  case 6:
    return *(int *)(in_ECX + 0x1404) < *(int *)(param_2 + 0x1404);
  case 7:
    iVar5 = *param_1;
    if (*(char *)(iVar5 + 0x31) != '\0') {
      if (*(char *)(in_ECX + 0x31) == '\0') {
        ExceptionList = &local_10;
        iVar6 = FUN_009311f0();
      }
      else {
        iVar6 = (-(uint)(*(int *)(in_ECX + 0x20) != *(int *)(iVar5 + 0x20)) & 0xffffffb0) + 0x28;
        ExceptionList = &local_10;
      }
      if (*(char *)(param_2 + 0x31) != '\0') {
        ExceptionList = local_10;
        return iVar6 < (int)((-(uint)(*(int *)(param_2 + 0x20) != *(int *)(iVar5 + 0x20)) &
                             0xffffffb0) + 0x28);
      }
      iVar5 = FUN_009311f0();
      ExceptionList = local_10;
      return iVar6 < iVar5;
    }
    iVar5 = *(int *)(iVar5 + 0x20);
    bVar7 = *(int *)(in_ECX + 0xcfc) != iVar5;
    if (((*(char *)(in_ECX + 0xcf5) == '\0') && (*(char *)(in_ECX + 0xcf4) == '\0')) || (bVar7)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar8 = *(int *)(param_2 + 0xcfc) != iVar5;
    if (((*(char *)(param_2 + 0xcf5) == '\0') && (*(char *)(param_2 + 0xcf4) == '\0')) || (bVar8)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar4) {
      if (bVar3) {
        if ((*(char *)(in_ECX + 0xcf4) == '\0') || (bVar7)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((*(char *)(param_2 + 0xcf4) == '\0') || (bVar8)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar7) {
          return false;
        }
        if (bVar4) {
          return false;
        }
      }
      return true;
    }
    break;
  case 8:
    return *(int *)(*(int *)(*(int *)(*param_1 + 0xbe8) + *(int *)(in_ECX + 0x20) * 4) + 0x3c) <
           *(int *)(*(int *)(*(int *)(*param_1 + 0xbe8) + *(int *)(param_2 + 0x20) * 4) + 0x3c);
  case 9:
    if (DAT_01258a08 != 0) {
      return false;
    }
    return *(int *)(*(int *)(*(int *)(param_1[2] + 0xbe8) + *(int *)(in_ECX + 0x20) * 4) + 0x48) <
           *(int *)(*(int *)(*(int *)(param_1[2] + 0xbe8) + *(int *)(param_2 + 0x20) * 4) + 0x48);
  }
  return false;
}

