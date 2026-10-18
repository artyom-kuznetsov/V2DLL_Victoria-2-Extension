// FUN_00924b40 @ 00924b40 body=[[00924b40, 00924c17]]


undefined4 FUN_00924b40(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(DAT_012587e4 + 4);
  if (*(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0x14) * 4) + 0x142c) == *(int *)(in_ECX + 0xc)) {
    return 1;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x14) * 4 +
                  *(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8));
  if ((((*(char *)(*(int *)(iVar2 + *(int *)(iVar1 + 0xc) * 4) + 0x31) == '\0') &&
       (3 < *(int *)(iVar1 + 0x40))) &&
      (*(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0x14) * 4) + 0x142c) != 0)) &&
     (iVar2 = FUN_009311f0(), iVar2 == 5)) {
    return 1;
  }
  return 0;
}

