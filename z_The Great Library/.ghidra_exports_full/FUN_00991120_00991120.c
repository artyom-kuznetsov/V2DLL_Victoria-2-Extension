// FUN_00991120 @ 00991120 body=[[00991120, 00991193]]


void FUN_00991120(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  if ((in_EAX < DAT_0131c8e0) && (DAT_0131c8dc <= in_EAX)) {
    iVar2 = (int)in_EAX - (int)DAT_0131c8dc;
    if (DAT_0131c8e0 == DAT_0131c8e4) {
      FUN_009911a0();
    }
    puVar1 = (undefined4 *)0x0;
    if (DAT_0131c8e0 != (undefined4 *)0x0) {
      *DAT_0131c8e0 = DAT_0131c8dc[iVar2 >> 2];
      DAT_0131c8e0 = DAT_0131c8e0 + 1;
      return;
    }
  }
  else {
    if (DAT_0131c8e0 == DAT_0131c8e4) {
      FUN_009911a0();
    }
    puVar1 = DAT_0131c8e0;
    if (DAT_0131c8e0 != (undefined4 *)0x0) {
      *DAT_0131c8e0 = *in_EAX;
      puVar1 = DAT_0131c8e0;
    }
  }
  DAT_0131c8e0 = puVar1 + 1;
  return;
}

