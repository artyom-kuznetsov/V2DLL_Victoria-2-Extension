// FUN_0066b450 @ 0066b450 body=[[0066b450, 0066b49d] [0066b4a0, 0066b5c1]]


undefined4 FUN_0066b450(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_ESI;
  
  piVar5 = *(int **)(param_1 + 0xda0);
  do {
    if (piVar5 == (int *)0x0) {
      iVar1 = **(int **)(*(int *)(param_1 + 0x1640) + 4);
      uVar4 = (**(code **)(*unaff_ESI + 0x44))();
      piVar5 = (int *)(**(code **)(iVar1 + 0x44))(uVar4);
      if (piVar5 != unaff_ESI) {
        iVar1 = **(int **)(*(int *)(param_1 + 0x1640) + 4);
        uVar4 = (**(code **)(*unaff_ESI + 0x44))();
        piVar5 = (int *)(**(code **)(iVar1 + 0x3c))(uVar4);
        if (piVar5 != unaff_ESI) {
          iVar1 = **(int **)(*(int *)(param_1 + 0x1640) + 4);
          uVar4 = (**(code **)(*unaff_ESI + 0x44))();
          piVar5 = (int *)(**(code **)(iVar1 + 0x3c))(uVar4);
          if (piVar5 != unaff_ESI) {
            iVar1 = **(int **)(*(int *)(param_1 + 0x1640) + 4);
            uVar4 = (**(code **)(*unaff_ESI + 0x44))();
            piVar5 = (int *)(**(code **)(iVar1 + 0x34))(uVar4);
            if (piVar5 != unaff_ESI) {
              return 0;
            }
          }
        }
      }
      return *(undefined4 *)(*(int *)(param_1 + 0x1640) + 8);
    }
    piVar2 = (int *)piVar5[2];
    iVar1 = *piVar5;
    iVar3 = **(int **)(iVar1 + 0x20);
    uVar4 = (**(code **)(*unaff_ESI + 0x44))();
    piVar5 = (int *)(**(code **)(iVar3 + 0x44))(uVar4);
    if (piVar5 == unaff_ESI) break;
    iVar3 = **(int **)(iVar1 + 0x20);
    uVar4 = (**(code **)(*unaff_ESI + 0x44))();
    piVar5 = (int *)(**(code **)(iVar3 + 0x3c))(uVar4);
    if (piVar5 == unaff_ESI) break;
    iVar3 = **(int **)(iVar1 + 0x20);
    uVar4 = (**(code **)(*unaff_ESI + 0x44))();
    piVar5 = (int *)(**(code **)(iVar3 + 0x3c))(uVar4);
    if (piVar5 == unaff_ESI) break;
    iVar3 = **(int **)(iVar1 + 0x20);
    uVar4 = (**(code **)(*unaff_ESI + 0x44))();
    piVar6 = (int *)(**(code **)(iVar3 + 0x34))(uVar4);
    piVar5 = piVar2;
  } while (piVar6 != unaff_ESI);
  return *(undefined4 *)(iVar1 + 0x28);
}

