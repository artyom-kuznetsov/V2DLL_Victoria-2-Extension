// FUN_009dc790 @ 009dc790 body=[[009dc790, 009dc7d3]]


undefined4 FUN_009dc790(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x5050);
  if ((iVar1 != 0) && (*(int *)(in_ECX + 0x5054) < iVar1)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  iVar1 = _feof(*(FILE **)(in_ECX + 0x30));
  if (iVar1 == 0) {
    iVar1 = _ferror(*(FILE **)(in_ECX + 0x30));
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

