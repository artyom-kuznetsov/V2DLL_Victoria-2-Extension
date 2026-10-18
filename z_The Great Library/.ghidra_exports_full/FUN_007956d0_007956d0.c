// FUN_007956d0 @ 007956d0 body=[[007956d0, 00795735]]


void FUN_007956d0(void)

{
  int *in_EAX;
  
  FUN_00795bf0(in_EAX,in_EAX + 0x1a,in_EAX[1],in_EAX[2],0);
  FUN_00795bf0(in_EAX,in_EAX + 0x24,in_EAX[2],in_EAX[1],1);
  (**(code **)(*(int *)(*in_EAX + 0x18) + 0x34))();
  *(undefined1 *)(in_EAX + 3) = 1;
  FUN_00795a50(in_EAX,in_EAX + 0x1a,0);
  FUN_00795a50(in_EAX,in_EAX + 0x24,1);
  FUN_00795200();
  return;
}

