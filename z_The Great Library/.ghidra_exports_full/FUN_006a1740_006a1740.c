// FUN_006a1740 @ 006a1740 body=[[006a1740, 006a17de]]


void FUN_006a1740(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  uint *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_006a1980();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    puVar2 = (undefined4 *)(((int)in_EAX - (int)puVar2 & 0xffffffe0U) + *unaff_EDI);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[2] = puVar2[2];
      puVar1[1] = CColor::vftable;
      *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(puVar2 + 3);
      *(undefined8 *)(puVar1 + 5) = *(undefined8 *)(puVar2 + 5);
      *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(puVar2 + 7);
      unaff_EDI[1] = unaff_EDI[1] + 0x20;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      FUN_006a1980();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[2] = in_EAX[2];
      puVar1[1] = CColor::vftable;
      *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(in_EAX + 3);
      *(undefined8 *)(puVar1 + 5) = *(undefined8 *)(in_EAX + 5);
      *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(in_EAX + 7);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x20;
  return;
}

