// FUN_00a70a30 @ 00a70a30 body=[[00a70a30, 00a70a7b]]


void FUN_00a70a30(void)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x38))();
  iVar1 = *(int *)(in_ECX + 0xac);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
  }
  *(undefined1 *)(in_ECX + 0x3a) = 1;
  return;
}

