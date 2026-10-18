// FUN_00675a30 @ 00675a30 body=[[00675a30, 00675a44] [00675a48, 00675a69] [00675a6d, 00675a73]]


void FUN_00675a30(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x7c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x68));
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0xf;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined1 *)(in_ECX + 0x68) = 0;
  FUN_00640880();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

