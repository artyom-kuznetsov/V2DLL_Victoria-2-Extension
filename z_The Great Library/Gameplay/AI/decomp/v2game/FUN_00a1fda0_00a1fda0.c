// FUN_00a1fda0 @ 00a1fda0 body=[[00a1fda0, 00a1fdd6]]


undefined4 FUN_00a1fda0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x4d) != '\0') {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0xf8) + 0x6c))(in_ECX + 0x94,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

