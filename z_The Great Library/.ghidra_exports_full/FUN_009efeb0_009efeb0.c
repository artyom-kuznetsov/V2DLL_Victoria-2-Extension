// FUN_009efeb0 @ 009efeb0 body=[[009efeb0, 009efee9]]


void FUN_009efeb0(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x38))();
  iVar1 = *(int *)(in_ECX + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
  }
  return;
}

