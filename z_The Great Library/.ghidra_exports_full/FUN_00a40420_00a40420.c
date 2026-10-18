// FUN_00a40420 @ 00a40420 body=[[00a40420, 00a40487]]


void FUN_00a40420(void)

{
  uint uVar1;
  uint in_EAX;
  uint *unaff_ESI;
  
  uVar1 = unaff_ESI[1];
  if ((in_EAX < uVar1) && (*unaff_ESI <= in_EAX)) {
    if (uVar1 == unaff_ESI[2]) {
      FUN_00a40540();
    }
    FUN_00a40a10(unaff_ESI[1]);
    unaff_ESI[1] = unaff_ESI[1] + 0x2c;
    return;
  }
  if (uVar1 == unaff_ESI[2]) {
    FUN_00a40540();
  }
  FUN_00a40a90(unaff_ESI[1]);
  unaff_ESI[1] = unaff_ESI[1] + 0x2c;
  return;
}

