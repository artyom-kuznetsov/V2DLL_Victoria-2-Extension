// FUN_005b9d90 @ 005b9d90 body=[[005b9d90, 005b9dc7]]


undefined4 FUN_005b9d90(int param_1,int param_2)

{
  if (((*(int *)(param_1 + 300) == *(int *)(param_2 + 300)) &&
      (*(char *)(*(int *)(param_2 + 0x5c) + 0x2a) != '\0')) &&
     (*(char *)(*(int *)(param_1 + 0x5c) + 0x2a) != '\0')) {
    return 1;
  }
  return 0;
}

