// FUN_008ee720 @ 008ee720 body=[[008ee720, 008ee77f]]


undefined4 FUN_008ee720(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) == 0) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  cVar1 = FUN_0042b220();
  if (cVar1 == *(char *)(in_ECX + 0x1c)) {
    return 1;
  }
  return 0;
}

