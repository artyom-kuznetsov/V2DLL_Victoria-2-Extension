// FUN_00579ee0 @ 00579ee0 body=[[00579ee0, 00579f79]]


void FUN_00579ee0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  
  iVar1 = *(int *)(unaff_ESI + 8);
  *(undefined4 *)(unaff_ESI + 0x20) = param_3;
  iVar2 = *(int *)(unaff_ESI + 0xc);
  *(int *)(unaff_ESI + 0x10) = param_2;
  if (iVar1 < iVar2) {
    iVar3 = **(int **)(DAT_012586dc + 0x10);
    iVar5 = 0;
    iVar4 = param_2;
    if (iVar3 < param_2) {
      iVar5 = param_2 - iVar3;
      iVar4 = iVar3;
    }
    if (iVar1 < iVar2) {
      if (iVar2 < iVar1 + iVar4) {
        param_2 = iVar5 + ((iVar4 + iVar1) - iVar2);
        *(int *)(unaff_ESI + 8) = iVar2;
      }
      else {
        *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + iVar4;
        param_2 = iVar5;
      }
    }
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}

