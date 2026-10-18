// FUN_00825e50 @ 00825e50 body=[[00825e50, 00825ebe]]


void FUN_00825e50(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_FUN_00e3a544;
  in_EAX[1] = 0x18d;
  in_EAX[2] = DAT_01268fec;
  in_EAX[3] = DAT_01268ff0;
  *(undefined1 *)(in_EAX + 4) = 0;
  in_EAX[10] = 0xf;
  in_EAX[9] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[0xd] = param_1;
  in_EAX[0xc] = 0;
  *in_EAX = CAIAgent::vftable;
  in_EAX[0xe] = param_2;
  *(undefined2 *)(in_EAX + 0xf) = 0;
  *(undefined1 *)((int)in_EAX + 0x3e) = 0;
  in_EAX[0x10] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0;
  *(undefined1 *)(in_EAX + 0x14) = 0;
  in_EAX[0x15] = 0;
  in_EAX[0x16] = 0;
  in_EAX[0x17] = 0;
  *(undefined1 *)(in_EAX + 0x18) = 0;
  return;
}

