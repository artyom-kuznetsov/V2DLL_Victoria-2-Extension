// FUN_009e5380 @ 009e5380 body=[[009e5380, 009e53bf]]


void FUN_009e5380(short *param_1)

{
  short sVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x248) != 0) {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x248) + 0x94) + 0x100))(*(undefined4 *)param_1);
  }
  sVar1 = param_1[1];
  *(int *)(in_ECX + 0x4a0) = (int)*param_1;
  *(int *)(in_ECX + 0x4a4) = (int)sVar1;
  return;
}

