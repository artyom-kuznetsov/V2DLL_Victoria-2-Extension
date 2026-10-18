// FUN_009c7290 @ 009c7290 body=[[009c7290, 009c72dd]]


void FUN_009c7290(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0131ca9c;
  if (DAT_0131ca9c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00aae9af(0xc);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = 10000;
      *(undefined1 *)((int)puVar1 + 9) = 1;
      *puVar1 = CNullSound::vftable;
    }
    if ((puVar1 != DAT_0131ca9c) && (DAT_0131ca9c != (undefined4 *)0x0)) {
      (**(code **)*DAT_0131ca9c)(1);
    }
  }
  DAT_0131ca9c = puVar1;
  return;
}

