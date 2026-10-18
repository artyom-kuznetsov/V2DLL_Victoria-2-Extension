// FUN_00a7bfa0 @ 00a7bfa0 body=[[00a7bfa0, 00a7c03f]]


void FUN_00a7bfa0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_EAX;
  undefined4 *unaff_ESI;
  
  FUN_009d9070(unaff_ESI,param_1);
  uVar1 = DAT_00f092fc;
  unaff_ESI[0x53] = in_EAX;
  *unaff_ESI = &PTR_FUN_00e43dc0;
  unaff_ESI[0x57] = uVar1;
  *(undefined2 *)(unaff_ESI + 0x54) = 0;
  *(short *)((int)unaff_ESI + 0x152) = (short)*(undefined4 *)(in_EAX + 0xa8);
  *(short *)(unaff_ESI + 0x55) = (short)*(undefined4 *)(in_EAX + 0xac);
  *(short *)((int)unaff_ESI + 0x156) = (short)*(undefined4 *)(in_EAX + 0xb0);
  *(short *)((int)unaff_ESI + 0x156) = (short)*(undefined4 *)(in_EAX + 0xb4);
  return;
}

