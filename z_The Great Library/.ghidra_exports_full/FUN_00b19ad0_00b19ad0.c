// FUN_00b19ad0 @ 00b19ad0 body=[[00b19ad0, 00b19b1d]]


void FUN_00b19ad0(void)

{
  byte bVar1;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 4) != 0) && (bVar1 = *(byte *)(in_ECX + 0x15), (bVar1 & 4) != 0)) &&
     ((bVar1 & 8) == 0)) {
    if ((bVar1 & 2) != 0) {
      (**(code **)(in_ECX + 8))();
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      return;
    }
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}

