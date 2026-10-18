// FUN_008a49e0 @ 008a49e0 body=[[008a49e0, 008a4ad5] [008a4ae0, 008a4b5d]]


void FUN_008a49e0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int local_1c;
  undefined4 local_14;
  
  local_1c = 0x7fffffff;
  iVar4 = FUN_008a4900(in_ECX);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  local_14 = CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 8) >> 8),
                      *(char *)(iVar1 + 0x12d0) == '\0');
  if (*(char *)(in_ECX + 0x21) != '\0') {
    piVar5 = *(int **)(DAT_012588e8 + 0xadc);
    iVar6 = 0;
    while ((*(int **)(DAT_012588e8 + 0xadc) <= piVar5 && (piVar5 < *(int **)(DAT_012588e8 + 0xae0)))
          ) {
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      if ((0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU)) &&
         ((((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
           (*(char *)(iVar2 + 0x1e) != 'B')) &&
          ((*(int *)(iVar2 + 0x20) != 0 &&
           (iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0xbcc) + 8) + *(int *)(iVar4 + 0x58) * 4),
           iVar6 < iVar2)))))) {
        iVar6 = iVar2;
      }
    }
    if (0 < iVar6) {
      local_1c = iVar6;
    }
  }
  iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xbe4) * 4);
  if (*(char *)(in_ECX + 0x20) == '\0') {
    cVar3 = FUN_00511ef0(iVar1,iVar4,0,local_14,0,local_14,local_14);
    if (cVar3 != '\0') {
      FUN_008a4880(local_1c);
    }
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x188);
    piVar5 = *(int **)(iVar4 + 0x48);
    while ((*(int **)(iVar4 + 0x48) <= piVar5 && (piVar5 < *(int **)(iVar4 + 0x4c)))) {
      iVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      cVar3 = FUN_00511ef0(iVar1,*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + iVar6 * 4),0,
                           local_14,0,local_14,local_14);
      if (cVar3 != '\0') {
        FUN_008a4880(local_1c);
      }
    }
  }
  return;
}

