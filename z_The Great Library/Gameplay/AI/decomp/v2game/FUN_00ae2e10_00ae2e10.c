// FUN_00ae2e10 @ 00ae2e10 body=[[00ae2e10, 00ae2e8c]]


undefined4 * FUN_00ae2e10(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x18,0x194,4,0,0,0xffffffff);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
  }
  if (in_ECX != puVar1) {
    puVar2 = (undefined1 *)*in_ECX;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_00ded94d;
    }
    FUN_00b137d0(puVar2,in_ECX[1]);
  }
  FUN_00ae30b0(in_ECX + 3);
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(in_ECX + 5);
  return puVar1;
}

