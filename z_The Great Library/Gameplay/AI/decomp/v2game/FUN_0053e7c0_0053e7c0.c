// FUN_0053e7c0 @ 0053e7c0 body=[[0053e7c0, 0053e952]]


void FUN_0053e7c0(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_EAX;
  int iVar7;
  undefined4 uVar8;
  
  iVar7 = param_1[0x15];
  iVar4 = param_1[0x12];
  if (iVar7 == 0) {
    FUN_0047dc20(param_1[0x22] + 200);
  }
  else {
    FUN_0047dc20(iVar7 + 8);
    FUN_0047dca0(iVar7 + 0x60);
    uVar5 = *(uint *)(iVar7 + 0xb8);
    iVar7 = *(int *)(iVar7 + 0xbc);
    puVar2 = (uint *)(in_EAX + 0xe78);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar5;
    *(int *)(in_EAX + 0xe7c) = *(int *)(in_EAX + 0xe7c) + iVar7 + (uint)CARRY4(uVar3,uVar5);
    iVar6 = *(int *)(in_EAX + (DAT_01258738 + 0xd) * 0x10);
    puVar2 = (uint *)(iVar6 + 0x40);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar5;
    piVar1 = (int *)(iVar6 + 0x44);
    *piVar1 = *piVar1 + iVar7 + (uint)CARRY4(uVar3,uVar5);
  }
  if ((*(short *)(param_1 + 0x21) != 0) &&
     (*(int *)(param_1[0x22] + 0x24) < (*(int *)(iVar4 + 0x368) - *(int *)(iVar4 + 0x364)) / 0x1c))
  {
    FUN_005c5860();
  }
  for (piVar1 = *(int **)(iVar4 + 0xd8);
      (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != param_1)); piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  (**(code **)*param_1)(1);
  FUN_004b8720(iVar4);
  if (*(int *)(iVar4 + 300) == *(int *)(DAT_012588e8 + 0xb60)) {
    iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    if ((iVar7 != 0) &&
       (iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))(),
       *(char *)(*(int *)(iVar7 + 0x20) + 0x67) != '\0')) {
      uVar8 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
      FUN_00740050(uVar8);
    }
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(7);
    FUN_00679970();
  }
  return;
}

