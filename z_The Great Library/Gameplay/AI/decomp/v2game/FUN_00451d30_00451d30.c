// FUN_00451d30 @ 00451d30 body=[[00451d30, 00451de5]]


void FUN_00451d30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int *piVar5;
  uint *puVar6;
  
  iVar4 = DAT_012587e4;
  piVar5 = *(int **)(DAT_012587e4 + 4);
  iVar1 = piVar5[*(int *)(in_EAX + 4)];
  puVar6 = (uint *)(DAT_012587e4 + 4);
  while (((int *)*puVar6 <= piVar5 && (piVar5 < *(int **)(iVar4 + 8)))) {
    iVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    if ((((0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU)) &&
         (iVar3 = *(int *)(iVar2 + 0x20), iVar3 != 0)) &&
        ((((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
          (*(char *)(iVar2 + 0x1e) != 'B')) && (iVar3 != *(int *)(iVar1 + 0x20))))) &&
       (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + iVar3 * 4) + 0x34) != 0 ||
         (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
          (*(char *)(iVar2 + 0x1e) == 'B')))) ||
        (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
         (*(char *)(iVar1 + 0x1e) == 'B')))))) {
      FUN_004d61d0();
    }
  }
  return;
}

