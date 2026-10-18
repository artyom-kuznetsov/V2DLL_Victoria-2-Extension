// FUN_006f7f80 @ 006f7f80 body=[[006f7f80, 006f800d]]


uint FUN_006f7f80(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  if (*(int *)(in_EAX + 0x1c8) == 1) {
    piVar3 = (int *)(in_EAX + 0x6c);
  }
  else {
    piVar3 = (int *)(in_EAX + 0x5c);
  }
  iVar1 = *(int *)(in_ECX + 300);
  if (((DAT_01258734 != 0) && (iVar1 != DAT_01258734 + 0x10)) && (iVar1 != 0)) {
    iVar2 = *piVar3;
    piVar3 = (int *)((piVar3[1] - iVar2) / 0x14);
    iVar5 = 0;
    if (0 < (int)piVar3) {
      piVar6 = (int *)(iVar2 + 8);
      do {
        if ((char)piVar6[1] != '\0') {
          if (*(int *)(*(int *)(iVar1 + 0x80) + 8) == *piVar6) {
LAB_006f8008:
            return CONCAT31((int3)((uint)piVar3 >> 8),1);
          }
          uVar4 = (uint)*(byte *)(*piVar6 + 0x2c + iVar1);
          iVar2 = *(int *)(*(int *)(iVar1 + 0x6c) + 4 + uVar4 * 8);
          if ((0 < iVar2) || ((-1 < iVar2 && (*(int *)(*(int *)(iVar1 + 0x6c) + uVar4 * 8) != 0))))
          goto LAB_006f8008;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 5;
      } while (iVar5 < (int)piVar3);
    }
  }
  return (uint)piVar3 & 0xffffff00;
}

