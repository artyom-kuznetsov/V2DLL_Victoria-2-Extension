// FUN_009b1170 @ 009b1170 body=[[009b1170, 009b118d]]


undefined1 FUN_009b1170(void)

{
  int *piVar1;
  undefined1 uVar2;
  int in_ECX;
  int in_EDX;
  
  uVar2 = 0;
  for (piVar1 = *(int **)(in_ECX + 0xe8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == in_EDX) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

