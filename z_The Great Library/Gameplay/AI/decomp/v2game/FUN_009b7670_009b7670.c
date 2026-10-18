// FUN_009b7670 @ 009b7670 body=[[009b7670, 009b76f4]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009b7670(void)

{
  uint in_EAX;
  uint *puVar1;
  uint *in_ECX;
  int iVar2;
  
  if (in_EAX == 0) {
    if (_DAT_00f08778 == -1) {
      puVar1 = (uint *)&DAT_00f08778;
      iVar2 = 0;
      _DAT_00f08778 = 0;
      do {
        iVar2 = iVar2 + 1;
        puVar1[1] = ((int)*puVar1 >> 0x1e ^ *puVar1) * 0x6c078965 + iVar2;
        puVar1 = puVar1 + 1;
      } while ((int)puVar1 < 0xf09134);
    }
    puVar1 = (uint *)&DAT_00f08778;
    for (iVar2 = 0x270; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_ECX = *puVar1;
      puVar1 = puVar1 + 1;
      in_ECX = in_ECX + 1;
    }
    return;
  }
  *in_ECX = in_EAX;
  iVar2 = 1;
  do {
    in_ECX[1] = ((int)*in_ECX >> 0x1e ^ *in_ECX) * 0x6c078965 + iVar2;
    iVar2 = iVar2 + 1;
    in_ECX = in_ECX + 1;
  } while (iVar2 < 0x270);
  return;
}

