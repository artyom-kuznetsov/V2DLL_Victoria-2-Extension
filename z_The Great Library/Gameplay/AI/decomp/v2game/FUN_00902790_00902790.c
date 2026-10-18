// FUN_00902790 @ 00902790 body=[[00902790, 00902900]]


char FUN_00902790(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    return '\0';
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x2c);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x30) == 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 8);
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
      *(int *)(param_1 + 0xc) = iVar1;
      if (iVar1 == 0) {
        return '\0';
      }
    }
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  bVar6 = *(char *)(iVar1 + 0x12d0) == '\0';
  iVar5 = 0x7fffffff;
  if (*(char *)(in_ECX + 0x1c) != '\0') {
    piVar4 = *(int **)(DAT_012588e8 + 0xadc);
    iVar5 = 0;
    while ((*(int **)(DAT_012588e8 + 0xadc) <= piVar4 && (piVar4 < *(int **)(DAT_012588e8 + 0xae0)))
          ) {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      if ((0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU)) &&
         ((((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
           (*(char *)(iVar2 + 0x1e) != 'B')) &&
          ((*(int *)(iVar2 + 0x20) != 0 &&
           (iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0xbcc) + 8) +
                            *(int *)(*(int *)(in_ECX + 0x20) + 0x58) * 4), iVar5 < iVar2)))))) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 < 1) {
      iVar5 = 0x7fffffff;
    }
  }
  iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  cVar3 = FUN_00511ef0(iVar1,iVar2,0,bVar6,0,bVar6,bVar6);
  if (((cVar3 != '\0') && (*(char *)(*(int *)(in_ECX + 0x20) + 0x131) != '\0')) &&
     ((iVar1 = *(int *)(*(int *)(iVar2 + 0x118) + *(int *)(*(int *)(in_ECX + 0x20) + 0x134) * 4),
      iVar1 != 0 && (iVar5 <= *(int *)(iVar1 + 0x20) / 1000)))) {
    cVar3 = '\0';
  }
  return cVar3;
}

