// FUN_009db510 @ 009db510 body=[[009db510, 009db58c]]


char FUN_009db510(void)

{
  char *_DstBuf;
  size_t sVar1;
  int in_ECX;
  undefined4 uStack_8;
  
  _DstBuf = (char *)(in_ECX + 0xf);
  if (*(char *)(in_ECX + 0xf) == '\n') {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  }
  if (*(char *)(in_ECX + 0x10) != '\0') {
    *(undefined1 *)(in_ECX + 0x10) = 0;
    return *(char *)(in_ECX + 0xf);
  }
  if (*(char *)(in_ECX + 0xc) == '\0') {
    uStack_8 = in_ECX;
    sVar1 = _fread((void *)((int)&uStack_8 + 3),1,1,*(FILE **)(in_ECX + 0x34));
    if (sVar1 != 1) {
      *_DstBuf = -1;
      return -1;
    }
    *_DstBuf = uStack_8._3_1_;
  }
  else {
    _fread(_DstBuf,1,1,*(FILE **)(in_ECX + 0x34));
    if (*(char *)(in_ECX + 0xd) != '\0') {
      *_DstBuf = *_DstBuf >> 7;
      return *_DstBuf;
    }
  }
  return *_DstBuf;
}

