// FUN_004ca070 @ 004ca070 body=[[004ca070, 004ca0a1]]


void FUN_004ca070(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int in_ECX;
  
  if (in_ECX != 0) {
    puVar1 = (undefined4 *)(in_EAX + 8);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000008) {
        puVar1[-1] = 0x18d;
        puVar1[-2] = CMapPoint::vftable;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  return;
}

