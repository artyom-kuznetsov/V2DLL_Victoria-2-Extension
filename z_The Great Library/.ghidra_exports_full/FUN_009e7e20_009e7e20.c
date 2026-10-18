// FUN_009e7e20 @ 009e7e20 body=[[009e7e20, 009e7e53]]


void FUN_009e7e20(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1bc);
  FUN_009bf670(piVar1);
  if ((char)piVar1[0x60] != '\0') {
    (**(code **)(*piVar1 + 0x180))();
    *(undefined1 *)(piVar1 + 0x60) = 0;
  }
  return;
}

