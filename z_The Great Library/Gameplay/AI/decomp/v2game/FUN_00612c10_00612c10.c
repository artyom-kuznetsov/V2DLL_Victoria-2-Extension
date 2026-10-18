// FUN_00612c10 @ 00612c10 body=[[00612c10, 00612c89]]


void FUN_00612c10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int in_ECX;
  
  while( true ) {
    iVar5 = in_ECX * 2 + 2;
    if (param_1 <= iVar5) break;
    iVar2 = *(int *)(*(int *)(in_EAX + -4 + iVar5 * 4) + 0x30);
    iVar3 = *(int *)(*(int *)(in_EAX + iVar5 * 4) + 0x30);
    iVar4 = *(int *)(iVar2 + 0x1c);
    iVar1 = *(int *)(iVar3 + 0x1c);
    if ((iVar4 <= iVar1) && ((iVar4 < iVar1 || (*(uint *)(iVar2 + 0x18) < *(uint *)(iVar3 + 0x18))))
       ) {
      iVar5 = in_ECX * 2 + 1;
    }
    *(undefined4 *)(in_EAX + in_ECX * 4) = *(undefined4 *)(in_EAX + iVar5 * 4);
    in_ECX = iVar5;
  }
  if (iVar5 == param_1) {
    *(undefined4 *)(in_EAX + in_ECX * 4) = *(undefined4 *)(in_EAX + -4 + param_1 * 4);
  }
  FUN_00613040();
  return;
}

