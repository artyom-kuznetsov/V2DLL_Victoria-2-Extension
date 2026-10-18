// FUN_006e2230 @ 006e2230 body=[[006e2230, 006e2650]]


bool FUN_006e2230(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
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
    uVar3 = FUN_0098ab20();
    FUN_00408ad0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return (bool)uVar3;
  case 1:
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
    cVar4 = FUN_0098ab20();
    FUN_00408ad0();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    if (cVar4 != '\0') {
      local_1c = local_1c + 1;
    }
    FUN_0055dd40();
    local_8 = 4;
    FUN_0055dd40();
    local_8 = CONCAT31(local_8._1_3_,5);
    cVar4 = FUN_0098ab20();
    FUN_00408ad0();
    FUN_00408ad0();
    if (cVar4 != '\0') {
      param_1 = (int *)((int)param_1 + 1);
    }
    ExceptionList = local_10;
    return param_1 < local_1c;
  case 2:
    return *(int *)(in_ECX + 0x1410) < *(int *)(param_2 + 0x1410);
  case 3:
    return *(int *)(in_ECX + 0x1408) < *(int *)(param_2 + 0x1408);
  case 4:
    return *(int *)(in_ECX + 0x140c) < *(int *)(param_2 + 0x140c);
  case 5:
    return *(int *)(in_ECX + 0x1404) < *(int *)(param_2 + 0x1404);
  case 6:
    iVar5 = *param_1;
    if (*(char *)(iVar5 + 0x31) == '\0') {
      return false;
    }
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
      return iVar6 < (int)((-(uint)(*(int *)(param_2 + 0x20) != *(int *)(iVar5 + 0x20)) & 0xffffffb0
                           ) + 0x28);
    }
    iVar5 = FUN_009311f0();
    ExceptionList = local_10;
    return iVar6 < iVar5;
  case 7:
    return *(int *)(*(int *)(*(int *)(*param_1 + 0xbe8) + *(int *)(in_ECX + 0x20) * 4) + 0x3c) <
           *(int *)(*(int *)(*(int *)(*param_1 + 0xbe8) + *(int *)(param_2 + 0x20) * 4) + 0x3c);
  case 8:
    iVar2 = *(int *)(*param_1 + 0x20) * 8;
    iVar6 = *(int *)(iVar2 + 4 + *(int *)(in_ECX + 0x1580));
    iVar5 = *(int *)(iVar2 + 4 + *(int *)(param_2 + 0x1580));
    if ((iVar6 <= iVar5) &&
       ((iVar6 < iVar5 ||
        (*(uint *)(iVar2 + *(int *)(in_ECX + 0x1580)) <
         *(uint *)(iVar2 + *(int *)(param_2 + 0x1580)))))) {
      return true;
    }
    break;
  case 9:
    iVar6 = 0;
    iVar5 = 0;
    for (piVar1 = *(int **)(in_ECX + 0xe44); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar6 = iVar6 + *(int *)(*piVar1 + 0x68);
    }
    for (piVar1 = *(int **)(param_2 + 0xe44); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar5 = iVar5 + *(int *)(*piVar1 + 0x68);
    }
    return iVar6 < iVar5;
  case 10:
    iVar2 = *(int *)(param_1[2] + 0x20) * 8;
    iVar6 = *(int *)(iVar2 + 4 + *(int *)(in_ECX + 0x1580));
    iVar5 = *(int *)(iVar2 + 4 + *(int *)(param_2 + 0x1580));
    if ((iVar6 <= iVar5) &&
       ((iVar6 < iVar5 ||
        (*(uint *)(iVar2 + *(int *)(in_ECX + 0x1580)) <
         *(uint *)(iVar2 + *(int *)(param_2 + 0x1580)))))) {
      return true;
    }
    break;
  default:
    return false;
  }
  return false;
}

