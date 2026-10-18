// FUN_005141d0 @ 005141d0 body=[[005141d0, 00514306]]


undefined4 FUN_005141d0(int param_1,int param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(param_2 + 0x134) != *(int *)(param_1 + 0x20)) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x24) < 3) {
    return 0;
  }
  if (*(char *)(*(int *)(in_ECX + 0x24) + *(int *)(*(int *)(param_1 + 0xbcc) + 0x2dc)) == '\0') {
    return 0;
  }
  if (*(char *)(in_ECX + 0x42) != '\0') {
    if (((in_EAX != 0) && (*(char *)(in_ECX + 0x30) != '\0')) && (*(char *)(in_EAX + 0x4c) == '\0'))
    {
      return 0;
    }
    if (*(char *)(in_ECX + 0x39) == '\0') {
      if (*(char *)(in_ECX + 0x3a) != '\0') {
        if ((*(char *)(in_ECX + 0x3d) == '\0') && (cVar1 = FUN_004b1660(param_2), cVar1 == '\0')) {
          return 0;
        }
        iVar2 = *(int *)(*(int *)(param_2 + 0x118) + DAT_01258720 * 4);
        iVar3 = 0;
        if (0 < *(int *)(iVar2 + 0x20)) {
          iVar3 = *(int *)(iVar2 + 0x24) / 1000;
        }
        if (iVar3 < *(int *)(in_ECX + 0xa0)) {
          return 0;
        }
        iVar2 = FUN_00539160();
        if ((-1 < iVar2) && (iVar3 = FUN_00539130(), iVar2 <= iVar3)) {
          return 0;
        }
      }
    }
    else {
      if (*(int *)(param_2 + 0x50) <= *(int *)(param_2 + 0x4c)) {
        return 0;
      }
      if (in_EAX != 0) {
        iVar2 = FUN_00965930(0);
        iVar3 = FUN_00965870(in_EAX,0);
        if (iVar3 <= iVar2) {
          return 0;
        }
      }
    }
    if ((*(int *)(param_2 + 0x10c) != 0) &&
       (iVar2 = (**(code **)(**(int **)(param_2 + 0x10c) + 0x24))(), iVar2 == 1)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

