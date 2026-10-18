// FUN_004f9ca0 @ 004f9ca0 body=[[004f9ca0, 004f9cd7] [004f9cdb, 004f9cf1] [004f9cf5, 004f9d09]]


void FUN_004f9ca0(undefined4 param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00a727a0(param_1);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    FUN_00a72710(in_EAX + 0x110);
    if (puVar1 != (undefined4 *)0x0) break;
    puVar1 = (undefined4 *)FUN_00a727a0(param_1);
  }
  if (0xf < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar1);
  }
  puVar1[5] = 0xf;
  puVar1[4] = 0;
  *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar1);
}

