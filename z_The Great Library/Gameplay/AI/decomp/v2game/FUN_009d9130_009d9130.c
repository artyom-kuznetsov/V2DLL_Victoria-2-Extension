// FUN_009d9130 @ 009d9130 body=[[009d9130, 009d9190]]


void FUN_009d9130(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  FUN_009d9070(unaff_ESI,param_1);
  uVar1 = DAT_00f14418;
  *unaff_ESI = &PTR_FUN_00e3b848;
  unaff_ESI[0x54] = 0;
  unaff_ESI[0x55] = 0;
  unaff_ESI[0x56] = 0;
  unaff_ESI[0x58] = 0;
  unaff_ESI[0x59] = 0;
  unaff_ESI[0x5a] = 0;
  unaff_ESI[0x5c] = param_2;
  unaff_ESI[0x5d] = param_3;
  unaff_ESI[0x5e] = uVar1;
  return;
}

