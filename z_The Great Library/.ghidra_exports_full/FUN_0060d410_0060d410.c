// FUN_0060d410 @ 0060d410 body=[[0060d410, 0060d442]]


void FUN_0060d410(undefined4 *param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  *in_EAX = *param_1;
  in_EAX[2] = *(undefined4 *)(in_ECX + 4);
  in_EAX[1] = CColor::vftable;
  *(undefined8 *)(in_EAX + 3) = *(undefined8 *)(in_ECX + 8);
  *(undefined8 *)(in_EAX + 5) = *(undefined8 *)(in_ECX + 0x10);
  *(undefined1 *)(in_EAX + 7) = *(undefined1 *)(in_ECX + 0x18);
  return;
}

