// FUN_004c0270 @ 004c0270 body=[[004c0270, 004c0292]]


void FUN_004c0270(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = in_EAX[1];
  unaff_ESI[2] = in_EAX[2];
  FUN_00408ed0(in_EAX + 3,0,0xffffffff);
  return;
}

