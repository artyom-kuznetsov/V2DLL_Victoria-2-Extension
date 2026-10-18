// FUN_00a40e20 @ 00a40e20 body=[[00a40e20, 00a40ebf]]


void FUN_00a40e20(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = in_EAX[1];
  unaff_ESI[2] = in_EAX[2];
  unaff_ESI[3] = in_EAX[3];
  unaff_ESI[4] = in_EAX[4];
  unaff_ESI[5] = in_EAX[5];
  unaff_ESI[6] = in_EAX[6];
  unaff_ESI[7] = in_EAX[7];
  unaff_ESI[8] = in_EAX[8];
  unaff_ESI[9] = in_EAX[9];
  unaff_ESI[10] = in_EAX[10];
  *(undefined8 *)(unaff_ESI + 0xb) = *(undefined8 *)(in_EAX + 0xb);
  *(undefined8 *)(unaff_ESI + 0xd) = *(undefined8 *)(in_EAX + 0xd);
  *(undefined8 *)(unaff_ESI + 0xf) = *(undefined8 *)(in_EAX + 0xf);
  unaff_ESI[0x11] = in_EAX[0x11];
  unaff_ESI[0x12] = in_EAX[0x12];
  unaff_ESI[0x13] = in_EAX[0x13];
  unaff_ESI[0x14] = in_EAX[0x14];
  unaff_ESI[0x15] = in_EAX[0x15];
  unaff_ESI[0x1b] = 0xf;
  unaff_ESI[0x1a] = 0;
  *(undefined1 *)(unaff_ESI + 0x16) = 0;
  FUN_00408ed0(in_EAX + 0x16,0,0xffffffff);
  return;
}

