// FUN_00534a50 @ 00534a50  (requested 00534A50, first bytes: 55 8B EC 83 EC 08 8B 42)


uint FUN_00534a50(void)

{
  int iVar1;
  int in_EDX;
  
  if (((*(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2 <=
        *(int *)(in_EDX + 0x20)) ||
      (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(in_EDX + 0x20) * 4) != 0)) &&
     (*(char *)(*(int *)(DAT_012588e8 + 0xb24) + 0x5c) == '\0')) {
    iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24);
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < *(int *)(in_EDX + 0x1430));
  }
  return DAT_012588e8 & 0xffffff00;
}

