// FUN_009a47e0 @ 009a47e0 body=[[009a47e0, 009a4840]]


void FUN_009a47e0(int *param_1)

{
  char cVar1;
  int in_ECX;
  
  if (param_1[2] == 0) {
    if (*(int *)(in_ECX + 0xa0) != 0) {
      cVar1 = (**(code **)(*(int *)param_1[3] + 0x30))();
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(in_ECX + 0xa0) + 0x54))();
        *(undefined4 *)(in_ECX + 0xa0) = 0;
        return;
      }
    }
  }
  else if ((param_1[2] == 1) && (*param_1 == 9)) {
    cVar1 = FUN_009a4740();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}

