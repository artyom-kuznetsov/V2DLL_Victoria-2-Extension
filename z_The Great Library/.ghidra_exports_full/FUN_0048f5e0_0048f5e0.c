// FUN_0048f5e0 @ 0048f5e0 body=[[0048f5e0, 0048f617]]


float10 FUN_0048f5e0(int param_1)

{
  char cVar1;
  int in_ECX;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x84))(**(undefined4 **)(param_1 + 4));
    param_1 = 1;
    if (cVar1 != '\0') goto LAB_0048f611;
  }
  param_1 = 0;
LAB_0048f611:
  return (float10)param_1;
}

