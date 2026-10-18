// FUN_009abc50 @ 009abc50 body=[[009abc50, 009abd52] [009abd56, 009abd67]]


undefined4 * FUN_009abc50(undefined4 param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a082;
  local_10 = ExceptionList;
  local_14 = 0;
  pcVar1 = in_ECX;
  if (0xf < *(uint *)(in_ECX + 0x14)) {
    pcVar1 = *(char **)in_ECX;
  }
  if (*pcVar1 == '%') {
    ExceptionList = &local_10;
    local_14 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (local_14 != 0) {
      puVar2 = (undefined4 *)FUN_009ac1e0(local_14,param_1,in_ECX);
      ExceptionList = local_10;
      return puVar2;
    }
    ExceptionList = local_10;
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_00aae9af(0x20);
  local_8 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_18 = puVar2;
    FUN_00409350("UNKNOWN TEXT FORMAT",0x13);
    local_14 = 1;
    *puVar2 = &PTR_FUN_00e38f1c;
    puVar2[6] = 0xf;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    local_8 = 4;
    FUN_00408ed0(local_34,0,0xffffffff);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return puVar2;
}

