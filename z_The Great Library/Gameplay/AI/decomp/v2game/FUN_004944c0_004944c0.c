// FUN_004944c0 @ 004944c0 body=[[004944c0, 004944d2] [004944d6, 004944f3] [004944f7, 00494513]]


void FUN_004944c0(void)

{
  int in_EAX;
  
  if (0xf < *(uint *)(in_EAX + 0x70)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0x5c));
  }
  *(undefined4 *)(in_EAX + 0x70) = 0xf;
  *(undefined4 *)(in_EAX + 0x6c) = 0;
  *(undefined1 *)(in_EAX + 0x5c) = 0;
  if (0xf < *(uint *)(in_EAX + 0x54)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0x40));
  }
  *(undefined4 *)(in_EAX + 0x54) = 0xf;
  *(undefined4 *)(in_EAX + 0x50) = 0;
  *(undefined1 *)(in_EAX + 0x40) = 0;
  FUN_00849e90();
  FUN_0044be00();
  return;
}

