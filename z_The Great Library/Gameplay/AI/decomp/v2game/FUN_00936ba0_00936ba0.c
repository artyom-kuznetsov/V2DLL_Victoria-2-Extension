// FUN_00936ba0 @ 00936ba0 body=[[00936ba0, 00936c48]]


int FUN_00936ba0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int local_c;
  int local_8;
  
  FUN_00401000(0x3f000000);
  local_8 = FUN_00b31c00();
  iVar3 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xf0) - *(int *)(unaff_ESI + 0xec) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(unaff_ESI + 0xec) + iVar3 * 4);
      FUN_005935d0(&local_c);
      iVar2 = local_c;
      if (*(char *)(iVar1 + 0x88) == '\0') {
        iVar2 = -local_c;
      }
      local_8 = local_8 + iVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_ESI + 0xf0) - *(int *)(unaff_ESI + 0xec) >> 2);
  }
  return local_8 / 1000;
}

