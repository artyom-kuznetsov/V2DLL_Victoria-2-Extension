// FUN_0092ada0 @ 0092ada0 body=[[0092ada0, 0092b048]]


void FUN_0092ada0(int param_1,uint *param_2)

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
  int local_164 [66];
  undefined **local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_c;
  
LAB_0092adb0:
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
    piVar8 = local_164;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((local_164[0] == 4) || (local_164[0] == 0x13)) {
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
    local_5c[3] = (undefined **)DAT_0131ac90;
    local_1c = 0x2d2d2d;
    local_44 = 0x2d2d2d;
    local_14 = 0x2d2d2d;
    local_4c = 0x2d2d2d;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_c = 0x2d2d2d;
    local_5c[1] = (undefined **)0x18d;
    local_5c[0] = CWarGoal::vftable;
    local_3c = 0x2d2d2d;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = DAT_0131b788;
    local_24 = 0;
    local_20 = 0;
    FUN_009a2a90(param_1);
    pppuVar1 = (undefined ***)param_2[1];
    if (local_5c < pppuVar1) {
      pppuVar2 = (undefined ***)*param_2;
      if (pppuVar2 <= local_5c) {
        if (pppuVar1 == (undefined ***)param_2[2]) {
          uVar4 = (int)pppuVar1 - (int)pppuVar2 >> 6;
          if (0x3fffffe < uVar4) {
LAB_0092b029:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar4 = uVar4 + 1;
          uVar5 = (int)param_2[2] - (int)pppuVar2 >> 6;
          if (uVar5 < uVar4) {
            if (0x3ffffff - (uVar5 >> 1) < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar4) {
              uVar5 = uVar4;
            }
            FUN_0042c600(uVar5);
          }
        }
        puVar7 = (undefined4 *)param_2[1];
        iVar3 = ((int)local_5c - (int)pppuVar2 & 0xffffffc0U) + *param_2;
        if (puVar7 != (undefined4 *)0x0) {
          puVar7[1] = 0x18d;
          *puVar7 = CWarGoal::vftable;
          puVar7[2] = *(undefined4 *)(iVar3 + 8);
          puVar7[3] = *(undefined4 *)(iVar3 + 0xc);
          puVar7[4] = *(undefined4 *)(iVar3 + 0x10);
          puVar7[5] = *(undefined4 *)(iVar3 + 0x14);
          puVar7[6] = *(undefined4 *)(iVar3 + 0x18);
          puVar7[7] = *(undefined4 *)(iVar3 + 0x1c);
          puVar7[8] = *(undefined4 *)(iVar3 + 0x20);
          puVar7[9] = *(undefined4 *)(iVar3 + 0x24);
          puVar7[10] = *(undefined4 *)(iVar3 + 0x28);
          puVar7[0xb] = *(undefined4 *)(iVar3 + 0x2c);
          puVar7[0xc] = *(undefined4 *)(iVar3 + 0x30);
          puVar7[0xd] = *(undefined4 *)(iVar3 + 0x34);
          *(undefined1 *)(puVar7 + 0xe) = *(undefined1 *)(iVar3 + 0x38);
          puVar7[0xf] = *(undefined4 *)(iVar3 + 0x3c);
        }
        param_2[1] = param_2[1] + 0x40;
        goto LAB_0092adb0;
      }
    }
    if (pppuVar1 == (undefined ***)param_2[2]) {
      uVar4 = (int)((int)pppuVar1 - *param_2) >> 6;
      if (0x3fffffe < uVar4) goto LAB_0092b029;
      uVar4 = uVar4 + 1;
      uVar5 = (int)((int)param_2[2] - *param_2) >> 6;
      if (uVar5 < uVar4) {
        if (0x3ffffff - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar4) {
          uVar5 = uVar4;
        }
        FUN_0042c600(uVar5);
      }
    }
    puVar7 = (undefined4 *)param_2[1];
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[1] = 0x18d;
      *puVar7 = CWarGoal::vftable;
      puVar7[2] = local_5c[2];
      puVar7[3] = local_5c[3];
      puVar7[4] = local_4c;
      puVar7[5] = local_48;
      puVar7[6] = local_44;
      puVar7[7] = local_40;
      puVar7[8] = local_3c;
      puVar7[9] = local_38;
      puVar7[10] = local_34;
      puVar7[0xb] = local_30;
      puVar7[0xc] = local_2c;
      puVar7[0xd] = local_28;
      *(undefined1 *)(puVar7 + 0xe) = local_24;
      puVar7[0xf] = local_20;
    }
    param_2[1] = param_2[1] + 0x40;
  } while( true );
}

