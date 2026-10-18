// FUN_0086c200 @ 0086c200 body=[[0086c200, 0086c24e]]


int FUN_0086c200(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = **(uint **)(in_ECX + 0x20);
  if ((uVar1 != 0) && (**(uint **)(in_ECX + 0x10) < uVar1)) {
    if ((param_1 == -1) ||
       (((char)param_1 == *(char *)(uVar1 - 1) || ((*(byte *)(in_ECX + 0x40) & 2) == 0)))) {
      **(int **)(in_ECX + 0x30) = **(int **)(in_ECX + 0x30) + 1;
      **(int **)(in_ECX + 0x20) = **(int **)(in_ECX + 0x20) + -1;
      if (param_1 != -1) {
        *(char *)**(undefined4 **)(in_ECX + 0x20) = (char)param_1;
        return param_1;
      }
      return 0;
    }
  }
  return -1;
}

