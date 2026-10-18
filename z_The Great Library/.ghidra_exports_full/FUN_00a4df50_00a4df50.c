// FUN_00a4df50 @ 00a4df50 body=[[00a4df50, 00a4dfac] [00a4dfb0, 00a4dfd2] [00a4dfd6, 00a4dfed] [00a4dff1, 00a4e008] [00a4e00c, 00a4e025]]


void FUN_00a4df50(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40fee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e416a8;
  local_8 = 2;
  if (-1 < (int)in_ECX[0x25]) {
    FUN_009bcda0();
  }
  if (0xf < (uint)in_ECX[0x23]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1e]);
  }
  in_ECX[0x23] = 0xf;
  in_ECX[0x22] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
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

