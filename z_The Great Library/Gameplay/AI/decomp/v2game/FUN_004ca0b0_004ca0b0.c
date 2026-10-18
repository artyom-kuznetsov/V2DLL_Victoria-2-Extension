// FUN_004ca0b0 @ 004ca0b0 body=[[004ca0b0, 004ca0e8]]


void FUN_004ca0b0(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int in_EDX;
  
  if (in_ECX != 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000008) {
        puVar1[-1] = 0x18d;
        puVar1[-2] = CMapPoint::vftable;
        *puVar1 = *(undefined4 *)(in_EDX + 8);
        puVar1[1] = *(undefined4 *)(in_EDX + 0xc);
      }
      puVar1 = puVar1 + 4;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  return;
}

