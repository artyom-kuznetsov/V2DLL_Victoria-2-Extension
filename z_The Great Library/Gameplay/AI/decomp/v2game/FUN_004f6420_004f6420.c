// FUN_004f6420 @ 004f6420 body=[[004f6420, 004f6497]]


void FUN_004f6420(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  for (piVar3 = *(int **)(in_ECX + 0xa18); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
    if (*piVar3 == param_1) {
      return;
    }
  }
  iVar1 = *(int *)(in_ECX + 0xa1c);
  piVar3 = (int *)FUN_00aae9af(0x10);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = param_1;
    piVar3[1] = iVar1;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0xa20);
  *(int **)(in_ECX + 0xa1c) = piVar3;
  *(int *)(in_ECX + 0xa20) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int **)(in_ECX + 0xa18) = piVar3;
    return;
  }
  *(int **)(iVar1 + 8) = piVar3;
  return;
}

