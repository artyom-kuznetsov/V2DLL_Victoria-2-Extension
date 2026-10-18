// FUN_009d62b0 @ 009d62b0 body=[[009d62b0, 009d6311]]


short FUN_009d62b0(short param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = **(uint **)(in_ECX + 0x20);
  if ((uVar1 != 0) && (**(uint **)(in_ECX + 0x10) < uVar1)) {
    if ((param_1 == -1) ||
       ((param_1 == *(short *)(uVar1 - 2) || ((*(byte *)(in_ECX + 0x40) & 2) == 0)))) {
      **(int **)(in_ECX + 0x30) = **(int **)(in_ECX + 0x30) + 1;
      **(int **)(in_ECX + 0x20) = **(int **)(in_ECX + 0x20) + -2;
      if (param_1 != -1) {
        *(short *)**(undefined4 **)(in_ECX + 0x20) = param_1;
        return param_1;
      }
      return 0;
    }
  }
  return -1;
}

