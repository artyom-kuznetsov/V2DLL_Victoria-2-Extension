// FUN_00467310 @ 00467310 body=[[00467310, 0046734a]]


int FUN_00467310(void)

{
  uint uVar1;
  uint *unaff_ESI;
  
  uVar1 = FUN_0045c080(unaff_ESI[1]);
  if ((*unaff_ESI <= uVar1) && (uVar1 < unaff_ESI[1])) {
    return (int)(uVar1 - *unaff_ESI) / 0x1c;
  }
  return 0x15;
}

