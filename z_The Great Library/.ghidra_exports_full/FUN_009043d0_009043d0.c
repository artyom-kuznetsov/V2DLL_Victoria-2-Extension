// FUN_009043d0 @ 009043d0 body=[[009043d0, 009043e4] [009043e8, 00904409] [0090440d, 00904413]]


void FUN_009043d0(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x24));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0xf;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  FUN_008b32d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

