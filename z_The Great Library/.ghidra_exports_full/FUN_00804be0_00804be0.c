// FUN_00804be0 @ 00804be0 body=[[00804be0, 00804c6c]]


void FUN_00804be0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *in_EAX;
  int *unaff_EDI;
  
  puVar1 = (undefined8 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined8 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined8 *)unaff_EDI[2]) {
      FUN_00804c70();
    }
    puVar1 = (undefined8 *)(*unaff_EDI + (((int)in_EAX - (int)puVar2) / 0x14) * 0x14);
    puVar2 = (undefined8 *)unaff_EDI[1];
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      unaff_EDI[1] = unaff_EDI[1] + 0x14;
      return;
    }
  }
  else {
    if (puVar1 == (undefined8 *)unaff_EDI[2]) {
      FUN_00804c70();
    }
    puVar1 = (undefined8 *)unaff_EDI[1];
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[1] = in_EAX[1];
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(in_EAX + 2);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x14;
  return;
}

