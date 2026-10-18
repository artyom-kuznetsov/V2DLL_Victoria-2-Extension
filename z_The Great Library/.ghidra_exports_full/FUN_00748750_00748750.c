// FUN_00748750 @ 00748750 body=[[00748750, 007487b1]]


void FUN_00748750(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x28);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[0x16];
    if (*(int *)(iVar2 + 4) != 0) {
      (**(code **)(*(int *)(*(int *)(iVar2 + 4) + 0x18) + 0x38))();
    }
    *(undefined4 *)(iVar2 + 0xc) = 0x2d2d2d;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    (**(code **)(*(int *)(*piVar1 + 0x18) + 0x38))();
  }
  FUN_0073d4e0();
  return;
}

