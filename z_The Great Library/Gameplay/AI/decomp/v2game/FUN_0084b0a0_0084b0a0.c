// FUN_0084b0a0 @ 0084b0a0 body=[[0084b0a0, 0084b0ec]]


void FUN_0084b0a0(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x144) != in_ECX) {
    return;
  }
  if (*(char *)(param_1 + 0x104) == '\0') {
    if (*(int *)(param_1 + 0x74) == 0) {
      if (*(int *)(param_1 + 0x40) < 1) {
        return;
      }
    }
    else {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x74) + 0x2c))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  if (*(char *)(in_ECX + 0x239) == '\0') {
    *(undefined1 *)(in_ECX + 0x239) = 1;
  }
  return;
}

