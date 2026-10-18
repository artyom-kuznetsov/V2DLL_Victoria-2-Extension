// FUN_006ca320 @ 006ca320 body=[[006ca320, 006ca383]]


void FUN_006ca320(void)

{
  bool bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) == 0) && ((*(int *)(in_ECX + 8) == 0 || (*(int *)(in_ECX + 0xc) == 0))))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(in_ECX + 8))();
  }
  return;
}

