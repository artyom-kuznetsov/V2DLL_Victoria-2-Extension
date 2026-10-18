// FUN_00ae2720 @ 00ae2720 body=[[00ae2720, 00ae2797]]


void FUN_00ae2720(undefined4 param_1,char param_2)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = *(uint *)(in_ECX + 8);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      FUN_00b07e40(param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  FUN_00ae23b0();
  FUN_00b09a60();
  if (param_2 != '\0') {
    FUN_00ae1f10();
  }
  uVar1 = *(uint *)(in_ECX + 0x20);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x1c) + uVar2 * 4) + 8))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x2c) + 8))();
  }
  return;
}

