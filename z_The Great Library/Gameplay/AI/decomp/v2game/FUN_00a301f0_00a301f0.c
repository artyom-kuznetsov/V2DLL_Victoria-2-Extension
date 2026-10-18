// FUN_00a301f0 @ 00a301f0 body=[[00a301f0, 00a30222]]


void FUN_00a301f0(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_009bcda0();
  piVar1 = *(int **)(in_ECX + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x90) = 0;
  }
  return;
}

