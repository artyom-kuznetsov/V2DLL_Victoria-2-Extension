// FUN_007df170 @ 007df170 body=[[007df170, 007df20a]]


void FUN_007df170(void)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  
  uVar1 = DAT_01267a38 - DAT_01267a34 >> 4;
  if (in_EAX < uVar1) {
    if (DAT_01267a34 + in_EAX * 0x10 != DAT_01267a38) {
      uVar2 = FUN_007df690(DAT_01267a38);
      FUN_004651b0(DAT_01267a38);
      DAT_01267a38 = uVar2;
      return;
    }
  }
  else if (uVar1 < in_EAX) {
    FUN_007df2c0();
    FUN_007df630(DAT_01267a38,in_ECX);
    DAT_01267a38 = DAT_01267a38 + (in_EAX - (DAT_01267a38 - DAT_01267a34 >> 4)) * 0x10;
  }
  return;
}

