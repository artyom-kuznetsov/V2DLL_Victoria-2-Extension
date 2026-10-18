// FUN_00754640 @ 00754640 body=[[00754640, 00754688]]


int FUN_00754640(void)

{
  undefined4 *puVar1;
  
  if (DAT_01265438 == 0) {
    puVar1 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      FUN_00754950(puVar1);
      return DAT_01265438;
    }
    FUN_00754950(0);
  }
  return DAT_01265438;
}

