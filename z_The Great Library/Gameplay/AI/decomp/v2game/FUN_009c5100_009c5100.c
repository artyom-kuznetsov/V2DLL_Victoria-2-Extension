// FUN_009c5100 @ 009c5100 body=[[009c5100, 009c5130]]


void FUN_009c5100(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x17c) = param_1;
  *(undefined2 *)(in_ECX + 0x17e) = param_2;
  iVar1 = *(int *)(in_ECX + 0x154);
  *(undefined2 *)(iVar1 + 0xac) = param_1;
  *(undefined2 *)(iVar1 + 0xae) = param_2;
  return;
}

