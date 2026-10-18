// FUN_004a0ff0 @ 004a0ff0 body=[[004a0ff0, 004a108f] [004a1093, 004a10af] [004a10b3, 004a10c6]]


int FUN_004a0ff0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5fed8;
  local_10 = ExceptionList;
  iVar3 = 0;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_004a1290(&local_24);
  local_8 = 0;
  if (0 < ((int)local_20 - (int)local_24) / 0x1c) {
    do {
      iVar2 = FUN_009da400();
      local_14 = local_14 + iVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < ((int)local_20 - (int)local_24) / 0x1c);
  }
  puVar1 = local_24;
  if (local_24 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return local_14;
  }
  while( true ) {
    if (puVar1 == local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_24);
    }
    if (0xf < (uint)puVar1[5]) break;
    puVar1[5] = 0xf;
    puVar1[4] = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1 = puVar1 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar1);
}

