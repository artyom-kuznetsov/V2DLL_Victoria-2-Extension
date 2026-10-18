// FUN_009f9110 @ 009f9110 body=[[009f9110, 009f9169]]


void FUN_009f9110(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 0) {
    *(int *)(in_ECX + 0xd4) = param_1;
    *(int *)(param_1 + 0xd8) = in_ECX;
  }
  else {
    *(int *)(param_1 + 0xd8) = in_ECX;
    *(int *)(in_ECX + 0xd4) = param_1;
    *(int *)(in_ECX + 0xd8) = iVar1;
    *(int *)(iVar1 + 0xd4) = in_ECX;
  }
  if (*(int *)(*(int *)(in_ECX + 0xe4) + 0xe0) == param_1) {
    *(int *)(*(int *)(in_ECX + 0xe4) + 0xe0) = in_ECX;
  }
  return;
}

