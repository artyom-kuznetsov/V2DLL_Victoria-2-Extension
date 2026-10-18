// FUN_004a3020 @ 004a3020 body=[[004a3020, 004a31e4]]


void FUN_004a3020(int param_1,uint *param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_11c [66];
  undefined **local_14 [4];
  
LAB_004a3030:
  do {
    piVar6 = *(int **)(param_1 + 0x1c);
    if ((char)piVar6[0x44] == '\0') {
      iVar3 = (**(code **)(*piVar6 + 4))();
      piVar6[2] = iVar3;
      if (iVar3 == 0) {
        piVar6[3] = 0x13;
      }
      *(undefined1 *)(piVar6 + 0x44) = 1;
    }
    piVar6 = piVar6 + 3;
    piVar8 = local_11c;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((local_11c[0] == 4) || (local_11c[0] == 0x13)) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
    puVar9 = (undefined4 *)(param_1 + 0x228);
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    local_14[1] = (undefined **)0x18d;
    local_14[0] = CMapPoint::vftable;
    local_14[2] = (undefined **)0x0;
    local_14[3] = (undefined **)0x0;
    FUN_009a2a90(param_1);
    pppuVar1 = (undefined ***)param_2[1];
    if (local_14 < pppuVar1) {
      pppuVar2 = (undefined ***)*param_2;
      if (pppuVar2 <= local_14) {
        if (pppuVar1 == (undefined ***)param_2[2]) {
          uVar4 = (int)pppuVar1 - (int)pppuVar2 >> 4;
          if (0xffffffe < uVar4) {
LAB_004a31c5:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar4 = uVar4 + 1;
          uVar5 = (int)param_2[2] - (int)pppuVar2 >> 4;
          if (uVar5 < uVar4) {
            if (0xfffffff - (uVar5 >> 1) < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar4) {
              uVar5 = uVar4;
            }
            FUN_004a3be0(uVar5);
          }
        }
        puVar7 = (undefined4 *)param_2[1];
        iVar3 = ((int)local_14 - (int)pppuVar2 & 0xfffffff0U) + *param_2;
        if (puVar7 != (undefined4 *)0x0) {
          puVar7[1] = 0x18d;
          *puVar7 = CMapPoint::vftable;
          puVar7[2] = *(undefined4 *)(iVar3 + 8);
          puVar7[3] = *(undefined4 *)(iVar3 + 0xc);
        }
        param_2[1] = param_2[1] + 0x10;
        goto LAB_004a3030;
      }
    }
    if (pppuVar1 == (undefined ***)param_2[2]) {
      uVar4 = (int)((int)pppuVar1 - *param_2) >> 4;
      if (0xffffffe < uVar4) goto LAB_004a31c5;
      uVar4 = uVar4 + 1;
      uVar5 = (int)((int)param_2[2] - *param_2) >> 4;
      if (uVar5 < uVar4) {
        if (0xfffffff - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar4) {
          uVar5 = uVar4;
        }
        FUN_004a3be0(uVar5);
      }
    }
    puVar7 = (undefined4 *)param_2[1];
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[1] = 0x18d;
      *puVar7 = CMapPoint::vftable;
      puVar7[2] = local_14[2];
      puVar7[3] = local_14[3];
    }
    param_2[1] = param_2[1] + 0x10;
  } while( true );
}

