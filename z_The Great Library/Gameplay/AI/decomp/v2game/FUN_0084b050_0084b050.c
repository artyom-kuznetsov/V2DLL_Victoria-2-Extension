// FUN_0084b050 @ 0084b050 body=[[0084b050, 0084b09c]]


void FUN_0084b050(int param_1)

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
  if (*(char *)(in_ECX + 0x238) == '\0') {
    *(undefined1 *)(in_ECX + 0x238) = 1;
  }
  return;
}

