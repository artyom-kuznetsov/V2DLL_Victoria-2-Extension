// FUN_0090e570 @ 0090e570 body=[[0090e570, 0090e59a]]


undefined4 * FUN_0090e570(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x68);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00913320();
    *puVar1 = CCrisisOfferAction::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

