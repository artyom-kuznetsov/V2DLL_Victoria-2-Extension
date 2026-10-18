// FUN_00a55420 @ 00a55420 body=[[00a55420, 00a5548e] [00a55492, 00a554bd] [00a554c1, 00a554e7] [00a554eb, 00a55511] [00a55515, 00a55538] [00a5553c, 00a55559] [00a5555d, 00a55574] [00a55578, 00a5558f] [00a55593, 00a555ac]]


void FUN_00a55420(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40fc6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e41a40;
  local_8 = 6;
  if ((*(char *)(in_ECX + 0x13) != '\0') && (-1 < (int)in_ECX[0x24])) {
    FUN_009bcda0();
    in_ECX[0x24] = 0xffffffff;
  }
  if (0xf < (uint)in_ECX[0x4f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4a]);
  }
  in_ECX[0x4f] = 0xf;
  in_ECX[0x4e] = 0;
  *(undefined1 *)(in_ECX + 0x4a) = 0;
  if (0xf < (uint)in_ECX[0x3e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x39]);
  }
  in_ECX[0x3e] = 0xf;
  in_ECX[0x3d] = 0;
  *(undefined1 *)(in_ECX + 0x39) = 0;
  if (0xf < (uint)in_ECX[0x37]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x32]);
  }
  in_ECX[0x37] = 0xf;
  in_ECX[0x36] = 0;
  *(undefined1 *)(in_ECX + 0x32) = 0;
  if (0xf < (uint)in_ECX[0x30]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2b]);
  }
  in_ECX[0x30] = 0xf;
  in_ECX[0x2f] = 0;
  *(undefined1 *)(in_ECX + 0x2b) = 0;
  if (0xf < (uint)in_ECX[0x22]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1d]);
  }
  in_ECX[0x22] = 0xf;
  in_ECX[0x21] = 0;
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  if (0xf < (uint)in_ECX[0x1b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x16]);
  }
  in_ECX[0x1b] = 0xf;
  in_ECX[0x1a] = 0;
  *(undefined1 *)(in_ECX + 0x16) = 0;
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

