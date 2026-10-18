// FUN_00451df0 @ 00451df0 body=[[00451df0, 00451e1c] [00451e20, 00451f03]]


void FUN_00451df0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint *puVar6;
  int *piVar7;
  
  iVar4 = DAT_012587e4;
  piVar7 = *(int **)(DAT_012587e4 + 4);
  iVar1 = piVar7[*(int *)(param_1 + 4)];
  puVar6 = (uint *)(DAT_012587e4 + 4);
  while (((int *)*puVar6 <= piVar7 && (piVar7 < *(int **)(iVar4 + 8)))) {
    iVar2 = *piVar7;
    piVar7 = piVar7 + 1;
    if (((((0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU)) &&
          (iVar3 = *(int *)(iVar2 + 0x20), iVar3 != 0)) &&
         ((*(char *)(iVar2 + 0x1c) != 'R' ||
          ((*(char *)(iVar2 + 0x1d) != 'E' || (*(char *)(iVar2 + 0x1e) != 'B')))))) &&
        (iVar3 != *(int *)(iVar1 + 0x20))) &&
       (((((((iVar3 = *(int *)(*(int *)(iVar1 + 0xbe8) + iVar3 * 4), *(int *)(iVar3 + 0x34) != 0 ||
             (cVar5 = FUN_0092f4a0(), cVar5 != '\0')) ||
            (cVar5 = FUN_0092ede0(iVar3,param_1,(char *)(iVar2 + 0x1c)), cVar5 != '\0')) ||
           ((*(int *)(iVar3 + 0x24) != 0 || (*(int *)(iVar3 + 0x20) != 0)))) ||
          ((*(int *)(iVar3 + 0x28) != 0 &&
           (*(int *)(*(int *)(iVar3 + 0x28) + 0xc) == *(int *)(iVar3 + 0xc))))) ||
         ((cVar5 = FUN_0092e240(), cVar5 != '\0' || (*(char *)(iVar3 + 0x70) != '\0')))) ||
        (*(char *)(*(int *)(iVar2 + 0x20) + *(int *)(iVar1 + 0xd08)) != '\0')))) {
      FUN_004d61d0();
    }
  }
  return;
}

