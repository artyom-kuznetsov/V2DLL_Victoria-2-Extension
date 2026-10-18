// FUN_006ca4e0 @ 006ca4e0 body=[[006ca4e0, 006ca543]]


void FUN_006ca4e0(void)

{
  bool bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x28) == 0) &&
     ((*(int *)(in_ECX + 0x28) == 0 || (*(int *)(in_ECX + 0x2c) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(in_ECX + 0x28))();
  }
  return;
}

