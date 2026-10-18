// FUN_00688000 @ 00688000 body=[[00688000, 0068804f]]


void FUN_00688000(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2;
  iVar3 = 1;
  if (1 < iVar2) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xadc) + iVar3 * 4);
      if (0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU)) {
        FUN_00527d10(iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

