// FUN_00b25dd0 @ 00b25dd0 body=[[00b25dd0, 00b25e20]]


undefined4 FUN_00b25dd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    FUN_00b1f840("Not a file");
    return 0;
  }
  if (*(int *)(iVar1 + 4) != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
  }
  if (*(int *)(*(int *)(param_1 + 8) + 4) == 0) {
    (*DAT_013f3ab0)(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  }
  return 1;
}

