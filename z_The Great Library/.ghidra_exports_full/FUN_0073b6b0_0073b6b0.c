// FUN_0073b6b0 @ 0073b6b0 body=[[0073b6b0, 0073b6e0]]


undefined4 FUN_0073b6b0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    cVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x94))(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

