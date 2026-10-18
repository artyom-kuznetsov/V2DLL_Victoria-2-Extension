// FUN_0090e190 @ 0090e190 body=[[0090e190, 0090e1dd]]


void FUN_0090e190(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  *in_EAX = CDiplomaticAction::vftable;
  in_EAX[1] = 0x18d;
  in_EAX[2] = *(undefined4 *)(in_ECX + 8);
  in_EAX[3] = *(undefined4 *)(in_ECX + 0xc);
  in_EAX[4] = *(undefined4 *)(in_ECX + 0x10);
  in_EAX[5] = *(undefined4 *)(in_ECX + 0x14);
  in_EAX[6] = *(undefined4 *)(in_ECX + 0x18);
  in_EAX[7] = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined1 *)(in_EAX + 8) = 0;
  in_EAX[9] = *(undefined4 *)(in_ECX + 0x24);
  *in_EAX = CWarSubsidiesAction::vftable;
  in_EAX[10] = *(undefined4 *)(in_ECX + 0x28);
  in_EAX[0xb] = *(undefined4 *)(in_ECX + 0x2c);
  return;
}

