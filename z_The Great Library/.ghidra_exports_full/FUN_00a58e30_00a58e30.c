// FUN_00a58e30 @ 00a58e30 body=[[00a58e30, 00a58e48] [00a58e4c, 00a58e78] [00a58e7c, 00a58ea3] [00a58ea7, 00a58ebe]]


void FUN_00a58e30(void)

{
  int in_EAX;
  
  if (0xf < *(uint *)(in_EAX + 0xd4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0xc0));
  }
  *(undefined4 *)(in_EAX + 0xd4) = 0xf;
  *(undefined4 *)(in_EAX + 0xd0) = 0;
  *(undefined1 *)(in_EAX + 0xc0) = 0;
  if (0xf < *(uint *)(in_EAX + 0x9c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0x88));
  }
  *(undefined4 *)(in_EAX + 0x9c) = 0xf;
  *(undefined4 *)(in_EAX + 0x98) = 0;
  *(undefined1 *)(in_EAX + 0x88) = 0;
  if (0xf < *(uint *)(in_EAX + 0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0x6c));
  }
  *(undefined4 *)(in_EAX + 0x80) = 0xf;
  *(undefined4 *)(in_EAX + 0x7c) = 0;
  *(undefined1 *)(in_EAX + 0x6c) = 0;
  FUN_006467c0();
  return;
}

