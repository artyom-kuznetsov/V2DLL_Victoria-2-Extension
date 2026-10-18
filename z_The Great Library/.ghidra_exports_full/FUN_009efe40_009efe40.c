// FUN_009efe40 @ 009efe40 body=[[009efe40, 009efea2]]


void FUN_009efe40(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0x30))();
    *(undefined4 *)(in_ECX + 0xa8) = 0;
  }
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x38))();
  *(undefined1 *)(in_ECX + 0x3a) = 1;
  return;
}

