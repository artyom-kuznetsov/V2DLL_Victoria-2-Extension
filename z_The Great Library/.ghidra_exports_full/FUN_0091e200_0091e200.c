// FUN_0091e200 @ 0091e200 body=[[0091e200, 0091e273]]


void FUN_0091e200(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                             *(int *)(in_ECX + 0x14) * 4) + 0x20);
  (**(code **)(*piVar1 + 0x2c))();
  for (puVar2 = *(undefined4 **)(DAT_012588e8 + 0xa84);
      (puVar2 != (undefined4 *)0x0 && ((int *)*puVar2 != piVar1)); puVar2 = (undefined4 *)puVar2[2])
  {
  }
  FUN_005f2ae0(puVar2);
  (**(code **)*piVar1)(1);
  return;
}

