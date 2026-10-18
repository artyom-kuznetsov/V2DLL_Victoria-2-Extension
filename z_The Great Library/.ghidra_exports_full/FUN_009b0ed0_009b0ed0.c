// FUN_009b0ed0 @ 009b0ed0 body=[[009b0ed0, 009b0f07]]


void FUN_009b0ed0(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(in_EAX + 4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(in_EAX + 8);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(in_EAX + 0xc);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(in_EAX + 0x10);
  FUN_00408ed0(in_EAX + 0x14,0,0xffffffff);
  return;
}

