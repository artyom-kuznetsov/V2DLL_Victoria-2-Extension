// FUN_005b5840 @ 005b5840 body=[[005b5840, 005b5973]]


void FUN_005b5840(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  
  if (in_EAX == 1) {
    iVar2 = FUN_00aae9af(0x2c);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_005a98c0();
      goto LAB_005b5898;
    }
  }
  else if (in_EAX == 2) {
    iVar2 = FUN_00aae9af(0x2c);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_005a9a60();
      goto LAB_005b5898;
    }
  }
  else {
    if (in_EAX != 3) {
      return;
    }
    iVar2 = FUN_00aae9af(0x38);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_005a9f10();
      goto LAB_005b5898;
    }
  }
  piVar3 = (int *)0x0;
LAB_005b5898:
  if (piVar3 != (int *)0x0) {
    FUN_005b5350(piVar3);
    (**(code **)(*piVar3 + 0x18))();
    (**(code **)(*piVar3 + 0x40))(param_2);
    (**(code **)(*(int *)piVar3[4] + 0x2c))(param_3);
    iVar2 = (**(code **)(*piVar3 + 0x24))();
    if (iVar2 == 3) {
      *(int **)(param_3 + 0x70) = piVar3;
    }
    else {
      *(int **)(param_3 + 0x74) = piVar3;
      FUN_005d0fe0(1);
    }
    if (param_4 != 0) {
      (**(code **)(*(int *)piVar3[5] + 0x2c))(param_4);
      iVar2 = (**(code **)(*piVar3 + 0x24))();
      if (iVar2 == 3) {
        *(int **)(param_4 + 0x70) = piVar3;
      }
      else {
        *(int **)(param_4 + 0x74) = piVar3;
        FUN_005d0fe0(0);
      }
    }
    piVar1 = *(int **)(param_2 + 0xec);
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      if ((iVar2 != param_3) && (iVar2 != param_4)) {
        (**(code **)(*piVar3 + 0x44))(iVar2);
      }
    }
    iVar2 = (**(code **)(*piVar3 + 0x24))();
    if (iVar2 == 3) {
      FUN_004b7820();
      return;
    }
    *(int **)(param_2 + 0x10c) = piVar3;
  }
  return;
}

