// FUN_00890190 @ 00890190 body=[[00890190, 00890285]]


void FUN_00890190(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 in_ECX;
  int local_18;
  int local_14;
  
  FUN_008852b0(in_ECX);
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                           0xbe8) + local_14 * 4);
  iVar2 = *(int *)(iVar1 + 0x28);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != *(int *)(iVar1 + 0xc))) {
    piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(param_1 + 0xc) * 4) + 0xbe8) +
                               local_14 * 4) + 0x28);
    (**(code **)(*piVar3 + 0x2c))();
    for (puVar4 = *(undefined4 **)(DAT_012588e8 + 0xa84);
        (puVar4 != (undefined4 *)0x0 && ((int *)*puVar4 != piVar3));
        puVar4 = (undefined4 *)puVar4[2]) {
    }
    FUN_005f2ae0(puVar4);
    (**(code **)*piVar3)(1);
    FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + local_18 * 4));
    FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  }
  return;
}

