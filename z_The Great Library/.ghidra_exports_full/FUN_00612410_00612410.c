// FUN_00612410 @ 00612410 body=[[00612410, 00612428] [00612430, 006124a0]]


void FUN_00612410(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int in_ECX;
  int iVar5;
  
  while( true ) {
    iVar5 = in_EAX * 2 + 2;
    if (param_1 <= iVar5) break;
    iVar2 = *(int *)(in_ECX + -4 + iVar5 * 8);
    iVar3 = *(int *)(in_ECX + 4 + iVar5 * 8);
    iVar4 = *(int *)(iVar2 + 0x1dc);
    iVar1 = *(int *)(iVar3 + 0x1dc);
    if ((iVar4 <= iVar1) &&
       ((iVar4 < iVar1 || (*(uint *)(iVar2 + 0x1d8) < *(uint *)(iVar3 + 0x1d8))))) {
      iVar5 = in_EAX * 2 + 1;
    }
    *(undefined4 *)(in_ECX + in_EAX * 8) = *(undefined4 *)(in_ECX + iVar5 * 8);
    *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = *(undefined4 *)(in_ECX + 4 + iVar5 * 8);
    in_EAX = iVar5;
  }
  if (iVar5 == param_1) {
    *(undefined4 *)(in_ECX + in_EAX * 8) = *(undefined4 *)(in_ECX + -8 + param_1 * 8);
    *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = *(undefined4 *)(in_ECX + -4 + param_1 * 8);
  }
  FUN_00612e50();
  return;
}

