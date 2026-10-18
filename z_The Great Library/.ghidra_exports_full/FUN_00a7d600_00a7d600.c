// FUN_00a7d600 @ 00a7d600 body=[[00a7d600, 00a7d6a8]]


void FUN_00a7d600(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *in_EAX;
  int *unaff_EDI;
  
  puVar1 = (undefined8 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined8 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined8 *)unaff_EDI[2]) {
      FUN_00a7d7a0();
    }
    puVar1 = (undefined8 *)(*unaff_EDI + (((int)in_EAX - (int)puVar2) / 0x1c) * 0x1c);
    puVar2 = (undefined8 *)unaff_EDI[1];
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar1 + 3);
      unaff_EDI[1] = unaff_EDI[1] + 0x1c;
      return;
    }
  }
  else {
    if (puVar1 == (undefined8 *)unaff_EDI[2]) {
      FUN_00a7d7a0();
    }
    puVar1 = (undefined8 *)unaff_EDI[1];
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[1] = in_EAX[1];
      puVar1[2] = in_EAX[2];
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(in_EAX + 3);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x1c;
  return;
}

