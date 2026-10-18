// FUN_00a4d600 @ 00a4d600 body=[[00a4d600, 00a4d660]]


void FUN_00a4d600(void)

{
  int in_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  D3DXFrameCalculateBoundingSphere(*(undefined4 *)(in_ECX + 0xa8),&local_14,&local_8);
  *(undefined4 *)(in_ECX + 0x78) = local_14;
  *(undefined4 *)(in_ECX + 0x7c) = local_10;
  *(undefined4 *)(in_ECX + 0x80) = local_c;
  *(undefined4 *)(in_ECX + 0x84) = DAT_00f092fc;
  *(undefined4 *)(in_ECX + 0x88) = local_8;
  return;
}

