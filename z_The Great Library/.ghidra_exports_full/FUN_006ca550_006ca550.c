// FUN_006ca550 @ 006ca550 body=[[006ca550, 006ca5b3]]


void FUN_006ca550(void)

{
  bool bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x30) == 0) &&
     ((*(int *)(in_ECX + 0x30) == 0 || (*(int *)(in_ECX + 0x34) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(in_ECX + 0x30))();
  }
  return;
}

