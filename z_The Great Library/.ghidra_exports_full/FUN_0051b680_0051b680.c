// FUN_0051b680 @ 0051b680 body=[[0051b680, 0051b6b6]]


void FUN_0051b680(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x1234) + param_1 * 4) != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x1234) + param_1 * 4);
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    *in_EAX = *(undefined4 *)(iVar1 + 0x10);
    in_EAX[1] = uVar2;
    return;
  }
  *in_EAX = 0;
  in_EAX[1] = 0;
  return;
}

