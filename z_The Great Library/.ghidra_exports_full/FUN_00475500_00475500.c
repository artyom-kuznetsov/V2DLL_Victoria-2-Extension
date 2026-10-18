// FUN_00475500 @ 00475500 body=[[00475500, 0047557e]]


void FUN_00475500(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  puVar2 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x180);
    local_8 = 0;
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150(iVar1);
    }
    local_8 = 0xffffffff;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)(1);
    }
  }
  DAT_0125b5e0 = puVar2;
  ExceptionList = local_10;
  return;
}

