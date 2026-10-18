// FUN_0054b5a0 @ 0054b5a0 body=[[0054b5a0, 0054b5e0]]


void FUN_0054b5a0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int in_ECX;
  
  if (in_ECX != 0) {
    puVar1 = (undefined4 *)(in_EAX + 8);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000008) {
        puVar1[-1] = 0x18d;
        puVar1[-2] = CTradeSetting::vftable;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined2 *)(puVar1 + 2) = 0x101;
      }
      puVar1 = puVar1 + 6;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  return;
}

