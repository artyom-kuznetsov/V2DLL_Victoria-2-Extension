// FUN_0048b5d0 @ 0048b5d0 body=[[0048b5d0, 0048b619]]


void FUN_0048b5d0(double param_1)

{
  undefined8 *unaff_ESI;
  undefined8 uVar1;
  
  if (param_1 < 0.0) {
    uVar1 = 0xbfe0000000000000;
  }
  else {
    uVar1 = 0x3fe0000000000000;
  }
  uVar1 = FUN_00b31c36(uVar1);
  *unaff_ESI = uVar1;
  return;
}

