// FUN_005c2b80 @ 005c2b80 body=[[005c2b80, 005c2bbd]]


void FUN_005c2b80(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int in_ECX;
  
  if (in_ECX != 0) {
    puVar1 = (undefined4 *)(in_EAX + 8);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000008) {
        puVar1[-1] = 0x18d;
        puVar1[-2] = CUnitAdjuster::vftable;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      in_ECX = in_ECX + -1;
      puVar1 = puVar1 + 6;
    } while (in_ECX != 0);
  }
  return;
}

