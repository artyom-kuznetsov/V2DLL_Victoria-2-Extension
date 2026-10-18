// FUN_006ca400 @ 006ca400 body=[[006ca400, 006ca463]]


void FUN_006ca400(void)

{
  bool bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x18) == 0) &&
     ((*(int *)(in_ECX + 0x18) == 0 || (*(int *)(in_ECX + 0x1c) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(in_ECX + 0x18))();
  }
  return;
}

