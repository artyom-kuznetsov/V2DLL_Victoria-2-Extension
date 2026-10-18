// FUN_0094ff30 @ 0094ff30 body=[[0094ff30, 0094ff8c] [0094ff90, 00950014]]


void FUN_0094ff30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 4) * 4) + 0xbe8
                           ) + *(int *)(param_2 + 4) * 4);
  piVar2 = *(int **)(iVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x2c))();
    for (puVar3 = *(undefined4 **)(DAT_012588e8 + 0xa84);
        (puVar3 != (undefined4 *)0x0 && ((int *)*puVar3 != piVar2));
        puVar3 = (undefined4 *)puVar3[2]) {
    }
    FUN_005f2ae0(puVar3);
    (**(code **)*piVar2)(1);
    FUN_007dcf30(param_1);
    FUN_007dcf30(param_2);
  }
  piVar2 = *(int **)(iVar1 + 0x20);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x2c))();
    for (puVar3 = *(undefined4 **)(DAT_012588e8 + 0xa84);
        (puVar3 != (undefined4 *)0x0 && ((int *)*puVar3 != piVar2));
        puVar3 = (undefined4 *)puVar3[2]) {
    }
    FUN_005f2ae0(puVar3);
    (**(code **)*piVar2)(1);
  }
  return;
}

