// FUN_0048d050 @ 0048d050 body=[[0048d050, 0048d06a]]


void FUN_0048d050(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 4) + param_1 * 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x20);
  *in_EAX = *(undefined4 *)(iVar1 + 0x1c);
  in_EAX[1] = uVar2;
  return;
}

