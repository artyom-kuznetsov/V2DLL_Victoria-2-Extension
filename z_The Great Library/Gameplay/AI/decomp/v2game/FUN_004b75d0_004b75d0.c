// FUN_004b75d0 @ 004b75d0 body=[[004b75d0, 004b75f9]]


undefined4 FUN_004b75d0(int param_1)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 0x10c) != 0) {
    iVar1 = (**(code **)(**(int **)(in_EAX + 0x10c) + 0x24))();
    if (iVar1 == param_1) {
      return 1;
    }
  }
  return 0;
}

