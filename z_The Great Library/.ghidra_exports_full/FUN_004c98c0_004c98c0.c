// FUN_004c98c0 @ 004c98c0 body=[[004c98c0, 004c98e8]]


void FUN_004c98c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *in_EDX;
  
  if (param_1 != in_EDX) {
    puVar2 = param_1 + 3;
    do {
      puVar2[-1] = *(undefined4 *)(in_ECX + 8);
      puVar1 = puVar2 + 1;
      *puVar2 = *(undefined4 *)(in_ECX + 0xc);
      puVar2 = puVar2 + 4;
    } while (puVar1 != in_EDX);
  }
  return;
}

