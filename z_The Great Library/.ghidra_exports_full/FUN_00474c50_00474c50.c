// FUN_00474c50 @ 00474c50 body=[[00474c50, 00474cc3]]


void FUN_00474c50(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  if ((in_EAX < DAT_0125b5d4) && (DAT_0125b5d0 <= in_EAX)) {
    iVar2 = (int)in_EAX - (int)DAT_0125b5d0;
    if (DAT_0125b5d4 == DAT_0125b5d8) {
      FUN_00474cd0();
    }
    puVar1 = (undefined4 *)0x0;
    if (DAT_0125b5d4 != (undefined4 *)0x0) {
      *DAT_0125b5d4 = DAT_0125b5d0[iVar2 >> 2];
      DAT_0125b5d4 = DAT_0125b5d4 + 1;
      return;
    }
  }
  else {
    if (DAT_0125b5d4 == DAT_0125b5d8) {
      FUN_00474cd0();
    }
    puVar1 = DAT_0125b5d4;
    if (DAT_0125b5d4 != (undefined4 *)0x0) {
      *DAT_0125b5d4 = *in_EAX;
      puVar1 = DAT_0125b5d4;
    }
  }
  DAT_0125b5d4 = puVar1 + 1;
  return;
}

