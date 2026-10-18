// FUN_0055a370 @ 0055a370 body=[[0055a370, 0055a403]]


void FUN_0055a370(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  
  while( true ) {
    if (param_1 <= param_2) {
      *(int *)(unaff_EDI + param_1 * 4) = *param_3;
      return;
    }
    iVar6 = (param_1 + -1) / 2;
    iVar2 = *(int *)(unaff_EDI + iVar6 * 4);
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*param_3 + 0xc) * 4) + 0xe88);
    iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0xc) * 4) + 0xe88);
    iVar5 = *(int *)(iVar3 + 0x14);
    iVar1 = *(int *)(iVar4 + 0x14);
    if ((iVar1 < iVar5) ||
       ((iVar1 <= iVar5 && (*(uint *)(iVar4 + 0x10) <= *(uint *)(iVar3 + 0x10))))) break;
    *(int *)(unaff_EDI + param_1 * 4) = iVar2;
    param_1 = iVar6;
  }
  *(int *)(unaff_EDI + param_1 * 4) = *param_3;
  return;
}

