// FUN_0042ca20 @ 0042ca20 body=[[0042ca20, 0042ca5f]]


void FUN_0042ca20(int param_1)

{
  int in_ECX;
  int in_EDX;
  
  if (param_1 != in_EDX) {
    do {
      if ((((*(int *)(param_1 + 0xc) == *(int *)(in_ECX + 0xc)) &&
           (*(int *)(param_1 + 0x1c) == *(int *)(in_ECX + 0x1c))) &&
          (*(int *)(param_1 + 0x24) == *(int *)(in_ECX + 0x24))) &&
         ((*(int *)(param_1 + 0x14) == *(int *)(in_ECX + 0x14) &&
          (*(int *)(param_1 + 0x28) == *(int *)(in_ECX + 0x28))))) {
        return;
      }
      param_1 = param_1 + 0x40;
    } while (param_1 != in_EDX);
  }
  return;
}

