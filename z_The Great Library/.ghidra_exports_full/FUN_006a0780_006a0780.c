// FUN_006a0780 @ 006a0780 body=[[006a0780, 006a07e3]]


void FUN_006a0780(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x24) != '\0') {
    if (*(char *)(*(int *)(in_ECX + 0x28) + 0x67) != '\0') {
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x18) + 0x38))();
      if (*(char *)(in_ECX + 0x38) == '\0') {
        cVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x158))();
        if (cVar1 != '\0') {
          (**(code **)(**(int **)(in_ECX + 0x20) + 0x15c))();
        }
      }
    }
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb0))(*(undefined4 *)(param_1 + 0x58));
  }
  return;
}

