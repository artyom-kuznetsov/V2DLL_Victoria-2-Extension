// FUN_00817110 @ 00817110 body=[[00817110, 00817198]]


void FUN_00817110(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  
  FUN_00a2ef00(unaff_ESI,*in_EAX);
  uVar1 = DAT_012587e4;
  *unaff_ESI = CShieldObject::vftable;
  unaff_ESI[0x61] = in_ECX;
  unaff_ESI[0x62] = param_1;
  FUN_0055c6c0(uVar1,unaff_ESI + 99,&DAT_00e0cb1c);
  unaff_ESI[0x68] = 0;
  unaff_ESI[0x69] = 0;
  unaff_ESI[0x6a] = 0;
  unaff_ESI[0x65] = *(undefined4 *)(unaff_ESI[0x61] + 0x1e4);
  unaff_ESI[0x66] = *(undefined4 *)(unaff_ESI[0x61] + 0x1e8);
  unaff_ESI[0x68] = **(undefined4 **)(unaff_ESI[0x62] + 0x6bd6c);
  return;
}

