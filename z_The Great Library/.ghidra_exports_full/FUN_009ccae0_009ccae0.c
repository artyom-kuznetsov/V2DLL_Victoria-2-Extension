// FUN_009ccae0 @ 009ccae0 body=[[009ccae0, 009ccb62]]


void FUN_009ccae0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00408ed0(param_1,0,0xffffffff);
  (**(code **)(**(int **)(in_ECX + 0xac) + 0x78))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x150) + 0x78))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x154) + 0x78))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x78))(param_1);
  if (*(int *)(in_ECX + 0x200) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x200) + 0x78))(param_1);
  }
  if (*(int *)(in_ECX + 0x204) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x204) + 0x78))(param_1);
  }
  return;
}

