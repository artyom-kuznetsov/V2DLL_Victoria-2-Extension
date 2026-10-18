// FUN_009be380 @ 009be380 body=[[009be380, 009be40a]]


void FUN_009be380(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = (int)DAT_0131ca08 - DAT_0131ca04 >> 2;
  if (in_EAX < uVar1) {
    puVar3 = (undefined4 *)(DAT_0131ca04 + in_EAX * 4);
    if (puVar3 != DAT_0131ca08) {
      FID_conflict__memcpy(puVar3,DAT_0131ca08,0);
      DAT_0131ca08 = puVar3;
      return;
    }
  }
  else if (uVar1 < in_EAX) {
    FUN_009be410();
    iVar2 = in_EAX - ((int)DAT_0131ca08 - DAT_0131ca04 >> 2);
    puVar3 = DAT_0131ca08;
    if (iVar2 != 0) {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
    DAT_0131ca08 = DAT_0131ca08 + (in_EAX - ((int)DAT_0131ca08 - DAT_0131ca04 >> 2));
  }
  return;
}

