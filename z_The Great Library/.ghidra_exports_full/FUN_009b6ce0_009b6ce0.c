// FUN_009b6ce0 @ 009b6ce0 body=[[009b6ce0, 009b6d43]]


void FUN_009b6ce0(void)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  
  in_EAX[2] = in_XMM0_Da;
  in_EAX[1] = 0x18d;
  *in_EAX = CColor::vftable;
  in_EAX[3] = in_XMM1_Da;
  in_EAX[4] = in_XMM2_Da;
  in_EAX[5] = in_XMM3_Da;
  if ((((0.999 < in_XMM0_Da) && (0.999 < in_XMM1_Da)) && (0.999 < in_XMM2_Da)) &&
     (0.999 < in_XMM3_Da)) {
    *(undefined1 *)(in_EAX + 6) = 1;
    return;
  }
  *(undefined1 *)(in_EAX + 6) = 0;
  return;
}

