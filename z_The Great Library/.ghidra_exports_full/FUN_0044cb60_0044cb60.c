// FUN_0044cb60 @ 0044cb60 body=[[0044cb60, 0044cb71] [0044cb75, 0044cb8a]]


void FUN_0044cb60(void)

{
  int in_EAX;
  
  if (0xf < *(uint *)(in_EAX + 0x44)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_EAX + 0x30));
  }
  *(undefined4 *)(in_EAX + 0x44) = 0xf;
  *(undefined4 *)(in_EAX + 0x40) = 0;
  *(undefined1 *)(in_EAX + 0x30) = 0;
  FUN_0044be00();
  return;
}

