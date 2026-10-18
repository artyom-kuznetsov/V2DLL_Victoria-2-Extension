// FUN_00a5c580 @ 00a5c580 body=[[00a5c580, 00a5c5c8] [00a5c5d2, 00a5c5ed] [00a5c5f7, 00a5c610]]


void FUN_00a5c580(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a26b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e41e84;
  local_8 = 0;
  FUN_009e6ac0(in_ECX[1]);
  in_ECX[1] = 0;
  if (in_ECX[5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[3] = 0;
  if (in_ECX[5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  ExceptionList = local_10;
  return;
}

