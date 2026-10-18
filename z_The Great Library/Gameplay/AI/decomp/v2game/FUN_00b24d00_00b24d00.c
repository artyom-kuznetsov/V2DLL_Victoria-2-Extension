// FUN_00b24d00 @ 00b24d00 body=[[00b24d00, 00b24deb]]


int * FUN_00b24d00(char *param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  piVar2 = (int *)(*DAT_013f3aa8)(0x18,0);
  uVar5 = FUN_00b2a820(param_1);
  if (piVar2 == (int *)0x0) {
    FUN_00b1f840("Out of memory");
    return (int *)0x0;
  }
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (*DAT_013f3aa8)(pcVar3 + (1 - (int)(param_1 + 1)),0);
  *piVar2 = iVar4;
  if (iVar4 == 0) {
    FUN_00b1f840("Out of memory");
  }
  else {
    iVar4 = FUN_00b24bc0(piVar2);
    if (iVar4 != 0) {
      pcVar3 = (char *)*piVar2;
      do {
        cVar1 = *param_1;
        *pcVar3 = cVar1;
        param_1 = param_1 + 1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      *(undefined8 *)(piVar2 + 2) = uVar5;
      return piVar2;
    }
  }
  if (*piVar2 != 0) {
    (*DAT_013f3ab0)(*piVar2);
  }
  if (piVar2[5] != 0) {
    (*DAT_013f3ab0)(piVar2[5]);
  }
  (*DAT_013f3ab0)(piVar2);
  return (int *)0x0;
}

