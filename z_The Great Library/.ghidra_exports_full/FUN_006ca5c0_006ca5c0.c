// FUN_006ca5c0 @ 006ca5c0 body=[[006ca5c0, 006ca629]]


void FUN_006ca5c0(undefined4 param_1)

{
  bool bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x48) == 0) &&
     ((*(int *)(in_ECX + 0x48) == 0 || (*(int *)(in_ECX + 0x4c) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(in_ECX + 0x48))(param_1);
  }
  return;
}

