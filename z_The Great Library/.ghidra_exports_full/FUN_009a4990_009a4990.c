// FUN_009a4990 @ 009a4990 body=[[009a4990, 009a4a5a]]


void FUN_009a4990(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_108 [65];
  
  (**(code **)(*param_2 + 0xc))();
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x1c);
    if ((char)piVar2[0x44] == '\0') {
      iVar1 = (**(code **)(*piVar2 + 4))();
      piVar2[2] = iVar1;
      if (iVar1 == 0) {
        piVar2[3] = 0x13;
      }
      *(undefined1 *)(piVar2 + 0x44) = 1;
    }
    piVar2 = piVar2 + 3;
    piVar4 = local_108;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((local_108[0] == 4) || (local_108[0] == 0x13)) break;
    FUN_009a1440(param_1);
    piVar2 = (int *)(**(code **)(*param_3 + 8))(param_1,*(undefined4 *)(param_1 + 0x20));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(param_1);
      iVar1 = *param_2;
      uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
      (**(code **)(iVar1 + 0x18))(uVar3);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  (**(code **)(*param_2 + 0x10))();
  return;
}

