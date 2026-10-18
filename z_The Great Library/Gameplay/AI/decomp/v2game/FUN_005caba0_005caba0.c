// FUN_005caba0 @ 005caba0 body=[[005caba0, 005cabd4]]


undefined4 * FUN_005caba0(void)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  int *unaff_ESI;
  
  if (in_EAX != 0) {
    return (undefined4 *)(in_EAX + 0x17c);
  }
  cVar1 = (**(code **)(*unaff_ESI + 0x3c))();
  if (cVar1 != '\0') {
    return &DAT_00f0b848;
  }
  cVar1 = (**(code **)(*unaff_ESI + 0x40))();
  puVar2 = &DAT_00f0b82c;
  if (cVar1 == '\0') {
    puVar2 = &DAT_00f0b810;
  }
  return puVar2;
}

