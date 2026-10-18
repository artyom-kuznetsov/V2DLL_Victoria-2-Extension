// FUN_00558c20 @ 00558c20 body=[[00558c20, 00558c3c] [00558c40, 00558c9e]]


void FUN_00558c20(undefined4 param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (0x10 < (int)(in_ECX - (int)in_EAX & 0xfffffff0U)) {
    puVar1 = (undefined4 *)(in_ECX + -0x10);
    do {
      local_18 = *puVar1;
      local_14 = puVar1[1];
      local_10 = puVar1[2];
      local_c = puVar1[3];
      *puVar1 = *in_EAX;
      puVar1[1] = in_EAX[1];
      puVar1[2] = in_EAX[2];
      puVar1[3] = in_EAX[3];
      FUN_00559e50(&local_18,param_1);
      puVar1 = puVar1 + -4;
    } while (0x10 < (int)((int)puVar1 + (0x10 - (int)in_EAX) & 0xfffffff0U));
  }
  return;
}

