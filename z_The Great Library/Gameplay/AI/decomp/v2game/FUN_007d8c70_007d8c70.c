// FUN_007d8c70 @ 007d8c70 body=[[007d8c70, 007d8cc6]]


void FUN_007d8c70(void)

{
  int in_EAX;
  undefined2 *puVar1;
  int in_ECX;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  if (in_ECX != 0) {
    puVar1 = (undefined2 *)(in_EAX + 10);
    do {
      if (puVar1 != (undefined2 *)0xa) {
        puVar1[-5] = local_10;
        puVar1[-4] = local_e;
        puVar1[-3] = local_c;
        puVar1[-2] = local_a;
        puVar1[-1] = local_8;
        *puVar1 = local_6;
      }
      puVar1 = puVar1 + 6;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  return;
}

