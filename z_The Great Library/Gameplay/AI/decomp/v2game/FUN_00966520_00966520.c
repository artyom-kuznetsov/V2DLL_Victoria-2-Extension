// FUN_00966520 @ 00966520 body=[[00966520, 009665b8] [009665bc, 009665ce]]


void FUN_00966520(int param_1)

{
  undefined1 local_2c [20];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  __alldiv(*(uint *)(param_1 + 0x218) << 0xf,
           *(int *)(param_1 + 0x21c) << 0xf | *(uint *)(param_1 + 0x218) >> 0x11,DAT_00f0e018,
           DAT_00f0e01c);
  FUN_00988bb0(local_2c,2);
  local_8 = 0;
  FUN_0042c180();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

