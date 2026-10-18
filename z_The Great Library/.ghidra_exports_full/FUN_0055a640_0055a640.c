// FUN_0055a640 @ 0055a640 body=[[0055a640, 0055a65e] [0055a660, 0055a6de]]


void FUN_0055a640(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  while (param_2 < param_1) {
    iVar3 = (param_1 + -1) / 2;
    iVar1 = FUN_00445060(param_4);
    iVar2 = FUN_00445060(param_4);
    if (iVar2 <= iVar1) break;
    *(undefined4 *)(unaff_EDI + param_1 * 8) = *(undefined4 *)(unaff_EDI + iVar3 * 8);
    *(undefined4 *)(unaff_EDI + 4 + param_1 * 8) = *(undefined4 *)(unaff_EDI + 4 + iVar3 * 8);
    param_1 = iVar3;
  }
  *(undefined4 *)(unaff_EDI + param_1 * 8) = *param_3;
  *(undefined4 *)(unaff_EDI + 4 + param_1 * 8) = param_3[1];
  return;
}

