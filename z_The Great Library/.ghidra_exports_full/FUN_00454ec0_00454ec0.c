// FUN_00454ec0 @ 00454ec0 body=[[00454ec0, 00454f09]]


int FUN_00454ec0(void)

{
  undefined4 *puVar1;
  
  if (DAT_0125a858 == 0) {
    puVar1 = (undefined4 *)FUN_00aae9af(0x20);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 7) = 0;
      FUN_00455640(puVar1);
      return DAT_0125a858;
    }
    FUN_00455640(0);
  }
  return DAT_0125a858;
}

