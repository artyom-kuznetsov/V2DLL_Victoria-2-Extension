// FUN_009efbb0 @ 009efbb0 body=[[009efbb0, 009efc04]]


void FUN_009efbb0(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x140) = 4;
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x5c))(*(undefined2 *)(in_ECX + 0x140));
  (**(code **)(**(int **)(in_ECX + 0xa4) + 8))();
  iVar1 = *(int *)(in_ECX + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
  }
  return;
}

