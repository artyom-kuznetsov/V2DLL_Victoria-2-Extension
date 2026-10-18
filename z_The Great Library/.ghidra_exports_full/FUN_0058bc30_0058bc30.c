// FUN_0058bc30 @ 0058bc30 body=[[0058bc30, 0058bc40]]


bool FUN_0058bc30(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x40) == 0) {
    return false;
  }
  return 0 < *(int *)(in_ECX + 0x44);
}

