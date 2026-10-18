// FUN_00a1d2a0 @ 00a1d2a0 body=[[00a1d2a0, 00a1d347]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00a1d2a0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x244);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0xffffffff;
    puVar1[0x4d] = 0xffffffff;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
  }
  local_8 = 0xffffffff;
  _DAT_01258b38 = FUN_00a1c910(param_1);
  if (_DAT_01258b38 != 0) {
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00a1d350();
    }
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  puVar2[1] = puVar1;
  *puVar2 = 1;
  ExceptionList = local_10;
  return puVar2;
}

