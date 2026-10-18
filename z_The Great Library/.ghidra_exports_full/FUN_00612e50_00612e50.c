// FUN_00612e50 @ 00612e50 body=[[00612e50, 00612ebb]]


void FUN_00612e50(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int in_ECX;
  
  while (param_1 < in_EAX) {
    iVar4 = (in_EAX + -1) / 2;
    iVar2 = *(int *)(in_ECX + 4 + iVar4 * 8);
    iVar3 = *(int *)(param_2[1] + 0x1dc);
    iVar1 = *(int *)(iVar2 + 0x1dc);
    if ((iVar1 < iVar3) ||
       ((iVar1 <= iVar3 && (*(uint *)(iVar2 + 0x1d8) <= *(uint *)(param_2[1] + 0x1d8))))) break;
    *(undefined4 *)(in_ECX + in_EAX * 8) = *(undefined4 *)(in_ECX + iVar4 * 8);
    *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = *(undefined4 *)(in_ECX + 4 + iVar4 * 8);
    in_EAX = iVar4;
  }
  *(undefined4 *)(in_ECX + in_EAX * 8) = *param_2;
  *(undefined4 *)(in_ECX + 4 + in_EAX * 8) = param_2[1];
  return;
}

