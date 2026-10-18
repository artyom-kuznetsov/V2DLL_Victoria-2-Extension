// FUN_00704d10 @ 00704d10 body=[[00704d10, 00704e20]]


void FUN_00704d10(int param_1)

{
  int iVar1;
  float fVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  int iVar7;
  int iVar8;
  
  FUN_00702ed0(0);
  iVar8 = 1;
  iVar7 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(in_EAX + 0x7c) + 0x2c))();
  piVar3 = (int *)*piVar3;
  if (piVar3 != (int *)0x0) {
    do {
      iVar4 = *piVar3;
      piVar3 = (int *)piVar3[2];
      if (*(int *)(iVar4 + 0x111c) == *(int *)(param_1 + 0x1c)) {
        iVar7 = iVar8;
      }
      iVar8 = iVar8 + 1;
    } while (piVar3 != (int *)0x0);
  }
  iVar8 = (*(int **)(in_EAX + 0x7c))[0x54];
  iVar4 = (**(code **)(**(int **)(in_EAX + 0x7c) + 0x2c))();
  iVar4 = *(int *)(iVar4 + 8);
  iVar5 = (**(code **)(**(int **)(in_EAX + 0x7c) + 0x2c))();
  iVar5 = *(int *)(iVar5 + 8) - iVar8;
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  iVar1 = *(int *)(*(int *)(in_EAX + 0x7c) + 0x104);
  fVar2 = ((float)iVar7 * (float)(iVar4 - iVar8)) / (float)iVar5 - 1.0;
  if ((iVar1 != 0) && (DAT_00f092dc < fVar2)) {
    FUN_00401000((fVar2 + 0.0005) * 1000.0,extraout_ECX,1,1);
    uVar6 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar6);
  }
  return;
}

