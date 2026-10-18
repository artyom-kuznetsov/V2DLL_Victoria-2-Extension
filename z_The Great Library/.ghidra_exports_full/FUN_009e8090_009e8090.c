// FUN_009e8090 @ 009e8090 body=[[009e8090, 009e80dc]]


void FUN_009e8090(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0131cb34;
  if (DAT_0131cb34 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00aae9af(4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      DAT_00f20c3c = 3;
      *puVar1 = CNullMusic::vftable;
    }
    if ((puVar1 != DAT_0131cb34) && (DAT_0131cb34 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0131cb34)(1);
    }
  }
  DAT_0131cb34 = puVar1;
  return;
}

