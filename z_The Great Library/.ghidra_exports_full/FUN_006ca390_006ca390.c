// FUN_006ca390 @ 006ca390 body=[[006ca390, 006ca3f3]]


void FUN_006ca390(void)

{
  bool bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) == 0) &&
     ((*(int *)(in_ECX + 0x10) == 0 || (*(int *)(in_ECX + 0x14) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(in_ECX + 0x10))();
  }
  return;
}

