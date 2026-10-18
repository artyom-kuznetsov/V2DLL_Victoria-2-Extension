// FUN_004c98f0 @ 004c98f0 body=[[004c98f0, 004c99b8]]


void FUN_004c98f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  uint *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_004c9ad0();
    }
    puVar1 = (undefined4 *)(*unaff_EDI + (((int)in_EAX - (int)puVar2) / 0x24) * 0x24);
    puVar2 = (undefined4 *)unaff_EDI[1];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      puVar2[6] = puVar1[6];
      puVar2[7] = puVar1[7];
      puVar2[8] = puVar1[8];
      unaff_EDI[1] = unaff_EDI[1] + 0x24;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_004c9ad0();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[1] = in_EAX[1];
      puVar1[2] = in_EAX[2];
      puVar1[3] = in_EAX[3];
      puVar1[4] = in_EAX[4];
      puVar1[5] = in_EAX[5];
      puVar1[6] = in_EAX[6];
      puVar1[7] = in_EAX[7];
      puVar1[8] = in_EAX[8];
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x24;
  return;
}

