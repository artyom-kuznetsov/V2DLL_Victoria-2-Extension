// FUN_00a70af0 @ 00a70af0 body=[[00a70af0, 00a70b25]]


void FUN_00a70af0(int param_1)

{
  undefined2 in_CX;
  undefined2 in_DX;
  
  *(undefined2 *)(param_1 + 0xba) = in_CX;
  *(undefined2 *)(param_1 + 0xb8) = in_DX;
  (**(code **)(**(int **)(param_1 + 0x94) + 0x100))();
  return;
}

