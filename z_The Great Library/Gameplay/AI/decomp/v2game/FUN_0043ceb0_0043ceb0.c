// FUN_0043ceb0 @ 0043ceb0 body=[[0043ceb0, 0043cec7] [0043ced0, 0043cf94]]


void FUN_0043ceb0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_10c [65];
  undefined4 local_8;
  
  iVar1 = param_1;
  param_1 = 0;
  while( true ) {
    piVar3 = *(int **)(iVar1 + 0x1c);
    if ((char)piVar3[0x44] == '\0') {
      iVar2 = (**(code **)(*piVar3 + 4))();
      piVar3[2] = iVar2;
      if (iVar2 == 0) {
        piVar3[3] = 0x13;
      }
      *(undefined1 *)(piVar3 + 0x44) = 1;
    }
    piVar3 = piVar3 + 3;
    piVar5 = local_10c;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    if ((local_10c[0] == 4) || (local_10c[0] == 0x13)) break;
    (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
    puVar4 = (undefined4 *)(*(int *)(iVar1 + 0x1c) + 0xc);
    puVar6 = (undefined4 *)(iVar1 + 0x228);
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar2 = FID_conflict__sscanf((char *)(iVar1 + 0x22c),"%i",&local_8);
    if (iVar2 == 0) {
      FUN_009a1140();
    }
    if (param_1 < param_2[1] - *param_2 >> 2) {
      *(undefined4 *)(*param_2 + param_1 * 4) = local_8;
      param_1 = param_1 + 1;
    }
  }
  (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
  return;
}

