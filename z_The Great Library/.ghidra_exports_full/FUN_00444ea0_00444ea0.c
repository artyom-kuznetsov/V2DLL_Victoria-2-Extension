// FUN_00444ea0 @ 00444ea0 body=[[00444ea0, 00444f05]]


void FUN_00444ea0(void)

{
  int *unaff_ESI;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (unaff_ESI[1] - *unaff_ESI) / 0x1c) {
    do {
      FUN_004449f0((char)unaff_ESI[7],0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (unaff_ESI[1] - *unaff_ESI) / 0x1c);
  }
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[4] = DAT_0125a35c;
  return;
}

