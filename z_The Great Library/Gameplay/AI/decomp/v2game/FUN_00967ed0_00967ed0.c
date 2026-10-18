// FUN_00967ed0 @ 00967ed0 body=[[00967ed0, 00967f0a]]


void FUN_00967ed0(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = *in_EAX;
  unaff_ESI[2] = in_EAX[1];
  unaff_ESI[8] = 0xf;
  unaff_ESI[7] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  FUN_00408ed0(param_1,0,0xffffffff);
  return;
}

