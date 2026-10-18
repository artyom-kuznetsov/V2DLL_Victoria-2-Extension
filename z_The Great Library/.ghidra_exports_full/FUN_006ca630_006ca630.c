// FUN_006ca630 @ 006ca630 body=[[006ca630, 006ca699]]


void FUN_006ca630(undefined4 param_1)

{
  bool bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x38) == 0) &&
     ((*(int *)(in_ECX + 0x38) == 0 || (*(int *)(in_ECX + 0x3c) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(in_ECX + 0x38))(param_1);
  }
  return;
}

