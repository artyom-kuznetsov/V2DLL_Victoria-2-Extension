// FUN_007383a0 @ 007383a0 body=[[007383a0, 00738434]]


void FUN_007383a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *in_EAX;
  int *unaff_EDI;
  
  puVar1 = (undefined8 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined8 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined8 *)unaff_EDI[2]) {
      FUN_00738540();
    }
    puVar1 = (undefined8 *)(*unaff_EDI + (((int)in_EAX - (int)puVar2) / 0x18) * 0x18);
    puVar2 = (undefined8 *)unaff_EDI[1];
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      unaff_EDI[1] = unaff_EDI[1] + 0x18;
      return;
    }
  }
  else {
    if (puVar1 == (undefined8 *)unaff_EDI[2]) {
      FUN_00738540();
    }
    puVar1 = (undefined8 *)unaff_EDI[1];
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[1] = in_EAX[1];
      puVar1[2] = in_EAX[2];
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x18;
  return;
}

