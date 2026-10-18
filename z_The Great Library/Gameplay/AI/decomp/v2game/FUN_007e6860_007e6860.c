// FUN_007e6860 @ 007e6860 body=[[007e6860, 007e68c4]]


void FUN_007e6860(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  
  uVar1 = DAT_00f17b58;
  in_EAX[1] = 0x18d;
  in_EAX[6] = 0;
  in_EAX[7] = 0xf;
  *(undefined1 *)(in_EAX + 2) = 0;
  in_EAX[9] = 0;
  in_EAX[0xe] = 0;
  in_EAX[0xf] = 0xf;
  *(undefined1 *)(in_EAX + 10) = 0;
  in_EAX[0x12] = 0;
  *(undefined1 *)(in_EAX + 0x13) = 0;
  in_EAX[0x14] = 0;
  *(undefined1 *)(in_EAX + 0x15) = 0;
  *in_EAX = CFlagType::vftable;
  in_EAX[0x23] = param_1;
  in_EAX[0x28] = uVar1;
  in_EAX[0x29] = DAT_00f092b0;
  return;
}

