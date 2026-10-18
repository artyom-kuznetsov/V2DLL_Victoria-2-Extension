// FUN_00b29540 @ 00b29540 body=[[00b29540, 00b2958b]]


int FUN_00b29540(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = DAT_00f20be0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (*DAT_013f3aa8)(pcVar2 + (1 - (int)(DAT_00f20be0 + 1)),0);
  if (iVar3 == 0) {
    FUN_00b1f840("Out of memory");
    return 0;
  }
  iVar4 = iVar3 - (int)DAT_00f20be0;
  pcVar2 = DAT_00f20be0;
  do {
    cVar1 = *pcVar2;
    pcVar2[iVar4] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return iVar3;
}

