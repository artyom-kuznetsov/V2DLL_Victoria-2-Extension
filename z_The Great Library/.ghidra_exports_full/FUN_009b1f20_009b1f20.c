// FUN_009b1f20 @ 009b1f20 body=[[009b1f20, 009b1f38]]


void FUN_009b1f20(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 4) + 0x18))(param_1);
  }
  return;
}

