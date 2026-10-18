// FUN_009a6f40 @ 009a6f40 body=[[009a6f40, 009a6faf]]


undefined4 * FUN_009a6f40(void)

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
  puVar1 = (undefined4 *)FUN_00aae9af(0xc0);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00a5f0c0(puVar1);
    *puVar1 = &PTR_FUN_00e38988;
    puVar1[6] = &PTR_LAB_00e389e8;
    puVar1[0xc] = &PTR_LAB_00e389f8;
    puVar1[0x12] = &PTR_LAB_00e38a08;
    puVar1[0x18] = &PTR_LAB_00e38a18;
    puVar2 = puVar1;
  }
  ExceptionList = local_10;
  return puVar2;
}

