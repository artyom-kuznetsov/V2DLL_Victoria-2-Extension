// FUN_0042d650 @ 0042d650 body=[[0042d650, 0042d70b]]


void FUN_0042d650(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_10c [65];
  undefined4 local_8;
  
  iVar2 = 0;
  while( true ) {
    piVar3 = *(int **)(param_1 + 0x1c);
    if ((char)piVar3[0x44] == '\0') {
      iVar1 = (**(code **)(*piVar3 + 4))();
      piVar3[2] = iVar1;
      if (iVar1 == 0) {
        piVar3[3] = 0x13;
      }
      *(undefined1 *)(piVar3 + 0x44) = 1;
    }
    piVar3 = piVar3 + 3;
    piVar4 = local_10c;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((local_10c[0] == 4) || (local_10c[0] == 0x13)) break;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    if (iVar2 < param_2[1] - *param_2 >> 2) {
      local_8 = 0;
      FUN_0098fc80(*(int *)(param_1 + 0x1c) + 0xc,&local_8);
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*param_2 + iVar1) = local_8;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  return;
}

