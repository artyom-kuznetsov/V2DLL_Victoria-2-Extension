// FUN_006b5fa0 @ 006b5fa0 body=[[006b5fa0, 006b5fb7] [006b5fc0, 006b6012]]


void FUN_006b5fa0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int unaff_EDI;
  
  while( true ) {
    iVar2 = param_1 * 2 + 2;
    if (param_2 <= iVar2) break;
    if ((param_4 < 4) && (cVar1 = FUN_006a8a40(param_4), cVar1 != '\0')) {
      iVar2 = param_1 * 2 + 1;
    }
    *(undefined4 *)(unaff_EDI + param_1 * 4) = *(undefined4 *)(unaff_EDI + iVar2 * 4);
    param_1 = iVar2;
  }
  if (iVar2 == param_2) {
    *(undefined4 *)(unaff_EDI + param_1 * 4) = *(undefined4 *)(unaff_EDI + -4 + param_2 * 4);
  }
  FUN_006b6240();
  return;
}

