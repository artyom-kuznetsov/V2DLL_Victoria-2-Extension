// FUN_005dffc9 @ 005dffc9 body=[[005dffc9, 005e002b] [005e002f, 005e0041]]


void FUN_005dffc9(void)

{
  char cVar1;
  undefined1 *puStack0000000c;
  undefined4 in_stack_0000001c;
  uint in_stack_00000030;
  void *in_stack_0000003c;
  undefined1 local_1c [16];
  undefined4 local_c;
  undefined *local_8;
  undefined4 uStack_4;
  
  puStack0000000c = local_1c;
  local_8 = (undefined *)0xf;
  local_c = 0;
  local_1c[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_005ab780();
  uStack_4 = 0x5e0008;
  FUN_0072d580();
  uStack_4 = 0x5e000d;
  cVar1 = FUN_005e5800();
  if (cVar1 != '\0') {
    uStack_4 = 0x5e001b;
    FUN_005e5bb0();
  }
  if (0xf < in_stack_00000030) {
    uStack_4 = in_stack_0000001c;
                    /* WARNING: Subroutine does not return */
    local_8 = &UNK_005e002c;
    FUN_00aae91b();
  }
  ExceptionList = in_stack_0000003c;
  return;
}

