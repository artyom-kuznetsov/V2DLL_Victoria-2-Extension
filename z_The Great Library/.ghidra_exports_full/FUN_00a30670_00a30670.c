// FUN_00a30670 @ 00a30670 body=[[00a30670, 00a306a8]]


void FUN_00a30670(void)

{
  int in_ECX;
  int *piVar1;
  
  if (*(int *)(in_ECX + 0x94) == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x6bd00) + -4 +
                      *(int *)(in_ECX + 0x94) * 4);
  }
  (**(code **)(*piVar1 + 0x108))(piVar1);
  (**(code **)(*piVar1 + 0x10c))(piVar1);
  return;
}

