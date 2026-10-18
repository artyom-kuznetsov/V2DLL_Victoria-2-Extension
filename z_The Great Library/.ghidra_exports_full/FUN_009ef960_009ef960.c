// FUN_009ef960 @ 009ef960 body=[[009ef960, 009ef9d4]]


void FUN_009ef960(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x140) = 2;
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x5c))(*(undefined2 *)(in_ECX + 0x140));
  iVar1 = *(int *)(in_ECX + 0xa8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
  }
  (**(code **)(**(int **)(in_ECX + 0xa4) + 8))();
  if (*(int *)(in_ECX + 0x134) != -1) {
    piVar2 = (int *)FUN_009c7290();
    (**(code **)(*piVar2 + 0x24))(*(undefined4 *)(in_ECX + 0x134));
  }
  return;
}

