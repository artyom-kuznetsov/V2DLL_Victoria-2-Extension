// FUN_009be180 @ 009be180 body=[[009be180, 009be1a7] [009be1b0, 009be20b]]


undefined4 FUN_009be180(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  if (DAT_0131ca04 == DAT_0131ca08) {
    FUN_009be380();
    puVar1 = DAT_0131ca08;
    for (puVar2 = DAT_0131ca04; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar2 = 0;
    }
  }
  if (DAT_0131ca04[unaff_EDI] == 0) {
    puVar2 = (undefined4 *)FUN_00aae9af(4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      uVar3 = luaL_newstate();
      *puVar2 = uVar3;
      luaL_openlibs(uVar3);
    }
    DAT_0131ca04[unaff_EDI] = puVar2;
    return DAT_0131ca04[unaff_EDI];
  }
  return DAT_0131ca04[unaff_EDI];
}

