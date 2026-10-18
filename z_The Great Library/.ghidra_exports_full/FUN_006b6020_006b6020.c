// FUN_006b6020 @ 006b6020 body=[[006b6020, 006b6230]]


void FUN_006b6020(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_28 [8];
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined1 auStack_18 [4];
  int iStack_14;
  undefined4 uStack_10;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar10 = (param_2 + -1) / 2;
    piVar4 = (int *)*param_4;
    piVar5 = *(int **)(param_1 + iVar10 * 4);
    if (param_5 == 0) {
      (**(code **)(*(int *)piVar5[0x42] + 0x58))(auStack_20);
      if ((((piVar5[0x31] != iStack_1c) && (cVar3 = FUN_005cc2e0(auStack_20,0), cVar3 != '\0')) ||
          ((**(code **)(*(int *)piVar4[0x42] + 0x58))(auStack_18), piVar4[0x31] == iStack_14)) ||
         (cVar3 = FUN_005cc2e0(auStack_18,0), cVar3 == '\0')) {
        uStack_10 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        iVar9 = 0;
        piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4)
                          + 0x7b4);
        for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
          if (piVar5 == (int *)*piVar2) goto LAB_006b619f;
          iVar9 = iVar9 + 1;
        }
        iVar9 = -1;
LAB_006b619f:
        iVar7 = 0;
        for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
          if (piVar4 == (int *)*piVar1) goto LAB_006b61b6;
          iVar7 = iVar7 + 1;
        }
        iVar7 = -1;
LAB_006b61b6:
        bVar11 = SBORROW4(iVar9,iVar7);
        iVar9 = iVar9 - iVar7;
        goto LAB_006b61bc;
      }
    }
    else {
      if (param_5 == 1) {
        puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x20))();
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        iVar7 = FUN_00aaf0c5(puVar6);
        puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x20))();
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        iVar8 = FUN_00aaf0c5(puVar6);
        bVar11 = SBORROW4(iVar7,iVar8);
        iVar9 = iVar7 - iVar8;
        if (iVar7 != iVar8) goto LAB_006b61bc;
        (**(code **)(*piVar4 + 0x20))();
        (**(code **)(*piVar5 + 0x20))();
        cVar3 = FUN_0098ab20();
      }
      else {
        if (param_5 != 2) {
          *(int **)(param_1 + param_2 * 4) = piVar4;
          return;
        }
        piVar4 = (int *)(**(code **)(*piVar4 + 0x50))(local_28);
        piVar5 = (int *)(**(code **)(*piVar5 + 0x50))(local_28);
        bVar11 = SBORROW4(*piVar5,*piVar4);
        iVar9 = *piVar5 - *piVar4;
LAB_006b61bc:
        cVar3 = bVar11 != iVar9 < 0;
      }
      if (cVar3 == '\0') {
        *(int *)(param_1 + param_2 * 4) = *param_4;
        return;
      }
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar10 * 4);
    param_2 = iVar10;
    if (iVar10 <= param_3) {
      *(int *)(param_1 + iVar10 * 4) = *param_4;
      return;
    }
  } while( true );
}

