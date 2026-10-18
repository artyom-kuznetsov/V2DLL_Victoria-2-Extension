// FUN_004f6570 @ 004f6570 body=[[004f6570, 004f6581]]


void FUN_004f6570(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x12cc);
  *in_EAX = *(undefined4 *)(in_ECX + 0x12c8);
  in_EAX[1] = uVar1;
  return;
}

