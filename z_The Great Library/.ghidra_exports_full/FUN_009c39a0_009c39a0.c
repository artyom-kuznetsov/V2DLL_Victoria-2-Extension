// FUN_009c39a0 @ 009c39a0 body=[[009c39a0, 009c39f8]]


void FUN_009c39a0(void)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x38))();
  iVar1 = *(int *)(in_ECX + 0xb0);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
    (**(code **)(**(int **)(in_ECX + 0xb0) + 0x30))();
  }
  *(undefined1 *)(in_ECX + 0x3a) = 1;
  return;
}

