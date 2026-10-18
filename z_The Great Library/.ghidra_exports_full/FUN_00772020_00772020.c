// FUN_00772020 @ 00772020 body=[[00772020, 00772092]]


uint FUN_00772020(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  
  if ((*(char *)(in_EAX + 0x5bc) == '\0') &&
     (in_EAX = DAT_012588e8, *(int *)(DAT_012588e8 + 0x20) != 0)) {
    iVar1 = *(int *)(DAT_012588e8 + 0x18);
    while( true ) {
      if (iVar1 == 0) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      in_EAX = *(uint *)(iVar1 + 0x20);
      if (*(int *)(iVar1 + 0x24) == 0) break;
      iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0x24) * 4);
      in_EAX = iVar2 + 0x9d8;
      if ((int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU) < 1) break;
      iVar1 = *(int *)(iVar1 + 0x3c);
    }
  }
  return in_EAX & 0xffffff00;
}

