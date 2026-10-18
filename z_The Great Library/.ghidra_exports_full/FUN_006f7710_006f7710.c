// FUN_006f7710 @ 006f7710 body=[[006f7710, 006f77a1]]


void FUN_006f7710(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_006ef840();
  if (*(int **)(in_ECX + 0x1c4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1c4) + 4))(1);
  }
  *(undefined4 *)(in_ECX + 0x1c4) = 0;
  iVar1 = *(int *)(in_ECX + 0x3b8);
  if (*(int *)(iVar1 + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 0x18) + 0x38))();
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 8) = 0x2d2d2d;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar1 = *(int *)(in_ECX + 0x474);
  if (*(int *)(iVar1 + 8) != 0) {
    (**(code **)(*(int *)(*(int *)(iVar1 + 8) + 0x18) + 0x38))();
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0x2d2d2d;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}

