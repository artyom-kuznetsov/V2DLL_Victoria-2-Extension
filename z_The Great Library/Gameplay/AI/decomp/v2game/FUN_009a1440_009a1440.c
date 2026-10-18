// FUN_009a1440 @ 009a1440 body=[[009a1440, 009a14d9]]


void FUN_009a1440(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if ((char)piVar1[0x44] == '\0') {
    iVar2 = (**(code **)(*piVar1 + 4))();
    piVar1[2] = iVar2;
    if (iVar2 == 0) {
      piVar1[3] = 0x13;
    }
    *(undefined1 *)(piVar1 + 0x44) = 1;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  if (iVar2 != 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    piVar3 = piVar1 + 3;
    piVar5 = (int *)(param_1 + 0x20);
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    iVar2 = (**(code **)(*piVar1 + 4))();
    if (iVar2 != 0) {
      piVar1 = *(int **)(param_1 + 0x1c);
      if (piVar1[3] == 1) {
        piVar3 = piVar1 + 3;
        piVar5 = (int *)(param_1 + 0x124);
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        }
        (**(code **)(*piVar1 + 4))();
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
        puVar6 = (undefined4 *)(param_1 + 0x228);
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
    }
  }
  return;
}

