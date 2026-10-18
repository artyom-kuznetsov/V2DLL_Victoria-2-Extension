// FUN_00a68280 @ 00a68280 body=[[00a68280, 00a682a5]]


undefined4 FUN_00a68280(int param_1)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0xf0) != '\0') && (*(int *)(in_ECX + 0xec) < param_1)) {
    return 1;
  }
  return 0;
}

