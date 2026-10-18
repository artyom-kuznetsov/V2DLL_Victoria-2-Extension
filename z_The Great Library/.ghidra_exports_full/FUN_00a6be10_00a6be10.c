// FUN_00a6be10 @ 00a6be10 body=[[00a6be10, 00a6be68]]


void FUN_00a6be10(void)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x38))();
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x80))();
  iVar1 = *(int *)(in_ECX + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0x30))();
  }
  *(undefined1 *)(in_ECX + 0x3a) = 1;
  return;
}

