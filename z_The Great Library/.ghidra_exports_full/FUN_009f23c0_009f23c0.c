// FUN_009f23c0 @ 009f23c0 body=[[009f23c0, 009f23f3]]


void FUN_009f23c0(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = &PTR_FUN_00e3cffc;
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  FUN_00408ed0(in_EAX,0,0xffffffff);
  *unaff_ESI = &PTR_FUN_00e3d020;
  return;
}

