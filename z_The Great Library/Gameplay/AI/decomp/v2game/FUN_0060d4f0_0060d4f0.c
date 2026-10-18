// FUN_0060d4f0 @ 0060d4f0 body=[[0060d4f0, 0060d558]]


void FUN_0060d4f0(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  uint *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_0060d680();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    puVar2 = (undefined4 *)(((int)in_EAX - (int)puVar2 & 0xfffffff0U) + *unaff_EDI);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      unaff_EDI[1] = unaff_EDI[1] + 0x10;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_0060d680();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[2] = in_EAX[2];
      puVar1[3] = in_EAX[3];
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x10;
  return;
}

