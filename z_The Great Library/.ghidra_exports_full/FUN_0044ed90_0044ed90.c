// FUN_0044ed90 @ 0044ed90 body=[[0044ed90, 0044edf9]]


void FUN_0044ed90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  uint *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_00423780();
    }
    puVar1 = (undefined4 *)(*unaff_EDI + ((int)in_EAX - (int)puVar2 >> 3) * 8);
    puVar2 = (undefined4 *)unaff_EDI[1];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      unaff_EDI[1] = unaff_EDI[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_00423780();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[1] = in_EAX[1];
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 8;
  return;
}

