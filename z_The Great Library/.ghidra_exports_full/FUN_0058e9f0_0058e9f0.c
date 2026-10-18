// FUN_0058e9f0 @ 0058e9f0 body=[[0058e9f0, 0058ea3c]]


bool FUN_0058e9f0(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x44) != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x20))();
    if (cVar1 != '\0') {
      cVar1 = FUN_005144c0();
      return cVar1 != '\0';
    }
  }
  return false;
}

