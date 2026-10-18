// FUN_00a82e60 @ 00a82e60 body=[[00a82e60, 00a82fde]]


void FUN_00a82e60(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char local_104 [256];
  
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
  uVar1 = *(undefined4 *)(in_ECX + 0x34);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x38);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x4c);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_005c53f0(in_ECX + 0x24);
  FUN_00a84b30(in_ECX + 0x3c);
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

