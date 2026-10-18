// FUN_00435840 @ 00435840 body=[[00435840, 00435919]]


void FUN_00435840(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_11c;
  int aiStack_110 [67];
  
  local_11c = 0;
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
    piVar4 = aiStack_110;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((aiStack_110[0] == 4) || (aiStack_110[0] == 0x13)) break;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
    puVar5 = (undefined4 *)(param_1 + 0x228);
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_009a1d40();
    if (local_11c < param_2[1] - *param_2 >> 3) {
      puVar3 = (undefined4 *)(*param_2 + local_11c * 8);
      local_11c = local_11c + 1;
      *puVar3 = 0;
      puVar3[1] = 0;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  return;
}

