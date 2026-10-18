// FUN_0045fa60 @ 0045fa60 body=[[0045fa60, 0045fae6]]


int FUN_0045fa60(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (*(int *)(unaff_ESI + 0xc) - *(int *)(unaff_ESI + 8)) / 0xac) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(unaff_ESI + 8);
      if ((*(int *)(iVar3 + 0x44 + iVar1) - *(int *)(iVar3 + 0x40 + iVar1) & 0xfffffffcU) == 0) {
LAB_0045fad6:
        return iVar4 * 0xac + *(int *)(unaff_ESI + 8);
      }
      cVar2 = (**(code **)(*(int *)(iVar3 + iVar1 + 0x38) + 0x18))(param_1);
      if (cVar2 != '\0') goto LAB_0045fad6;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xac;
    } while (iVar4 < (*(int *)(unaff_ESI + 0xc) - *(int *)(unaff_ESI + 8)) / 0xac);
  }
  return 0;
}

