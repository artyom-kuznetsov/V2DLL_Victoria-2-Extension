// FUN_00824f30 @ 00824f30 body=[[00824f30, 00825034]]


void FUN_00824f30(int param_1,int *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float in_XMM0_Da;
  
  FUN_00824c10(param_1,param_2[0x2b]);
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  iVar5 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    piVar6 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    iVar4 = (**(code **)(*piVar6 + 0x1e4))();
    if (iVar4 == 0xf) {
      iVar5 = iVar5 + 1;
    }
  }
  if (*(int *)(param_1 + 0x84) < iVar5) {
    (**(code **)(*param_2 + 0xd4))();
    return;
  }
  piVar6 = *(int **)(param_1 + 0x98);
  if (piVar6 == (int *)0x0) {
    return;
  }
  do {
    puVar1 = *(undefined4 **)(param_1 + 0x44);
    iVar5 = *piVar6;
    fVar2 = (float)piVar6[1];
    piVar6 = (int *)piVar6[3];
    do {
      if (puVar1 == (undefined4 *)0x0) {
        if (in_XMM0_Da < fVar2) {
          param_2[0x2b] = iVar5;
          param_2[0x1b] = (int)fVar2;
          return;
        }
        break;
      }
      piVar3 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      iVar4 = (**(code **)(*piVar3 + 0x1e4))();
    } while (((iVar4 != 0xf) || (piVar3 == param_2)) || (piVar3[0x2b] != iVar5));
    if (piVar6 == (int *)0x0) {
      return;
    }
  } while( true );
}

