// FUN_009e7d90 @ 009e7d90 body=[[009e7d90, 009e7dda]]


void FUN_009e7d90(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x1bc);
  uVar2 = (**(code **)(*piVar1 + 0x3c))();
  if ((char)uVar2 != '\0') {
    uVar2 = (**(code **)(*piVar1 + 0x13c))();
    if ((char)uVar2 != '\0') {
      FUN_00ace390(1);
      return;
    }
  }
  FUN_00ace390(uVar2 & 0xffffff00);
  return;
}

