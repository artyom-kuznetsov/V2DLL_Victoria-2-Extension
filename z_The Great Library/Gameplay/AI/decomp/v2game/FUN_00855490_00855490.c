// FUN_00855490 @ 00855490 body=[[00855490, 008554f2]]


void FUN_00855490(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int unaff_EDI;
  
  while (param_1 < in_ECX) {
    iVar4 = (in_ECX + -1) / 2;
    iVar3 = *(int *)(unaff_EDI + iVar4 * 0xc);
    iVar1 = unaff_EDI + iVar4 * 0xc;
    if (iVar3 <= *param_2) break;
    piVar2 = (int *)(unaff_EDI + in_ECX * 0xc);
    *piVar2 = iVar3;
    piVar2[1] = *(int *)(iVar1 + 4);
    piVar2[2] = *(int *)(iVar1 + 8);
    in_ECX = iVar4;
  }
  piVar2 = (int *)(unaff_EDI + in_ECX * 0xc);
  *piVar2 = *param_2;
  piVar2[1] = param_2[1];
  piVar2[2] = param_2[2];
  return;
}

