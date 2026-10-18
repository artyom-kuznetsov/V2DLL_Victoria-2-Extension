// FUN_007d16f0 @ 007d16f0 body=[[007d16f0, 007d1708] [007d1710, 007d17a6]]


void FUN_007d16f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  
  iVar6 = in_EAX;
  while( true ) {
    iVar4 = iVar6 * 2 + 2;
    if (param_1 <= iVar4) break;
    iVar5 = *(int *)(in_ECX + iVar4 * 4);
    iVar2 = *(int *)(in_ECX + -4 + iVar4 * 4);
    iVar3 = *(int *)(iVar5 + 300);
    iVar1 = *(int *)(iVar2 + 300);
    if ((iVar3 <= iVar1) &&
       ((iVar3 < iVar1 || (*(uint *)(iVar5 + 0x128) < *(uint *)(iVar2 + 0x128))))) {
      iVar4 = iVar6 * 2 + 1;
    }
    *(undefined4 *)(in_ECX + iVar6 * 4) = *(undefined4 *)(in_ECX + iVar4 * 4);
    iVar6 = iVar4;
  }
  if (iVar4 == param_1) {
    *(undefined4 *)(in_ECX + iVar6 * 4) = *(undefined4 *)(in_ECX + -4 + param_1 * 4);
    iVar6 = param_1 + -1;
  }
  if (in_EAX < iVar6) {
    while( true ) {
      iVar5 = (iVar6 + -1) / 2;
      iVar1 = *(int *)(in_ECX + iVar5 * 4);
      iVar4 = *(int *)(*param_2 + 300);
      if (iVar4 < *(int *)(iVar1 + 300)) break;
      if (((iVar4 <= *(int *)(iVar1 + 300)) &&
          (*(uint *)(*param_2 + 0x128) <= *(uint *)(iVar1 + 0x128))) ||
         (*(int *)(in_ECX + iVar6 * 4) = iVar1, iVar6 = iVar5, iVar5 <= in_EAX)) break;
    }
  }
  *(int *)(in_ECX + iVar6 * 4) = *param_2;
  return;
}

