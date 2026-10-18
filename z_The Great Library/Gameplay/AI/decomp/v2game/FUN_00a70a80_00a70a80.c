// FUN_00a70a80 @ 00a70a80 body=[[00a70a80, 00a70ab9]]


void FUN_00a70a80(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x38))();
  iVar1 = *(int *)(in_ECX + 0xac);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
  }
  return;
}

