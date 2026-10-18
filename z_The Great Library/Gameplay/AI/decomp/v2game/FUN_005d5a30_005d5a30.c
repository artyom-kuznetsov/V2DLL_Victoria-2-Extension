// FUN_005d5a30 @ 005d5a30 body=[[005d5a30, 005d5b08]]


undefined4 FUN_005d5a30(void)

{
  char cVar1;
  int iVar2;
  int *unaff_ESI;
  
  if ((((unaff_ESI[0x65] == 0) && ((char)unaff_ESI[0x41] == '\0')) && (unaff_ESI[0x1d] == 0)) &&
     ((cVar1 = (**(code **)(*unaff_ESI + 0x3c))(), cVar1 == '\0' ||
      (*(char *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x2a) != '\0')))) {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI[0x37] + 0x134) * 4);
    if ((unaff_ESI[0x31] == *(int *)(iVar2 + 0x20)) ||
       ((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + unaff_ESI[0x31] * 4) + 0x34) == 0 &&
        (((((char)unaff_ESI[0x30] != 'R' || (*(char *)((int)unaff_ESI + 0xc1) != 'E')) ||
          (*(char *)((int)unaff_ESI + 0xc2) != 'B')) &&
         (((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
          (*(char *)(iVar2 + 0x1e) != 'B')))))))) {
      cVar1 = (**(code **)(*unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI[0x37] + 0x130));
      if ((cVar1 != '\0') &&
         (iVar2 = (**(code **)(*unaff_ESI + 0x2c))(), *(int *)(iVar2 + 0x1b4) != 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

