// FUN_0067c8e0 @ 0067c8e0 body=[[0067c8e0, 0067c8f8] [0067c900, 0067c95f]]


void FUN_0067c8e0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int in_ECX;
  
  while( true ) {
    iVar3 = in_ECX * 2 + 2;
    if (param_1 <= iVar3) break;
    iVar1 = *(int *)(in_EAX + iVar3 * 4);
    iVar2 = *(int *)(in_EAX + -4 + iVar3 * 4);
    if ((*(char *)(iVar2 + 0x20) < *(char *)(iVar1 + 0x20)) ||
       (*(float *)(iVar1 + 0x18) < *(float *)(iVar2 + 0x18))) {
      iVar3 = in_ECX * 2 + 1;
    }
    *(undefined4 *)(in_EAX + in_ECX * 4) = *(undefined4 *)(in_EAX + iVar3 * 4);
    in_ECX = iVar3;
  }
  if (iVar3 == param_1) {
    *(undefined4 *)(in_EAX + in_ECX * 4) = *(undefined4 *)(in_EAX + -4 + param_1 * 4);
  }
  FUN_0067cae0();
  return;
}

