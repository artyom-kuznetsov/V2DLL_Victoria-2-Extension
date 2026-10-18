// FUN_00976dc0 @ 00976dc0 body=[[00976dc0, 00976dd4] [00976dd8, 00976df2] [00976df6, 00976dfc]]


void FUN_00976dc0(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x10));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0xf;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

