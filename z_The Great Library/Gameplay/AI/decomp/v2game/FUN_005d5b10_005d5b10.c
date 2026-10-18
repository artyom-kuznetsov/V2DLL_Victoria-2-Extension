// FUN_005d5b10 @ 005d5b10 body=[[005d5b10, 005d5bba]]


void FUN_005d5b10(void)

{
  int iVar1;
  char cVar2;
  int *in_EAX;
  int *piVar3;
  int local_c;
  int local_8;
  
  cVar2 = FUN_005d5a30();
  if ((cVar2 != '\0') &&
     ((cVar2 = (**(code **)(*in_EAX + 0x3c))(), cVar2 == '\0' || (1 < in_EAX[0x10])))) {
    piVar3 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_EAX[0x31] * 4) + 0xbd4);
    local_c = 0;
    local_8 = -10000000;
    if (piVar3 != (int *)0x0) {
      do {
        iVar1 = *piVar3;
        piVar3 = (int *)piVar3[2];
        if ((((*(int *)(iVar1 + 0x88) == 0) && (*(char *)(iVar1 + 0xd4) != '\0')) &&
            (cVar2 = FUN_005cbc60(), cVar2 != '\0')) && (local_8 < *(int *)(iVar1 + 0xd0))) {
          local_c = iVar1;
          local_8 = *(int *)(iVar1 + 0xd0);
        }
      } while (piVar3 != (int *)0x0);
      if (local_c != 0) {
        FUN_005cbcc0(local_c);
      }
    }
  }
  return;
}

