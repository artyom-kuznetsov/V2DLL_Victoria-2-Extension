// FUN_006793f0 @ 006793f0 body=[[006793f0, 00679437]]


void FUN_006793f0(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xd7c) == param_1) &&
     (param_1 < *(int *)(in_ECX + 0xd84) - *(int *)(in_ECX + 0xd80) >> 2)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xd80) + param_1 * 4) + 0x1c))();
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0xd80) + param_1 * 4) + 0x58) = 1;
    }
  }
  return;
}

