// FUN_00a2f420 @ 00a2f420 body=[[00a2f420, 00a2f450]]


void FUN_00a2f420(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x17c) = param_1;
  *(undefined2 *)(in_ECX + 0x17e) = param_2;
  iVar1 = *(int *)(in_ECX + 0x150);
  *(undefined2 *)(iVar1 + 0xb2) = param_1;
  *(undefined2 *)(iVar1 + 0xb0) = param_2;
  return;
}

