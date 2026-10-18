// FUN_0042c2f0 @ 0042c2f0 body=[[0042c2f0, 0042c349]]


void FUN_0042c2f0(void)

{
  uint uVar1;
  uint in_EAX;
  uint *unaff_EDI;
  
  uVar1 = unaff_EDI[1];
  if ((in_EAX < uVar1) && (*unaff_EDI <= in_EAX)) {
    if (uVar1 == unaff_EDI[2]) {
      FUN_0042c4b0();
    }
    if (unaff_EDI[1] != 0) {
      FUN_0094be20();
      unaff_EDI[1] = unaff_EDI[1] + 0x40;
      return;
    }
  }
  else {
    if (uVar1 == unaff_EDI[2]) {
      FUN_0042c4b0();
    }
    if (unaff_EDI[1] != 0) {
      FUN_0094be20();
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x40;
  return;
}

