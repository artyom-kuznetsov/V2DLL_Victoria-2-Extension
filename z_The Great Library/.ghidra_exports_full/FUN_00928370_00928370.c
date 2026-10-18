// FUN_00928370 @ 00928370 body=[[00928370, 0092842c]]


undefined4 FUN_00928370(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 0x14) * 4) + 0xcfc);
  if ((iVar2 != 0) && (iVar2 == *(int *)(in_ECX + 0xc))) {
    if ((*(int *)(in_ECX + 0x14) <
         *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
       (((*(int *)(*(int *)(DAT_012588e8 + 0xaec) + *(int *)(in_ECX + 0x14) * 4) == 0 &&
         (*(char *)(*(int *)(*(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                            iVar2 * 4) + 0x70) != '\0')) &&
        (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                          *(int *)(in_ECX + 0xc) * 4) + 0x1c) != *(int *)(in_ECX + 0xc))))) {
      return 1;
    }
  }
  return 0;
}

