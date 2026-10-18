// FUN_0084f850 @ 0084f850 body=[[0084f850, 0084f898]]


void FUN_0084f850(float param_1)

{
  int in_ECX;
  
  *(float *)(in_ECX + 0x1d4) = param_1 + *(float *)(in_ECX + 0x1d4);
  if (((*(char *)(in_ECX + 0x3c) != '\0') && (*(int *)(in_ECX + 0xe4) != 0)) &&
     (*(char *)(in_ECX + 0x236) == '\0')) {
    *(undefined1 *)(in_ECX + 0x236) = 1;
  }
  return;
}

