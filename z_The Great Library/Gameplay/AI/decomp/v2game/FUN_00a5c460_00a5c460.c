// FUN_00a5c460 @ 00a5c460 body=[[00a5c460, 00a5c4c3] [00a5c4c7, 00a5c4da]]


void FUN_00a5c460(byte param_1)

{
  undefined4 *in_ECX;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b3b643;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e41e58;
  local_8 = 1;
  local_14 = local_14 & 0xffffff00;
  if (in_ECX[0x1a] != 0) {
    FUN_009a4a60(in_ECX[0x1a],local_14);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_00a5c580();
  FUN_006467c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

