// FUN_0045d630 @ 0045d630 body=[[0045d630, 0045d6ac]]


void FUN_0045d630(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  
  iVar1 = param_1;
  while( true ) {
    iVar2 = iVar1 * 2 + 2;
    if (in_EDX <= iVar2) break;
    if (*(int *)(*(int *)(in_ECX + -4 + iVar2 * 4) + 4) < *(int *)(*(int *)(in_ECX + iVar2 * 4) + 4)
       ) {
      iVar2 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + iVar2 * 4);
    iVar1 = iVar2;
  }
  if (iVar2 == in_EDX) {
    *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + -4 + in_EDX * 4);
    iVar1 = in_EDX + -1;
  }
  while (param_1 < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    iVar2 = *(int *)(in_ECX + iVar3 * 4);
    if (*(int *)(iVar2 + 4) <= *(int *)(*param_2 + 4)) break;
    *(int *)(in_ECX + iVar1 * 4) = iVar2;
    iVar1 = iVar3;
  }
  *(int *)(in_ECX + iVar1 * 4) = *param_2;
  return;
}

