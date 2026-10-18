// FUN_00613040 @ 00613040 body=[[00613040, 00613096]]


void FUN_00613040(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int unaff_ESI;
  
  if (param_1 < in_ECX) {
    while( true ) {
      iVar5 = (in_ECX + -1) / 2;
      iVar2 = *(int *)(unaff_ESI + iVar5 * 4);
      iVar3 = *(int *)(iVar2 + 0x30);
      iVar4 = *(int *)(*(int *)(*param_2 + 0x30) + 0x1c);
      iVar1 = *(int *)(iVar3 + 0x1c);
      if (iVar1 < iVar4) break;
      if (((iVar1 <= iVar4) &&
          (*(uint *)(iVar3 + 0x18) <= *(uint *)(*(int *)(*param_2 + 0x30) + 0x18))) ||
         (*(int *)(unaff_ESI + in_ECX * 4) = iVar2, in_ECX = iVar5, iVar5 <= param_1)) break;
    }
  }
  *(int *)(unaff_ESI + in_ECX * 4) = *param_2;
  return;
}

