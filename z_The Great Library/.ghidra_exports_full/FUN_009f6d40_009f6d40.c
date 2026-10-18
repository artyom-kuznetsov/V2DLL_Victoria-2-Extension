// FUN_009f6d40 @ 009f6d40 body=[[009f6d40, 009f6d90] [009f6d94, 009f6da1]]


void FUN_009f6d40(void)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x1b) = 0;
  uVar1 = FUN_009a2e50(in_ECX[0x1d]);
  local_8 = 0;
  (**(code **)(*in_ECX + 0x54))(uVar1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  ExceptionList = local_10;
  return;
}

