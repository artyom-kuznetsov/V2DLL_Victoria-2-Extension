// FUN_007d8480 @ 007d8480 body=[[007d8480, 007d84fb]]


void FUN_007d8480(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  uint *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_007d86f0();
    }
    puVar1 = (undefined4 *)(*unaff_EDI + (((int)in_EAX - (int)puVar2) / 0xc) * 0xc);
    puVar2 = (undefined4 *)unaff_EDI[1];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
      unaff_EDI[1] = unaff_EDI[1] + 0xc;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_007d86f0();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[1] = in_EAX[1];
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(in_EAX + 2);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0xc;
  return;
}

