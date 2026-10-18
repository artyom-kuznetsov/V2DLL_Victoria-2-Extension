// FUN_00a3b490 @ 00a3b490 body=[[00a3b490, 00a3b4ee]]


void FUN_00a3b490(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  
  uVar1 = DAT_00f092fc;
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
  *in_EAX = &PTR_FUN_00e407f8;
  in_EAX[0x23] = param_1;
  in_EAX[0x24] = 0xffffffff;
  in_EAX[0x25] = uVar1;
  return;
}

