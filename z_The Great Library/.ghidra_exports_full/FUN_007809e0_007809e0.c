// FUN_007809e0 @ 007809e0 body=[[007809e0, 00780a83]]


void FUN_007809e0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xa20) != '\0') {
    if (*(int *)(in_ECX + 0xaa8) == 2) {
      *(bool *)(in_ECX + 0xaac) = *(char *)(in_ECX + 0xaac) == '\0';
    }
    else {
      *(undefined1 *)(in_ECX + 0xaac) = 0;
    }
    *(undefined4 *)(in_ECX + 0xaa8) = 2;
    FUN_00780a90(in_ECX,*(undefined4 *)(in_ECX + 0xc),
                 *(undefined4 *)(*(int *)(in_ECX + 0x14) + 0x10),0,*(int *)(in_ECX + 0xab0) == 1);
    FUN_00780a90(in_ECX,*(undefined4 *)(in_ECX + 0x10),
                 *(undefined4 *)(*(int *)(in_ECX + 0x14) + 0x14),1,*(int *)(in_ECX + 0xab0) == 2);
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x80))();
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x80))();
  }
  return;
}

