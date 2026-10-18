// FUN_00875040 @ 00875040  (requested 00875040, first bytes: 55 8B EC 6A FF 68 8B F8)


int FUN_00875040(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01319730 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x38);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008750a0(iVar1);
    }
    FUN_00876010(uVar2);
  }
  ExceptionList = local_10;
  return DAT_01319730;
}

