// FUN_0080e430 @ 0080e430 body=[[0080e430, 0080e474]]


void FUN_0080e430(undefined4 param_1)

{
  undefined4 *in_EAX;
  
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
  *in_EAX = CProvinceType::vftable;
  in_EAX[0x23] = param_1;
  return;
}

