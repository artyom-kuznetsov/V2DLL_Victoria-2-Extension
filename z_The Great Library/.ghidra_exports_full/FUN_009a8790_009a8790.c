// FUN_009a8790 @ 009a8790 body=[[009a8790, 009a87d5]]


void FUN_009a8790(void)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x70) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0x70) + 0x38))();
  iVar1 = *(int *)(in_ECX + 0x8c);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
  }
  *(undefined1 *)(in_ECX + 0x3a) = 1;
  return;
}

