// FUN_004ee8b0 @ 004ee8b0 body=[[004ee8b0, 004ee970]]


int FUN_004ee8b0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_EDX;
  int iVar6;
  
  iVar1 = *(int *)(in_EDX + 0x194);
  iVar2 = *(int *)(iVar1 + *(int *)(param_2 + 0x28) * 0x10);
  while ((iVar3 = iVar2, iVar3 != 0 && (iVar6 = *param_3, iVar6 != 0))) {
    iVar2 = *(int *)(iVar3 + 0x27c);
    if (*(int *)(iVar3 + 0x68) == param_2) {
      iVar4 = *(int *)(iVar3 + 0x58);
      if (*(char *)(*(int *)(iVar3 + 0x68) + 0x40) != '\0') {
        iVar4 = *(int *)(iVar3 + 0x60);
      }
      iVar4 = *(int *)(iVar3 + 0x58) - iVar4;
      iVar1 = 0;
      if (iVar4 != 0) {
        if (iVar4 < iVar6) {
          iVar6 = iVar4;
        }
        *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + iVar6;
        FUN_004f2970();
        *param_3 = *param_3 - iVar6;
        piVar5 = (int *)FUN_004c8d10();
        *piVar5 = *piVar5 + iVar6;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar6;
        iVar3 = *(int *)(*(int *)(iVar3 + 0x68) + 0x28);
        iVar1 = *(int *)(param_1 + 0x5c);
        piVar5 = (int *)(iVar1 + iVar3 * 4);
        *piVar5 = *piVar5 + iVar6;
        iVar1 = iVar1 + iVar3 * 4;
      }
    }
  }
  return iVar1;
}

