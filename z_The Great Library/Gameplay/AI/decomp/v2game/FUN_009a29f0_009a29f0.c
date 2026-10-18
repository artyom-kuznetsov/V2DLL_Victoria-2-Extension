// FUN_009a29f0 @ 009a29f0  (requested 009A29F0, first bytes: 55 8B EC 56 8B 75 08 83)


void FUN_009a29f0(int param_1)

{
  int *in_ECX;
  
  if (*(int *)(param_1 + 4) == -1) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    FUN_004013e0(param_1);
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  (**(code **)(*in_ECX + 8))(param_1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
  }
  if (*(int *)(param_1 + 4) != -1) {
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  return;
}

