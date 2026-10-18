// FUN_007b0bd0 @ 007b0bd0 body=[[007b0bd0, 007b0be5]]


undefined4 FUN_007b0bd0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x24) != 0) && (*(char *)(*(int *)(in_ECX + 0x24) + 0x67) != '\0')) {
    return 1;
  }
  return 0;
}

