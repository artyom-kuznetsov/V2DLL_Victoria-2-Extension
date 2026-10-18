// FUN_008867f0 @ 008867f0 body=[[008867f0, 00886868]]


undefined4 FUN_008867f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = *(int *)(DAT_0125870c + 0x2238);
  piVar2 = *(int **)(iVar1 + (*(int *)(in_ECX + 0x20) / 1000) * 4);
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    if (*(char *)(in_ECX + 0x1d) == '\0') {
      if (*(char *)(in_ECX + 0x28) != '\0') {
        piVar2 = *(int **)(iVar1 + *(int *)(param_2 + 0x10) * 4);
      }
    }
    else {
      piVar2 = *(int **)(iVar1 + *(int *)(*(int *)(param_2 + 0x24) + 0x34) * 4);
    }
  }
  else {
    piVar2 = *(int **)(iVar1 + *(int *)(*(int *)(param_2 + 0x24) + 0x10) * 4);
  }
  (**(code **)(*piVar2 + 0x1c))(param_1);
  return param_1;
}

