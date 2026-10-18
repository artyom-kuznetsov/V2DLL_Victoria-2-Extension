// FUN_00902760 @ 00902760 body=[[00902760, 00902782]]


void FUN_00902760(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CCanBuildInProvinceTrigger::vftable;
  *(undefined1 *)(in_EAX + 7) = 0;
  in_EAX[8] = 0;
  return;
}

