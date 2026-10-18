// FUN_00494c90 @ 00494c90 body=[[00494c90, 00494ce5]]


uint FUN_00494c90(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int in_EDX;
  
  iVar1 = *(int *)(DAT_0125870c + 0x2130);
  if (in_ECX < *(int *)(iVar1 + 4)) {
    if (in_EDX < *(int *)(iVar1 + 8)) {
      uVar2 = (uint)*(byte *)(*(int *)(iVar1 + 0xc) * in_ECX + *(int *)(iVar1 + 0x18) * in_EDX +
                             *(int *)(iVar1 + 0x20));
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  iVar1 = *(int *)(DAT_0125870c + 0x2268 + uVar2 * 4);
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0xc), *(char *)(uVar2 + 0x90) != '\0')) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

