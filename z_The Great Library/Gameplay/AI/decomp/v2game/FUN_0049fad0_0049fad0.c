// FUN_0049fad0 @ 0049fad0 body=[[0049fad0, 0049fb90]]


undefined4 * FUN_0049fad0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int local_108 [65];
  
  *param_1 = 0;
  param_1[1] = 0;
  while( true ) {
    piVar3 = *(int **)(param_2 + 0x1c);
    if ((char)piVar3[0x44] == '\0') {
      iVar1 = (**(code **)(*piVar3 + 4))();
      piVar3[2] = iVar1;
      if (iVar1 == 0) {
        piVar3[3] = 0x13;
      }
      *(undefined1 *)(piVar3 + 0x44) = 1;
    }
    piVar3 = piVar3 + 3;
    piVar4 = local_108;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((local_108[0] == 4) || (local_108[0] == 0x13)) break;
    FUN_009a1440(param_2);
    if (*(int *)(param_2 + 0x20) == 0x1f) {
      uVar2 = FUN_00aaf0c5(param_2 + 0x22c);
      *param_1 = uVar2;
    }
    else if (*(int *)(param_2 + 0x20) == 0x20) {
      uVar2 = FUN_00aaf0c5(param_2 + 0x22c);
      param_1[1] = uVar2;
    }
  }
  (**(code **)(**(int **)(param_2 + 0x1c) + 4))();
  return param_1;
}

