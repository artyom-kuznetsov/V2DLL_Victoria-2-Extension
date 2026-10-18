// FUN_007c7510 @ 007c7510 body=[[007c7510, 007c7578]]


void FUN_007c7510(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 0x1d4);
  iVar1 = 0;
  do {
    if (*piVar2 == param_1) {
      if (iVar1 != 0x11) {
        if (iVar1 == *(int *)(in_ECX + 0x1e4)) {
          *(bool *)(in_ECX + 0x1e8) = *(char *)(in_ECX + 0x1e8) == '\0';
          *(undefined1 *)(in_ECX + 0x16c) = 1;
          FUN_007c6d40(in_ECX);
          return;
        }
        *(int *)(in_ECX + 0x1e4) = iVar1;
        *(undefined1 *)(in_ECX + 0x16c) = 1;
        FUN_007c6d40(in_ECX);
      }
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x11);
  return;
}

