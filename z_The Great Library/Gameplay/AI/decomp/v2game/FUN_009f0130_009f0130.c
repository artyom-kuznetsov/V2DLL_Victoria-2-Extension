// FUN_009f0130 @ 009f0130 body=[[009f0130, 009f0166]]


void FUN_009f0130(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x120) != 0) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 0x120) + 0x158))(), cVar1 == '\0')) {
    return;
  }
  FUN_009ee260(param_1,param_2);
  return;
}

