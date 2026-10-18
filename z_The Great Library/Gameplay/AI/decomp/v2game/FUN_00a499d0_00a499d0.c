// FUN_00a499d0 @ 00a499d0 body=[[00a499d0, 00a49aa4]]


void FUN_00a499d0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  
  uVar1 = DAT_00f092fc;
  in_EAX[1] = 0x18d;
  *(undefined1 *)(in_EAX + 2) = 1;
  in_EAX[7] = 0;
  in_EAX[8] = 0xf;
  *(undefined1 *)(in_EAX + 3) = 0;
  *in_EAX = &PTR_FUN_00e41450;
  in_EAX[0xb] = param_1;
  in_EAX[0x12] = 0xf;
  in_EAX[0x11] = 0;
  *(undefined1 *)(in_EAX + 0xd) = 0;
  in_EAX[0x1a] = 0xf;
  in_EAX[0x19] = 0;
  *(undefined1 *)(in_EAX + 0x15) = 0;
  in_EAX[0x1c] = 0xffffffff;
  in_EAX[0x1e] = 0x18d;
  in_EAX[0x1f] = uVar1;
  in_EAX[0x20] = uVar1;
  in_EAX[0x21] = uVar1;
  in_EAX[0x22] = uVar1;
  *(undefined1 *)(in_EAX + 0x23) = 1;
  in_EAX[0x1d] = CColor::vftable;
  in_EAX[0x24] = 0xffffffff;
  in_EAX[0x25] = CColor::vftable;
  in_EAX[0x26] = 0x18d;
  in_EAX[0x27] = uVar1;
  in_EAX[0x28] = uVar1;
  in_EAX[0x29] = uVar1;
  in_EAX[0x2a] = uVar1;
  *(undefined1 *)(in_EAX + 0x2b) = 1;
  in_EAX[0x2d] = 0;
  in_EAX[0x2c] = 0xffffffff;
  in_EAX[10] = *(undefined4 *)(in_EAX[0xb] + 100);
  return;
}

