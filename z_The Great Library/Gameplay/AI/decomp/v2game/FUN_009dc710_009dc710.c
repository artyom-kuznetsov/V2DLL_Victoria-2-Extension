// FUN_009dc710 @ 009dc710 body=[[009dc710, 009dc784]]


char FUN_009dc710(void)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xf) == '\n') {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  }
  if (*(char *)(in_ECX + 0x10) != '\0') {
    *(undefined1 *)(in_ECX + 0x10) = 0;
    return *(char *)(in_ECX + 0xf);
  }
  if (*(int *)(in_ECX + 0x5054) == 0x5000) {
    sVar3 = _fread((void *)(in_ECX + 0x50),1,0x5000,*(FILE **)(in_ECX + 0x30));
    *(size_t *)(in_ECX + 0x5050) = sVar3;
    *(undefined4 *)(in_ECX + 0x5054) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x5054);
  if (iVar2 < *(int *)(in_ECX + 0x5050)) {
    cVar1 = *(char *)(iVar2 + 0x50 + in_ECX);
    *(int *)(in_ECX + 0x5054) = iVar2 + 1;
    *(char *)(in_ECX + 0xf) = cVar1;
    return cVar1;
  }
  *(undefined1 *)(in_ECX + 0xf) = 0xff;
  return *(char *)(in_ECX + 0xf);
}

