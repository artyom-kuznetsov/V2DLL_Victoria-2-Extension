// FUN_006ca6a0 @ 006ca6a0 body=[[006ca6a0, 006ca709]]


void FUN_006ca6a0(undefined4 param_1)

{
  bool bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x40) == 0) &&
     ((*(int *)(in_ECX + 0x40) == 0 || (*(int *)(in_ECX + 0x44) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(in_ECX + 0x40))(param_1);
  }
  return;
}

