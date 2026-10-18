// FUN_005446e0 @ 005446e0 body=[[005446e0, 0054477b]]


int FUN_005446e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00549920();
  piVar2 = DAT_012588e8;
  iVar3 = (**(code **)(*DAT_012588e8 + 0x1c))();
  iVar5 = 0;
  iVar4 = iVar3;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(piVar2[0x2b7] + iVar5 * 4);
      iVar4 = iVar1 + 0x1c;
      if (((*(int *)(iVar1 + 0x20) != 0) &&
          (0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU))) &&
         (*(int *)(iVar1 + 0x20) != *(int *)(param_1 + 0x20))) {
        iVar4 = FUN_005cc2e0(param_1 + 0x1c,0);
        if ((char)iVar4 != '\0') {
          iVar4 = FUN_00549920();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return iVar4;
}

