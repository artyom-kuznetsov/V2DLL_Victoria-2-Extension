// FUN_0084f8d0 @ 0084f8d0 body=[[0084f8d0, 0084f918]]


void FUN_0084f8d0(float param_1)

{
  int in_ECX;
  
  *(float *)(in_ECX + 0x1d8) = param_1 + *(float *)(in_ECX + 0x1d8);
  if (((*(char *)(in_ECX + 0x3c) != '\0') && (*(int *)(in_ECX + 0xf4) != 0)) &&
     (*(char *)(in_ECX + 0x237) == '\0')) {
    *(undefined1 *)(in_ECX + 0x237) = 1;
  }
  return;
}

