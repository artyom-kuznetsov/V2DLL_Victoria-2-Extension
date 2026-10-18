// FUN_005f2aa0 @ 005f2aa0 body=[[005f2aa0, 005f2ade]]


void FUN_005f2aa0(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[6] = 0xf;
  unaff_ESI[5] = 0;
  *(undefined1 *)(unaff_ESI + 1) = 0;
  FUN_00408ed0(in_EAX + 1,0,0xffffffff);
  unaff_ESI[8] = param_1;
  unaff_ESI[9] = 0;
  *(undefined1 *)(unaff_ESI + 10) = 0;
  return;
}

