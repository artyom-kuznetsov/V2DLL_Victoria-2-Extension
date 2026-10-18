// FUN_004015b0 @ 004015b0 body=[[004015b0, 0040164c]]


void FUN_004015b0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45818;
  local_10 = ExceptionList;
  puVar1 = DAT_0131c5bc;
  ExceptionList = &local_10;
  if (DAT_0131c5bc == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af(4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_00e37868;
    }
    local_8 = 0;
    if ((puVar1 != DAT_0131c5bc) && (DAT_0131c5bc != (undefined4 *)0x0)) {
      (**(code **)*DAT_0131c5bc)(1);
    }
  }
  DAT_0131c5bc = puVar1;
  local_8 = 0xffffffff;
  FUN_00987cf0(DAT_0131c5bc,param_1);
  ExceptionList = local_10;
  return;
}

