// FUN_0094be90 @ 0094be90 body=[[0094be90, 0094beac]]


undefined4 FUN_0094be90(void)

{
  char cVar1;
  int in_EAX;
  
  if (*(int *)(in_EAX + 0xc) != 0) {
    cVar1 = (**(code **)(**(int **)(in_EAX + 0xc) + 0x1c))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

