// FUN_00a385a0 @ 00a385a0 body=[[00a385a0, 00a38610]]


undefined4 * FUN_00a385a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5d1fe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x20);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 10000;
    *(undefined1 *)((int)puVar1 + 9) = 1;
    *puVar1 = &PTR_FUN_00e3c8c0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    local_8 = 2;
    puVar1[7] = 0;
    FUN_009e9ac0();
    puVar2 = puVar1;
  }
  ExceptionList = local_10;
  return puVar2;
}

