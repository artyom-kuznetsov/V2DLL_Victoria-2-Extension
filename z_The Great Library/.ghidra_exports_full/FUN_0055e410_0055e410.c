// FUN_0055e410 @ 0055e410 body=[[0055e410, 0055e45a]]


int FUN_0055e410(void)

{
  undefined4 *puVar1;
  
  if (DAT_0125e2b0 == 0) {
    puVar1 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      FUN_0055e8c0();
      return DAT_0125e2b0;
    }
    FUN_0055e8c0();
  }
  return DAT_0125e2b0;
}

