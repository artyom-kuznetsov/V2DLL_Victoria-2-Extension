// FUN_005c4c80 @ 005c4c80 body=[[005c4c80, 005c4cf3]]


void FUN_005c4c80(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  if ((in_EAX < DAT_0125fe14) && (DAT_0125fe10 <= in_EAX)) {
    iVar2 = (int)in_EAX - (int)DAT_0125fe10;
    if (DAT_0125fe14 == DAT_0125fe18) {
      FUN_005c4d00();
    }
    puVar1 = (undefined4 *)0x0;
    if (DAT_0125fe14 != (undefined4 *)0x0) {
      *DAT_0125fe14 = DAT_0125fe10[iVar2 >> 2];
      DAT_0125fe14 = DAT_0125fe14 + 1;
      return;
    }
  }
  else {
    if (DAT_0125fe14 == DAT_0125fe18) {
      FUN_005c4d00();
    }
    puVar1 = DAT_0125fe14;
    if (DAT_0125fe14 != (undefined4 *)0x0) {
      *DAT_0125fe14 = *in_EAX;
      puVar1 = DAT_0125fe14;
    }
  }
  DAT_0125fe14 = puVar1 + 1;
  return;
}

