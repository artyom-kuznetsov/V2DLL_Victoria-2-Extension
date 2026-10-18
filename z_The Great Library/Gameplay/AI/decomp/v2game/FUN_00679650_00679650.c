// FUN_00679650 @ 00679650 body=[[00679650, 0067969e]]


void FUN_00679650(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x174) + 0x9c))
                            (&DAT_00f0bec0 + *(int *)(*(int *)(param_1 + 0x34) + 8) * 7);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 4) != 0)) {
    (**(code **)(*piVar1 + 0xbc))(*(int *)(param_1 + 4),1);
  }
  return;
}

