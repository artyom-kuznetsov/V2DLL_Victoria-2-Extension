// FUN_00a6af50 @ 00a6af50 body=[[00a6af50, 00a6afc3]]


void FUN_00a6af50(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  if ((in_EAX < DAT_013f05bc) && (DAT_013f05b8 <= in_EAX)) {
    iVar2 = (int)in_EAX - (int)DAT_013f05b8;
    if (DAT_013f05bc == DAT_013f05c0) {
      FUN_00a6b050();
    }
    puVar1 = (undefined4 *)0x0;
    if (DAT_013f05bc != (undefined4 *)0x0) {
      *DAT_013f05bc = DAT_013f05b8[iVar2 >> 2];
      DAT_013f05bc = DAT_013f05bc + 1;
      return;
    }
  }
  else {
    if (DAT_013f05bc == DAT_013f05c0) {
      FUN_00a6b050();
    }
    puVar1 = DAT_013f05bc;
    if (DAT_013f05bc != (undefined4 *)0x0) {
      *DAT_013f05bc = *in_EAX;
      puVar1 = DAT_013f05bc;
    }
  }
  DAT_013f05bc = puVar1 + 1;
  return;
}

