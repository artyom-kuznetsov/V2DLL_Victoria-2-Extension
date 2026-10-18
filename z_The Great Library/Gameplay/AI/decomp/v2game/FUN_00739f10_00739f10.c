// FUN_00739f10 @ 00739f10 body=[[00739f10, 00739fc9]]


void FUN_00739f10(void)

{
  int in_EAX;
  undefined8 *puVar1;
  undefined8 *unaff_EDI;
  
  if (1 < (in_EAX - (int)unaff_EDI) / 0x18) {
    puVar1 = (undefined8 *)(in_EAX + -0x18);
    do {
      *puVar1 = *unaff_EDI;
      puVar1[1] = unaff_EDI[1];
      puVar1[2] = unaff_EDI[2];
      FUN_0073a6f0();
      puVar1 = puVar1 + -3;
    } while (1 < ((int)puVar1 + (0x18 - (int)unaff_EDI)) / 0x18);
  }
  return;
}

