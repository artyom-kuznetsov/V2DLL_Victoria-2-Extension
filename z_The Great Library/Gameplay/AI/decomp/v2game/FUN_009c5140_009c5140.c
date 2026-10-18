// FUN_009c5140 @ 009c5140 body=[[009c5140, 009c5170]]


void FUN_009c5140(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x180) = param_1;
  *(undefined2 *)(in_ECX + 0x182) = param_2;
  iVar1 = *(int *)(in_ECX + 0x154);
  *(undefined2 *)(iVar1 + 0xb2) = param_1;
  *(undefined2 *)(iVar1 + 0xb0) = param_2;
  return;
}

