// FUN_0058c0a0 @ 0058c0a0 body=[[0058c0a0, 0058c0b0]]


bool FUN_0058c0a0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x40) == 0) {
    return false;
  }
  return 1 < *(int *)(in_ECX + 0x44);
}

