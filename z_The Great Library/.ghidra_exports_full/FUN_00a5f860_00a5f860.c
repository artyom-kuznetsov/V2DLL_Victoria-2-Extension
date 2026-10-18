// FUN_00a5f860 @ 00a5f860 body=[[00a5f860, 00a5f8ac]]


void FUN_00a5f860(void)

{
  undefined4 *puVar1;
  
  if (DAT_013f05b4 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00aae9af(4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_00e38a70;
    }
    if ((puVar1 != DAT_013f05b4) && (DAT_013f05b4 != (undefined4 *)0x0)) {
      (**(code **)*DAT_013f05b4)(1);
    }
    DAT_01252644 = 0;
    DAT_013f05b4 = puVar1;
  }
  return;
}

