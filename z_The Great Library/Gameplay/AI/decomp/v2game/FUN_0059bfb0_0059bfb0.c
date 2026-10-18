// FUN_0059bfb0 @ 0059bfb0 body=[[0059bfb0, 0059c0c8]]


void FUN_0059bfb0(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int in_ECX;
  char local_104 [256];
  
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x58);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x20);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  piVar2 = *(int **)(in_ECX + 0x10);
  FUN_009a0940(param_1);
  (**(code **)(*piVar2 + 4))(param_1);
  piVar2 = *(int **)(in_ECX + 0x14);
  FUN_009a0940(param_1);
  (**(code **)(*piVar2 + 4))(param_1);
  return;
}

