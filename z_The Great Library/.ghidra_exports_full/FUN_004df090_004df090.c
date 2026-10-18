// FUN_004df090 @ 004df090 body=[[004df090, 004df296]]


void FUN_004df090(int param_1,uint *param_2)

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
  undefined **appuStack_130 [4];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int aiStack_110 [67];
  
LAB_004df0a2:
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
    piVar8 = aiStack_110;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((aiStack_110[0] == 4) || (aiStack_110[0] == 0x13)) {
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
    appuStack_130[1] = (undefined **)0x18d;
    appuStack_130[0] = CEmployee::vftable;
    appuStack_130[2] = (undefined **)0x0;
    uStack_120 = 0x8000;
    uStack_11c = 0;
    uStack_118 = 1000;
    uStack_114 = 3;
    FUN_009a2a90(param_1);
    pppuVar1 = (undefined ***)param_2[1];
    if (appuStack_130 < pppuVar1) {
      pppuVar2 = (undefined ***)*param_2;
      if (pppuVar2 <= appuStack_130) {
        if (pppuVar1 == (undefined ***)param_2[2]) {
          uVar4 = (int)pppuVar1 - (int)pppuVar2 >> 5;
          if (0x7fffffe < uVar4) {
LAB_004df277:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar4 = uVar4 + 1;
          uVar5 = (int)param_2[2] - (int)pppuVar2 >> 5;
          if (uVar5 < uVar4) {
            if (0x7ffffff - (uVar5 >> 1) < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar4) {
              uVar5 = uVar4;
            }
            FUN_004df790(uVar5);
          }
        }
        puVar7 = (undefined4 *)param_2[1];
        iVar3 = ((int)appuStack_130 - (int)pppuVar2 & 0xffffffe0U) + *param_2;
        if (puVar7 != (undefined4 *)0x0) {
          puVar7[1] = *(undefined4 *)(iVar3 + 4);
          *puVar7 = CEmployee::vftable;
          puVar7[2] = *(undefined4 *)(iVar3 + 8);
          puVar7[4] = *(undefined4 *)(iVar3 + 0x10);
          puVar7[5] = *(undefined4 *)(iVar3 + 0x14);
          puVar7[6] = *(undefined4 *)(iVar3 + 0x18);
          puVar7[7] = *(undefined4 *)(iVar3 + 0x1c);
        }
        param_2[1] = param_2[1] + 0x20;
        goto LAB_004df0a2;
      }
    }
    if (pppuVar1 == (undefined ***)param_2[2]) {
      uVar4 = (int)((int)pppuVar1 - *param_2) >> 5;
      if (0x7fffffe < uVar4) goto LAB_004df277;
      uVar4 = uVar4 + 1;
      uVar5 = (int)((int)param_2[2] - *param_2) >> 5;
      if (uVar5 < uVar4) {
        if (0x7ffffff - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar4) {
          uVar5 = uVar4;
        }
        FUN_004df790(uVar5);
      }
    }
    puVar7 = (undefined4 *)param_2[1];
    if (puVar7 != (undefined4 *)0x0) {
      puVar7[1] = appuStack_130[1];
      *puVar7 = CEmployee::vftable;
      puVar7[2] = appuStack_130[2];
      puVar7[4] = uStack_120;
      puVar7[5] = uStack_11c;
      puVar7[6] = uStack_118;
      puVar7[7] = uStack_114;
    }
    param_2[1] = param_2[1] + 0x20;
  } while( true );
}

