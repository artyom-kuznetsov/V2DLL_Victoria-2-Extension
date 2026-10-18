// FUN_009dbe40 @ 009dbe40 body=[[009dbe40, 009dbe6d]]


undefined4 FUN_009dbe40(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = _feof(*(FILE **)(in_ECX + 0x34));
  if (iVar1 == 0) {
    iVar1 = _ferror(*(FILE **)(in_ECX + 0x34));
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

