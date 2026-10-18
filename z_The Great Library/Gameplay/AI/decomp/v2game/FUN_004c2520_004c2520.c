// FUN_004c2520 @ 004c2520 body=[[004c2520, 004c255c]]


void FUN_004c2520(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x1c) != 0) {
    FUN_004c19a0();
    FUN_004ee990(in_EAX + 0x10,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_EAX + 0x88),
                 *(undefined4 *)(in_EAX + 0x8c));
  }
  return;
}

