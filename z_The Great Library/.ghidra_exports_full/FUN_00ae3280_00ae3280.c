// FUN_00ae3280 @ 00ae3280 body=[[00ae3280, 00ae32c8]]


uint FUN_00ae3280(void)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint uVar4;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      puVar3 = *(undefined1 **)(*(int *)(*(int *)(in_ECX + 0x10) + uVar4 * 4) + 0x20);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_00ded94d;
      }
      cVar2 = FUN_00b147b0(puVar3);
      if (cVar2 == '\x01') {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0xffffffff;
}

