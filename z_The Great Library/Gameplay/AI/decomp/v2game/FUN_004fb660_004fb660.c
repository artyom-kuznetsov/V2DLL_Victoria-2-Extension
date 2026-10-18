// FUN_004fb660 @ 004fb660 body=[[004fb660, 004fb68c]]


void FUN_004fb660(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x924) = *(undefined4 *)(in_EAX + 4);
  *(undefined8 *)(in_ECX + 0x928) = *(undefined8 *)(in_EAX + 8);
  *(undefined8 *)(in_ECX + 0x930) = *(undefined8 *)(in_EAX + 0x10);
  *(undefined1 *)(in_ECX + 0x938) = *(undefined1 *)(in_EAX + 0x18);
  return;
}

