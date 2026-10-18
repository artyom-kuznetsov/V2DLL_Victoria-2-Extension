// FUN_00808bc0 @ 00808bc0 body=[[00808bc0, 00808c1b]]


void FUN_00808bc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  int *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_007b94a0();
    }
    if ((undefined4 *)unaff_EDI[1] != (undefined4 *)0x0) {
      *(undefined4 *)unaff_EDI[1] =
           *(undefined4 *)(*unaff_EDI + ((int)in_EAX - (int)puVar2 >> 2) * 4);
      unaff_EDI[1] = unaff_EDI[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_007b94a0();
    }
    if ((undefined4 *)unaff_EDI[1] != (undefined4 *)0x0) {
      *(undefined4 *)unaff_EDI[1] = *in_EAX;
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 4;
  return;
}

