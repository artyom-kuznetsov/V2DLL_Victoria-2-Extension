// FUN_00890d00 @ 00890d00 body=[[00890d00, 00890dd8]]


void FUN_00890d00(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  int local_18;
  int local_14;
  
  FUN_008852b0(in_ECX);
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4)
                                + 0xbe8) + local_14 * 4) + 0x20) != 0) {
    piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(param_1 + 0xc) * 4) + 0xbe8) +
                               local_14 * 4) + 0x20);
    (**(code **)(*piVar1 + 0x2c))();
    for (puVar2 = *(undefined4 **)(DAT_012588e8 + 0xa84);
        (puVar2 != (undefined4 *)0x0 && ((int *)*puVar2 != piVar1));
        puVar2 = (undefined4 *)puVar2[2]) {
    }
    FUN_005f2ae0(puVar2);
    (**(code **)*piVar1)(1);
    FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + local_18 * 4));
    FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return;
}

