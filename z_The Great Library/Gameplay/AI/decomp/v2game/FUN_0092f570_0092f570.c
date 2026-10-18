// FUN_0092f570 @ 0092f570 body=[[0092f570, 0092f5af]]


void FUN_0092f570(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0x48) = param_1;
  if (param_1 < 0) {
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x404);
  if (iVar1 < *(int *)(in_ECX + 0x48)) {
    *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x48) - iVar1;
    *(int *)(in_ECX + 0x48) = iVar1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  return;
}

