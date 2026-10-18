// FUN_009688a0 @ 009688a0 body=[[009688a0, 009688b8] [009688c0, 00968938]]


void FUN_009688a0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  
  iVar3 = param_1;
  while( true ) {
    iVar1 = iVar3 * 2 + 2;
    if (in_EDX <= iVar1) break;
    if (*(int *)(*(int *)(in_ECX + -4 + iVar1 * 4) + 0x1438) <
        *(int *)(*(int *)(in_ECX + iVar1 * 4) + 0x1438)) {
      iVar1 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + iVar1 * 4);
    iVar3 = iVar1;
  }
  if (iVar1 == in_EDX) {
    *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + -4 + in_EDX * 4);
    iVar3 = in_EDX + -1;
  }
  if (iVar3 <= param_1) {
    *(int *)(in_ECX + iVar3 * 4) = *param_2;
    return;
  }
  do {
    iVar2 = (iVar3 + -1) / 2;
    iVar1 = *(int *)(in_ECX + iVar2 * 4);
    if (*(int *)(iVar1 + 0x1438) <= *(int *)(*param_2 + 0x1438)) break;
    *(int *)(in_ECX + iVar3 * 4) = iVar1;
    iVar3 = iVar2;
  } while (param_1 < iVar2);
  *(int *)(in_ECX + iVar3 * 4) = *param_2;
  return;
}

