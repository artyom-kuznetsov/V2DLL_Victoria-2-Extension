// FUN_005cc2e0 @ 005cc2e0 body=[[005cc2e0, 005cc38f]]


uint FUN_005cc2e0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(*(int *)(iVar1 + *(int *)(in_EAX + 4) * 4) + 0xcfc);
  if (((iVar2 != 0) && (iVar2 == *(int *)(param_1 + 4))) &&
     ((param_2 != '\0' ||
      (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + *(int *)(in_EAX + 4) * 4) + 0xbe8) + iVar2 * 4) +
               0x1c) == iVar2)))) {
    if ((*(int *)(in_EAX + 4) < *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2
        ) && (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(in_EAX + 4) * 4) == 0)) {
      in_EAX = *(uint *)(*(int *)(*(int *)(iVar1 + *(int *)(in_EAX + 4) * 4) + 0xbe8) + iVar2 * 4);
      if (*(char *)(in_EAX + 0x70) != '\0') {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}

