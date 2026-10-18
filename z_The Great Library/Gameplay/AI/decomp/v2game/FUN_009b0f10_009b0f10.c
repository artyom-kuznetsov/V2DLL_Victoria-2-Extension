// FUN_009b0f10 @ 009b0f10 body=[[009b0f10, 009b0f47]]


void FUN_009b0f10(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(in_EAX + 4);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(in_EAX + 8);
  *(undefined4 *)(in_ECX + 0x1fc) = *(undefined4 *)(in_EAX + 0xc);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(in_EAX + 0x10);
  FUN_00408ed0(in_EAX + 0x14,0,0xffffffff);
  return;
}

