// FUN_005f74b0 @ 005f74b0 body=[[005f74b0, 005f7502]]


void FUN_005f74b0(char param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    for (piVar1 = *(int **)(*(int *)(in_ECX + 0xc) + 0xec);
        (piVar1 != *(int **)(*(int *)(in_ECX + 0xc) + 0xf0) && (*piVar1 != *(int *)(in_ECX + 0x10)))
        ; piVar1 = piVar1 + 1) {
    }
    FUN_0068f020();
  }
  return;
}

