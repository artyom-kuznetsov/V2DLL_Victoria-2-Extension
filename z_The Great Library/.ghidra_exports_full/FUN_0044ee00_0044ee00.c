// FUN_0044ee00 @ 0044ee00 body=[[0044ee00, 0044ee73]]


void FUN_0044ee00(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  if ((in_EAX < DAT_0125a5b8) && (DAT_0125a5b4 <= in_EAX)) {
    iVar2 = (int)in_EAX - (int)DAT_0125a5b4;
    if (DAT_0125a5b8 == DAT_0125a5bc) {
      FUN_0044ee80();
    }
    puVar1 = (undefined4 *)0x0;
    if (DAT_0125a5b8 != (undefined4 *)0x0) {
      *DAT_0125a5b8 = DAT_0125a5b4[iVar2 >> 2];
      DAT_0125a5b8 = DAT_0125a5b8 + 1;
      return;
    }
  }
  else {
    if (DAT_0125a5b8 == DAT_0125a5bc) {
      FUN_0044ee80();
    }
    puVar1 = DAT_0125a5b8;
    if (DAT_0125a5b8 != (undefined4 *)0x0) {
      *DAT_0125a5b8 = *in_EAX;
      puVar1 = DAT_0125a5b8;
    }
  }
  DAT_0125a5b8 = puVar1 + 1;
  return;
}

