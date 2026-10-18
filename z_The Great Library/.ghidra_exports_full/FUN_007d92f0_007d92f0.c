// FUN_007d92f0 @ 007d92f0 body=[[007d92f0, 007d9398]]


void FUN_007d92f0(void)

{
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  
  if (1 < (in_EAX - (int)in_ECX) / 0xc) {
    puVar1 = (undefined4 *)(in_EAX + -8);
    local_8 = 8 - (int)in_ECX;
    do {
      local_14 = puVar1[-1];
      local_10 = *puVar1;
      local_c = *(undefined1 *)(puVar1 + 1);
      puVar1[-1] = *in_ECX;
      *puVar1 = in_ECX[1];
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(in_ECX + 2);
      FUN_007d95b0(((-4 - (int)in_ECX) + (int)puVar1) / 0xc,&local_14);
      puVar1 = puVar1 + -3;
    } while (1 < (local_8 + (int)puVar1) / 0xc);
  }
  return;
}

