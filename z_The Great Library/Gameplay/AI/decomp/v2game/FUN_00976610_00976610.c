// FUN_00976610 @ 00976610 body=[[00976610, 0097665d] [00976661, 0097666a]]


void FUN_00976610(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0131bf90;
  if (DAT_0131bf90 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    puVar1 = DAT_0131bf90;
    if ((puVar2 != DAT_0131bf90) && (DAT_0131bf90 != (undefined4 *)0x0)) {
      FUN_00976940(DAT_0131bf90);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar1);
    }
  }
  DAT_0131bf90 = puVar2;
  return;
}

