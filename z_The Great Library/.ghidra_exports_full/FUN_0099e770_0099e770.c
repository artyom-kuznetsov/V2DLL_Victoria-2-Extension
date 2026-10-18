// FUN_0099e770 @ 0099e770 body=[[0099e770, 0099e80c]]


void FUN_0099e770(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_108 [65];
  
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
    piVar3 = local_108;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    if ((local_108[0] == 4) || (local_108[0] == 0x13)) break;
    FUN_009a1440(param_1);
    piVar2 = (int *)(**(code **)(*param_3 + 8))(param_1,*(undefined4 *)(param_1 + 0x20));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(param_1);
      FUN_008b2480(piVar2);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  return;
}

