// FUN_009deb70 @ 009deb70 body=[[009deb70, 009debb1]]


void FUN_009deb70(void)

{
  int in_EAX;
  
  if ((*(int *)(in_EAX + 0x28c) == 0) && (*(int *)(in_EAX + 0x290) == 0)) {
    *(undefined1 *)(in_EAX + 0x294) = 0;
    *(undefined4 *)(in_EAX + 0x2a0) = 1;
    FUN_009f9630(in_EAX + 0x280,*(undefined4 *)(*(int *)(in_EAX + 500) + 100),4,0x14,0x102,0);
  }
  return;
}

