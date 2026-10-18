// FUN_007ea5c0 @ 007ea5c0 body=[[007ea5c0, 007ea687]]


void FUN_007ea5c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  
  uVar1 = DAT_00f092fc;
  in_EAX[1] = 0x18d;
  in_EAX[6] = 0;
  in_EAX[7] = 0xf;
  *(undefined1 *)(in_EAX + 2) = 0;
  in_EAX[9] = 0;
  in_EAX[0xf] = 0xf;
  in_EAX[0xe] = 0;
  *(undefined1 *)(in_EAX + 10) = 0;
  in_EAX[0x23] = param_1;
  in_EAX[0x24] = 0xffffffff;
  in_EAX[0x25] = 0xffffffff;
  in_EAX[0x12] = 0;
  *(undefined1 *)(in_EAX + 0x13) = 0;
  in_EAX[0x14] = 0;
  *(undefined1 *)(in_EAX + 0x15) = 0;
  *in_EAX = CProjectionType::vftable;
  in_EAX[0x2b] = 0xf;
  in_EAX[0x2a] = 0;
  *(undefined1 *)(in_EAX + 0x26) = 0;
  in_EAX[0x2f] = uVar1;
  in_EAX[0x30] = DAT_00f17a20;
  uVar1 = DAT_00f092b0;
  *(undefined2 *)(in_EAX + 0x2d) = 0;
  in_EAX[0x2e] = 0;
  in_EAX[0x31] = uVar1;
  in_EAX[0x32] = 0;
  in_EAX[0x33] = 0;
  in_EAX[0x34] = 0;
  in_EAX[0x35] = 0;
  return;
}

