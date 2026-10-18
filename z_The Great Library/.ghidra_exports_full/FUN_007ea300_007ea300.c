// FUN_007ea300 @ 007ea300 body=[[007ea300, 007ea37b]]


void FUN_007ea300(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *in_EAX;
  int *unaff_EDI;
  
  puVar1 = (undefined8 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined8 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined8 *)unaff_EDI[2]) {
      FUN_007ea380(1);
    }
    puVar1 = (undefined8 *)(*unaff_EDI + (((int)in_EAX - (int)puVar2) / 0xc) * 0xc);
    puVar2 = (undefined8 *)unaff_EDI[1];
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      unaff_EDI[1] = unaff_EDI[1] + 0xc;
      return;
    }
  }
  else {
    if (puVar1 == (undefined8 *)unaff_EDI[2]) {
      FUN_007ea380(1);
    }
    puVar1 = (undefined8 *)unaff_EDI[1];
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *in_EAX;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(in_EAX + 1);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0xc;
  return;
}

