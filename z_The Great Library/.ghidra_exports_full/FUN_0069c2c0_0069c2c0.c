// FUN_0069c2c0 @ 0069c2c0 body=[[0069c2c0, 0069c34c]]


void FUN_0069c2c0(char param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x28);
  if (param_1 == '\0') {
    if (*(char *)(iVar1 + 0x67) != '\0') {
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
      if (*(char *)(in_EAX + 0x38) == '\0') {
        cVar2 = (**(code **)(**(int **)(in_EAX + 0x20) + 0x158))();
        if (cVar2 != '\0') {
          (**(code **)(**(int **)(in_EAX + 0x20) + 0x15c))();
        }
      }
    }
  }
  else if (*(char *)(iVar1 + 0x67) == '\0') {
    cVar2 = (**(code **)(**(int **)(in_EAX + 0x20) + 0x158))();
    *(char *)(in_EAX + 0x38) = cVar2;
    if ((cVar2 == '\0') && ((char)(*(int **)(in_EAX + 0x20))[0x17] == '\0')) {
      (**(code **)(**(int **)(in_EAX + 0x20) + 0x15c))();
    }
    (**(code **)(*(int *)(*(int *)(in_EAX + 0x28) + 0x18) + 0x34))();
    FUN_0069c520();
    return;
  }
  return;
}

