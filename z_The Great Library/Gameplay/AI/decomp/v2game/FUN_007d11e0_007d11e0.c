// FUN_007d11e0 @ 007d11e0 body=[[007d11e0, 007d11f8] [007d1200, 007d1296]]


void FUN_007d11e0(int param_1,int *param_2)

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
    iVar3 = *(int *)(iVar5 + 0x134);
    iVar1 = *(int *)(iVar2 + 0x134);
    if ((iVar3 <= iVar1) &&
       ((iVar3 < iVar1 || (*(uint *)(iVar5 + 0x130) < *(uint *)(iVar2 + 0x130))))) {
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
      iVar4 = *(int *)(*param_2 + 0x134);
      if (iVar4 < *(int *)(iVar1 + 0x134)) break;
      if (((iVar4 <= *(int *)(iVar1 + 0x134)) &&
          (*(uint *)(*param_2 + 0x130) <= *(uint *)(iVar1 + 0x130))) ||
         (*(int *)(in_ECX + iVar6 * 4) = iVar1, iVar6 = iVar5, iVar5 <= in_EAX)) break;
    }
  }
  *(int *)(in_ECX + iVar6 * 4) = *param_2;
  return;
}

