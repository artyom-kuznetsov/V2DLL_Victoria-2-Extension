// FUN_009e0ab0 @ 009e0ab0 body=[[009e0ab0, 009e0b02]]


void FUN_009e0ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_ESI;
  
  FUN_009d9070(unaff_ESI,param_1);
  unaff_ESI[0x53] = CLostDeviceInterface::vftable;
  *unaff_ESI = &PTR_FUN_00e3bd58;
  unaff_ESI[0x53] = &PTR_FUN_00e3ce44;
  unaff_ESI[0x56] = 0;
  unaff_ESI[0x57] = 0;
  unaff_ESI[0x58] = 0;
  unaff_ESI[0x5a] = param_2;
  unaff_ESI[0x5c] = param_3;
  return;
}

