// FUN_007b37b0 @ 007b37b0 body=[[007b37b0, 007b37ef]]


void FUN_007b37b0(void)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x74) + 4) + 0xc))();
  if (cVar1 == '\0') {
    if (*(int *)(in_ECX + 0x134) == *(int *)(*(int *)(in_ECX + 0x84) + 4)) {
      FUN_007b3680(1);
      return;
    }
    if (*(int *)(in_ECX + 0x134) == *(int *)(*(int *)(in_ECX + 0x84) + 8)) {
      FUN_007b3680(2);
    }
  }
  return;
}

