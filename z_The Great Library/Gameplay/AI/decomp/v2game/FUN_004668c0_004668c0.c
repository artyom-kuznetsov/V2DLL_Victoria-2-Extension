// FUN_004668c0 @ 004668c0 body=[[004668c0, 00466969] [0046696d, 00466990] [00466994, 004669ad] [004669b1, 004669bf] [004669c3, 004669d3]]


/* WARNING: Removing unreachable block (ram,0x00466961) */

void FUN_004668c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *puVar2;
  uint in_stack_0000001c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b53be8;
  local_10 = ExceptionList;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_8 = 1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  FUN_0045be80(in_ECX,&local_24);
  iVar1 = ((int)local_20 - (int)local_24) / 0x1c;
  puVar2 = local_24;
  if (0 < iVar1) {
    do {
      local_14 = iVar1;
      FUN_00408ed0(&param_2,0,0xffffffff);
      local_8 = 2;
      FUN_00408ed0(puVar2,0,0xffffffff);
      FUN_00a840b0();
      local_8 = 1;
      puVar2 = puVar2 + 7;
      iVar1 = local_14 + -1;
    } while (local_14 + -1 != 0);
    local_14 = 0;
  }
  puVar2 = local_24;
  if (local_24 != (undefined4 *)0x0) {
    while( true ) {
      if (puVar2 == local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_24);
      }
      if (0xf < (uint)puVar2[5]) break;
      puVar2[5] = 0xf;
      puVar2[4] = 0;
      *(undefined1 *)puVar2 = 0;
      puVar2 = puVar2 + 7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar2);
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return;
}

