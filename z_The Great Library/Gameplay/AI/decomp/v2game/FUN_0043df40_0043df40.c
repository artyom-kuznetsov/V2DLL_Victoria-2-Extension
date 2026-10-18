// FUN_0043df40 @ 0043df40 body=[[0043df40, 0043dff4]]


void FUN_0043df40(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  int local_8;
  
  local_8 = in_ECX;
  iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xac) + 0xac) + 0xb0))();
  if (iVar1 != 3) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0xac) + 0x54) + 0x2c))(&local_8);
    if (0 < local_8) {
      iVar1 = *(int *)(in_ECX + 0xac);
      FUN_00401000(((float)local_8 / 1000.0 + 0.0005) * 1000.0,extraout_ECX,0,0);
      uVar2 = FUN_00b31c00();
      (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar2);
      FUN_0043e200();
    }
  }
  return;
}

