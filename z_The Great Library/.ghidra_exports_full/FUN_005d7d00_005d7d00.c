// FUN_005d7d00 @ 005d7d00 body=[[005d7d00, 005d7de6]]


void FUN_005d7d00(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  char local_108 [256];
  int local_8;
  
  local_8 = in_ECX;
  FUN_005c7440(param_1);
  piVar1 = *(int **)(in_ECX + 0x19c);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(iVar2 + 8);
    }
    FUN_009a0940(param_1);
    (**(code **)(*piVar4 + 4))(param_1);
    in_ECX = local_8;
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x1b0);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%d",uVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar3 = *(undefined4 *)(in_ECX + 0x1b4);
  FUN_009a0940(param_1);
  _sprintf(local_108,"%d",uVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

