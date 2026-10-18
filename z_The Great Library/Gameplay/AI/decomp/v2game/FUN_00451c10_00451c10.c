// FUN_00451c10 @ 00451c10 body=[[00451c10, 00451c9f]]


void FUN_00451c10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  
  iVar3 = DAT_012587e4;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4);
  piVar4 = *(int **)(DAT_012587e4 + 4);
  while ((*(int **)(iVar3 + 4) <= piVar4 && (piVar4 < *(int **)(iVar3 + 8)))) {
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    if ((((0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU)) &&
         (*(int *)(iVar2 + 0x20) != 0)) &&
        ((*(char *)(iVar2 + 0x1c) != 'R' ||
         ((*(char *)(iVar2 + 0x1d) != 'E' || (*(char *)(iVar2 + 0x1e) != 'B')))))) &&
       ((*(int *)(iVar2 + 0x20) != *(int *)(iVar1 + 0x20) &&
        (*(char *)(*(int *)(iVar2 + 0x20) + *(int *)(iVar1 + 0xd08)) != '\0')))) {
      FUN_004d61d0();
    }
  }
  return;
}

