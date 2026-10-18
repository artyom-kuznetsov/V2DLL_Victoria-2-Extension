// FUN_009243f0 @ 009243f0 body=[[009243f0, 00924468]]


undefined4 FUN_009243f0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0x14) * 4);
  if ((*(char *)(*(int *)(iVar1 + *(int *)(iVar2 + 0xc) * 4) + 0x31) == '\0') &&
     (3 < *(int *)(iVar2 + 0x40))) {
    if (*(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 0x14) * 4) + 0x142c) == 0) {
      return 1;
    }
  }
  return 0;
}

