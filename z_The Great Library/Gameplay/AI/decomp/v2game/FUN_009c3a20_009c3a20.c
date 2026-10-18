// FUN_009c3a20 @ 009c3a20 body=[[009c3a20, 009c3a59]]


void FUN_009c3a20(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x38))();
  iVar1 = *(int *)(in_ECX + 0xb0);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
  }
  return;
}

