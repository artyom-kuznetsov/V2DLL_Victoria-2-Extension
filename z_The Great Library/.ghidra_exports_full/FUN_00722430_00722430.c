// FUN_00722430 @ 00722430 body=[[00722430, 00722487]]


void FUN_00722430(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x494);
  if (*(int *)(iVar1 + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 0x18) + 0x38))();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 8) = 0x2d2d2d;
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x24))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x18) + 0x38))();
  return;
}

