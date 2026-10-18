// FUN_0055e160 @ 0055e160 body=[[0055e160, 0055e19c] [0055e1a0, 0055e1bf] [0055e1c3, 0055e1d5]]


void FUN_0055e160(byte param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3fe23;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_008b32d0();
  if (0xf < *(uint *)(in_ECX + 0x44)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x30));
  }
  *(undefined4 *)(in_ECX + 0x44) = 0xf;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  FUN_0044be00();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

