// FUN_006ca470 @ 006ca470 body=[[006ca470, 006ca4d3]]


void FUN_006ca470(void)

{
  bool bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x20) == 0) &&
     ((*(int *)(in_ECX + 0x20) == 0 || (*(int *)(in_ECX + 0x24) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(in_ECX + 0x20))();
  }
  return;
}

