// FUN_004672d0 @ 004672d0 body=[[004672d0, 00467308]]


void FUN_004672d0(int *param_1)

{
  int iVar1;
  int in_EAX;
  undefined1 *unaff_ESI;
  
  iVar1 = *param_1;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *unaff_ESI = 0;
  FUN_00408ed0(iVar1 + in_EAX * 0x1c,0,0xffffffff);
  return;
}

