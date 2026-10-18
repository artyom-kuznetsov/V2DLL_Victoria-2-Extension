// FUN_009cc680 @ 009cc680 body=[[009cc680, 009cc6e6]]


void FUN_009cc680(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 600) != '\0') {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))();
    if (iVar1 != 4) {
      iVar1 = (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))();
      if ((iVar1 == 3) && (*(char *)(in_ECX + 0x25b) == '\0')) {
        (**(code **)(**(int **)(in_ECX + 0xac) + 0xb4))(0);
        return;
      }
      (**(code **)(**(int **)(in_ECX + 0xac) + 0xb4))(3);
    }
  }
  return;
}

