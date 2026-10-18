// FUN_009c2c70 @ 009c2c70 body=[[009c2c70, 009c2cb4]]


void FUN_009c2c70(int param_1)

{
  int in_ECX;
  int *piVar1;
  
  piVar1 = *(int **)(in_ECX + 0x34);
  if (piVar1 != (int *)0x0) {
    while (param_1 != *piVar1) {
      piVar1 = (int *)piVar1[0xd];
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    *(int *)(in_ECX + 0x6c) = param_1;
    if ((code *)piVar1[9] != (code *)0x0) {
      (*(code *)piVar1[9])(piVar1[0xb]);
    }
    if ((char)piVar1[8] == '\0') {
      *(undefined1 *)(in_ECX + 0x55) = 0;
    }
  }
  return;
}

