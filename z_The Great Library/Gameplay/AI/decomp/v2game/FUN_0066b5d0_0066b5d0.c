// FUN_0066b5d0 @ 0066b5d0 body=[[0066b5d0, 0066b829]]


void FUN_0066b5d0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  cVar4 = (**(code **)(*(int *)param_1[7] + 0x30))();
  if (cVar4 == '\x01') {
    if (param_1[0x36a] != 0) {
      piVar9 = param_1 + (param_2 + 0x155) * 4;
      FUN_0068ff60();
      piVar8 = (int *)param_1[0x368];
      if (piVar8 != (int *)0x0) {
        do {
          uVar1 = *(undefined4 *)(*(int *)(*piVar8 + 0x28) + 0x14);
          uVar2 = *(undefined4 *)(*(int *)(*piVar8 + 0x28) + 0x10);
          iVar6 = piVar9[1];
          piVar8 = (int *)piVar8[2];
          puVar5 = (undefined4 *)FUN_00aae9af(0x14);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = uVar2;
            puVar5[1] = uVar1;
            puVar5[2] = iVar6;
            puVar5[3] = 0;
            *(undefined1 *)(puVar5 + 4) = 0;
          }
          iVar7 = piVar9[2];
          piVar9[1] = (int)puVar5;
          piVar9[2] = iVar7 + 1;
          if (iVar7 == 0) {
            *piVar9 = (int)puVar5;
          }
          else {
            *(undefined4 **)(iVar6 + 0xc) = puVar5;
          }
        } while (piVar8 != (int *)0x0);
        return;
      }
    }
  }
  else if ((param_1[0x553] == param_2) && (0 < param_1[0x36a])) {
    if ((param_1[0x582] != 0) &&
       (((iVar6 = (**(code **)(**(int **)param_1[0x580] + 4))(), iVar6 == 0 ||
         (iVar6 = (**(code **)(**(int **)param_1[0x580] + 4))(), iVar6 == 1)) ||
        (iVar6 = (**(code **)(**(int **)param_1[0x580] + 4))(), iVar6 == 2)))) {
      (**(code **)(*param_1 + 0xb4))(*(undefined4 *)(*(int *)param_1[0x580] + 0xdc));
      return;
    }
  }
  else {
    FUN_0066bc90();
    *(undefined1 *)(param_1 + 0x744) = 1;
    FUN_004cd940();
    *(undefined1 *)(param_1 + 0x744) = 0;
    FUN_008601b0(param_1 + 0x368);
    (**(code **)(*(int *)param_1[0x593] + 0x38))();
    cVar4 = FUN_0066bbf0();
    if (cVar4 != '\0') {
      FUN_0066bd60(param_1[0x35f],0);
    }
    for (puVar3 = (uint *)param_1[(param_2 + 0x155) * 4]; puVar3 != (uint *)0x0;
        puVar3 = (uint *)puVar3[3]) {
      iVar6 = DAT_01258a94;
      if (*puVar3 < 0x1269) {
        iVar6 = DAT_01258a98;
      }
      if ((((iVar6 != 0) && (iVar6 = FUN_009c1d40(), iVar6 != 0)) &&
          (piVar8 = (int *)(iVar6 + -8), piVar8 != (int *)0x0)) &&
         ((*(char *)(iVar6 + -4) == '\0' && (cVar4 = (**(code **)(*piVar8 + 8))(), cVar4 != '\0'))))
      {
        if (param_1[0x582] != 0) {
          iVar6 = (**(code **)(**(int **)param_1[0x580] + 4))();
          iVar7 = (**(code **)(*piVar8 + 4))();
          if (iVar7 != iVar6) goto LAB_0066b809;
        }
        FUN_004cd7f0();
      }
LAB_0066b809:
    }
    param_1[0x553] = param_2;
  }
  return;
}

