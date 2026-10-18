// FUN_00808c20 @ 00808c20 body=[[00808c20, 00808c88]]


void FUN_00808c20(void)

{
  uint uVar1;
  uint in_EAX;
  uint *unaff_EDI;
  
  uVar1 = unaff_EDI[1];
  if ((in_EAX < uVar1) && (*unaff_EDI <= in_EAX)) {
    if (uVar1 == unaff_EDI[2]) {
      FUN_00808d00();
    }
    if (unaff_EDI[1] != 0) {
      FUN_00804fa0();
      unaff_EDI[1] = unaff_EDI[1] + 0x48;
      return;
    }
  }
  else {
    if (uVar1 == unaff_EDI[2]) {
      FUN_00808d00();
    }
    if (unaff_EDI[1] != 0) {
      FUN_00804fa0();
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x48;
  return;
}

