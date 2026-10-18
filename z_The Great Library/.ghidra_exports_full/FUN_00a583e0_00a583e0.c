// FUN_00a583e0 @ 00a583e0 body=[[00a583e0, 00a583f9] [00a583fd, 00a5842a] [00a5842e, 00a58454] [00a58458, 00a5847b] [00a5847f, 00a58496]]


void FUN_00a583e0(void)

{
  int in_EAX;
  
  if (0xf < *(uint *)(in_EAX + 0x100)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0xec));
  }
  *(undefined4 *)(in_EAX + 0x100) = 0xf;
  *(undefined4 *)(in_EAX + 0xfc) = 0;
  *(undefined1 *)(in_EAX + 0xec) = 0;
  if (0xf < *(uint *)(in_EAX + 0xc4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0xb0));
  }
  *(undefined4 *)(in_EAX + 0xc4) = 0xf;
  *(undefined4 *)(in_EAX + 0xc0) = 0;
  *(undefined1 *)(in_EAX + 0xb0) = 0;
  if (0xf < *(uint *)(in_EAX + 0xa8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0x94));
  }
  *(undefined4 *)(in_EAX + 0xa8) = 0xf;
  *(undefined4 *)(in_EAX + 0xa4) = 0;
  *(undefined1 *)(in_EAX + 0x94) = 0;
  if (0xf < *(uint *)(in_EAX + 0x8c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0x78));
  }
  *(undefined4 *)(in_EAX + 0x8c) = 0xf;
  *(undefined4 *)(in_EAX + 0x88) = 0;
  *(undefined1 *)(in_EAX + 0x78) = 0;
  FUN_006467c0();
  return;
}

