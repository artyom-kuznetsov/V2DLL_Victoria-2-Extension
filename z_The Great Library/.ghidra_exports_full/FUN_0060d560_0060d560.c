// FUN_0060d560 @ 0060d560 body=[[0060d560, 0060d5f8]]


void FUN_0060d560(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  uint *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_0060d6e0();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    puVar2 = (undefined4 *)(((int)in_EAX - (int)puVar2 & 0xffffffe0U) + *unaff_EDI);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[6] = puVar2[6];
      puVar1[7] = puVar2[7];
      unaff_EDI[1] = unaff_EDI[1] + 0x20;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_0060d6e0();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[2] = in_EAX[2];
      puVar1[3] = in_EAX[3];
      puVar1[4] = in_EAX[4];
      puVar1[5] = in_EAX[5];
      puVar1[6] = in_EAX[6];
      puVar1[7] = in_EAX[7];
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x20;
  return;
}

