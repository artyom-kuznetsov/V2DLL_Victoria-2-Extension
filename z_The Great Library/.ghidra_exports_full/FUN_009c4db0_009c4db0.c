// FUN_009c4db0 @ 009c4db0 body=[[009c4db0, 009c4dca]]


void FUN_009c4db0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x5c) = 0;
  }
  return;
}

