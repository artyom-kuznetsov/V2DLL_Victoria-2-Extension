// FUN_00567440 @ 00567440 body=[[00567440, 00567454] [00567458, 00567476] [0056747a, 00567493] [00567497, 0056749d]]


void FUN_00567440(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(in_ECX + 0x40) = 0xf;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  if (0xf < *(uint *)(in_ECX + 0x24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x10));
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0xf;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

