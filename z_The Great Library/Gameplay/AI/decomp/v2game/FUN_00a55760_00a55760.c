// FUN_00a55760 @ 00a55760 body=[[00a55760, 00a557da] [00a557de, 00a55809] [00a5580d, 00a5582d] [00a55831, 00a55848] [00a5584c, 00a55863] [00a55867, 00a55880]]


void FUN_00a55760(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40f5f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e41c28;
  local_8 = 3;
  if (-1 < (int)in_ECX[0x3a]) {
    FUN_009bcda0();
  }
  if (-1 < (int)in_ECX[0x3b]) {
    FUN_009bcda0();
  }
  if (0xf < (uint)in_ECX[0x38]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x33]);
  }
  in_ECX[0x38] = 0xf;
  in_ECX[0x37] = 0;
  *(undefined1 *)(in_ECX + 0x33) = 0;
  if (0xf < (uint)in_ECX[0x31]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2c]);
  }
  in_ECX[0x31] = 0xf;
  in_ECX[0x30] = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  if (0xf < (uint)in_ECX[0x1c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x17]);
  }
  in_ECX[0x1c] = 0xf;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  if (0xf < (uint)in_ECX[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  ExceptionList = local_10;
  return;
}

