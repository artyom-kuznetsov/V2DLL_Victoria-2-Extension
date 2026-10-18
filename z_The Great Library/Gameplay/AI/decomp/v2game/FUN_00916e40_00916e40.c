// FUN_00916e40 @ 00916e40 body=[[00916e40, 00916ef6]]


undefined4 FUN_00916e40(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                           *(int *)(in_ECX + 0x14) * 4) + 0x34);
  if (iVar3 != 0) {
    iVar2 = FUN_0093bcc0();
    bVar1 = false;
    if (iVar2 != 0) goto LAB_00916e8f;
  }
  bVar1 = true;
LAB_00916e8f:
  if (((iVar3 != 0) && (iVar3 = FUN_00936fc0(iVar3,in_ECX + 8,in_ECX + 0x10,0), iVar3 == 100)) &&
     (*(char *)(in_ECX + 0x30) != '\0')) {
    iVar3 = *(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44) >> 2;
    iVar2 = 0;
    if (iVar3 < 1) {
      return 1;
    }
    piVar4 = *(int **)(in_ECX + 0x44);
    do {
      if (*piVar4 != 0) {
        iVar2 = iVar2 + 1;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar2 < 2) {
      return 1;
    }
    iVar3 = FUN_009293c0();
    if (iVar3 < 0x65) {
      return 1;
    }
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}

