// FUN_009c17f0 @ 009c17f0 body=[[009c17f0, 009c1913]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c17f0(void)

{
  undefined1 uVar1;
  int iVar2;
  int in_ECX;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e0be;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_009c12d0();
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  DAT_01258a90 = (undefined2)unaff_EDI;
  iVar2 = in_ECX;
  if (in_ECX == 0) {
    if (DAT_01258a94 != 0) {
      FUN_009c1970();
    }
    _DAT_0131ca64 = 0;
    iVar2 = _DAT_0131ca64;
  }
  _DAT_0131ca64 = iVar2;
  _DAT_0131ca60 = unaff_EDI + 0x1268;
  DAT_01258a9c = _DAT_0131ca64;
  if (DAT_01258a94 == 0) {
    iVar2 = FUN_00aae9af(0xc);
    local_8._0_1_ = 1;
    if (iVar2 == 0) {
      DAT_01258a94 = 0;
    }
    else {
      DAT_01258a94 = FUN_009c1c70();
    }
    local_8._0_1_ = 0;
    DAT_01258a67 = 1;
  }
  if (DAT_01258a98 == 0) {
    iVar2 = FUN_00aae9af(0xc);
    local_8._0_1_ = 2;
    if (iVar2 == 0) {
      DAT_01258a98 = 0;
    }
    else {
      DAT_01258a98 = FUN_009c1c70();
    }
    local_8._0_1_ = 0;
  }
  if (DAT_01258aa0 == (undefined4 *)0x0) {
    DAT_01258aa0 = (undefined4 *)FUN_00aae9af(0x10);
    if (DAT_01258aa0 == (undefined4 *)0x0) {
      DAT_01258aa0 = (undefined4 *)0x0;
    }
    else {
      *DAT_01258aa0 = 0;
      DAT_01258aa0[1] = 0;
      DAT_01258aa0[2] = 0;
    }
  }
  DAT_01258a67 = 1;
  DAT_0131ca68 = uVar1;
  ExceptionList = local_10;
  return;
}

