// FUN_00b1fe50 @ 00b1fe50 body=[[00b1fe50, 00b1fe68] [00b1fe70, 00b1fe8a]]


void FUN_00b1fe50(void)

{
  int iVar1;
  
  FUN_00b1fe00();
  iVar1 = DAT_00f20a80;
  if (DAT_00f20a80 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + 0x10);
      FUN_00b1fcc0();
    } while (iVar1 != 0);
    DAT_00f20a80 = 0;
  }
  return;
}

