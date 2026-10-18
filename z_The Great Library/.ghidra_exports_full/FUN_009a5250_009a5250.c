// FUN_009a5250 @ 009a5250 body=[[009a5250, 009a5293] [009a5297, 009a52b6]]


void FUN_009a5250(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f50b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 0;
  FUN_009a4ca0();
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[6] = 0xf;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  ExceptionList = local_10;
  return;
}

