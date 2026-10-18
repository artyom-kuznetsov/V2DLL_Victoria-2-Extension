// FUN_009b7500 @ 009b7500 body=[[009b7500, 009b760c]]


void FUN_009b7500(void)

{
  int iVar1;
  int unaff_EDI;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  
  iVar1 = FUN_009b7610(0x3ff0000000000000);
  FUN_009b73a0((double)(iVar1 % 0x168) / 360.0);
  if (0.9900000095367432 < local_a10) {
    local_a10 = 0.9900000095367432;
  }
  if (0.9900000095367432 < local_a20) {
    local_a20 = 0.9900000095367432;
  }
  if (0.9900000095367432 < local_a18) {
    local_a18 = 0.9900000095367432;
  }
  *(float *)(unaff_EDI + 8) = (float)local_a10;
  *(float *)(unaff_EDI + 0xc) = (float)local_a20;
  *(float *)(unaff_EDI + 0x10) = (float)local_a18;
  if ((((0.999 < (float)local_a10) && (0.999 < (float)local_a20)) && (0.999 < (float)local_a18)) &&
     (0.999 < *(float *)(unaff_EDI + 0x14))) {
    *(undefined1 *)(unaff_EDI + 0x18) = 1;
    return;
  }
  *(undefined1 *)(unaff_EDI + 0x18) = 0;
  return;
}

