// FUN_0099e930 @ 0099e930 body=[[0099e930, 0099e957]]


void FUN_0099e930(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *in_EDX;
  
  if (param_1 != in_EDX) {
    puVar2 = param_1 + 2;
    do {
      puVar2[-1] = *(undefined4 *)(in_ECX + 4);
      *puVar2 = *(undefined4 *)(in_ECX + 8);
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 3;
    } while (puVar1 != in_EDX);
  }
  return;
}

