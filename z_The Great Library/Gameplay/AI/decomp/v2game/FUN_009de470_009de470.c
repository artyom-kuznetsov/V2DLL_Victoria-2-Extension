// FUN_009de470 @ 009de470 body=[[009de470, 009de4a2]]


void FUN_009de470(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xac);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xac) = 0;
    *(undefined1 *)(in_ECX + 0x1be) = 1;
  }
  FUN_009deb10();
  return;
}

