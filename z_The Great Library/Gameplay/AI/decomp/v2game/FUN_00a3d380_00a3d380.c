// FUN_00a3d380 @ 00a3d380 body=[[00a3d380, 00a3d401] [00a3d405, 00a3d42d] [00a3d431, 00a3d44e] [00a3d452, 00a3d469] [00a3d46d, 00a3d486]]


void FUN_00a3d380(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b411b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e40bb8;
  local_8 = 2;
  if (in_ECX[0x2e] != 0) {
    FUN_00aaea59(in_ECX[0x2e]);
  }
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  if (-1 < (int)in_ECX[0x27]) {
    FUN_009bcda0();
  }
  in_ECX[0x27] = 0;
  if (0xf < (uint)in_ECX[0x36]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x31]);
  }
  in_ECX[0x36] = 0xf;
  in_ECX[0x35] = 0;
  *(undefined1 *)(in_ECX + 0x31) = 0;
  if (0xf < (uint)in_ECX[0x23]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1e]);
  }
  in_ECX[0x23] = 0xf;
  in_ECX[0x22] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
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

