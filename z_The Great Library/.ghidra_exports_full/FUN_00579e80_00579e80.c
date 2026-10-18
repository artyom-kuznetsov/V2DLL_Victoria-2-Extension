// FUN_00579e80 @ 00579e80 body=[[00579e80, 00579edf]]


void FUN_00579e80(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CTechnologyProject::vftable;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = param_1;
  unaff_ESI[6] = param_2;
  *(undefined1 *)(unaff_ESI + 7) = 1;
  unaff_ESI[8] = 43800000;
  unaff_ESI[8] = DAT_01259abc;
  unaff_ESI[9] = in_EAX;
  iVar1 = FUN_0057a4c0(unaff_ESI[5],unaff_ESI[6]);
  unaff_ESI[3] = iVar1 * 1000;
  return;
}

