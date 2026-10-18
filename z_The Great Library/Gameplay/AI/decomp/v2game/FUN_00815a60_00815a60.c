// FUN_00815a60 @ 00815a60 body=[[00815a60, 00815aaf]]


void FUN_00815a60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *in_EAX;
  int *unaff_EDI;
  
  puVar1 = (undefined8 *)unaff_EDI[1];
  if ((in_EAX < puVar1) && (puVar2 = (undefined8 *)*unaff_EDI, puVar2 <= in_EAX)) {
    if (puVar1 == (undefined8 *)unaff_EDI[2]) {
      FUN_00815de0();
    }
    in_EAX = (undefined8 *)(((int)in_EAX - (int)puVar2 & 0xfffffff0U) + *unaff_EDI);
  }
  else if (puVar1 == (undefined8 *)unaff_EDI[2]) {
    FUN_00815de0();
  }
  puVar1 = (undefined8 *)unaff_EDI[1];
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *in_EAX;
    puVar1[1] = in_EAX[1];
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x10;
  return;
}

