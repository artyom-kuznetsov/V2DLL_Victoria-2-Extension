// FUN_006e1c60 @ 006e1c60 body=[[006e1c60, 006e1cd4]]


void FUN_006e1c60(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int unaff_EDI;
  
  while (param_2 < param_1) {
    iVar2 = (param_1 + -1) / 2;
    cVar1 = FUN_006dda00(*(undefined4 *)(unaff_EDI + iVar2 * 8),
                         *(undefined4 *)(unaff_EDI + 4 + iVar2 * 8),*param_3,param_3[1]);
    if (cVar1 == '\0') break;
    *(undefined4 *)(unaff_EDI + param_1 * 8) = *(undefined4 *)(unaff_EDI + iVar2 * 8);
    *(undefined4 *)(unaff_EDI + 4 + param_1 * 8) = *(undefined4 *)(unaff_EDI + 4 + iVar2 * 8);
    param_1 = iVar2;
  }
  *(undefined4 *)(unaff_EDI + param_1 * 8) = *param_3;
  *(undefined4 *)(unaff_EDI + 4 + param_1 * 8) = param_3[1];
  return;
}

