// FUN_00ade0b0 @ 00ade0b0 body=[[00ade0b0, 00ade2bc]]


void FUN_00ade0b0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iStack_c;
  
  piVar4 = param_2;
  uVar10 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*param_2 != 0) {
    (*(code *)PTR__free_00f01b10)(*param_2);
    *param_2 = 0;
  }
  uVar11 = *(uint *)(in_ECX + 0x24);
  param_2 = (int *)0x0;
  if (uVar11 == 0) {
    return;
  }
  do {
    iVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x20) + uVar10 * 4) + 4))();
    if (iVar5 == 3) {
      if (param_2 == (int *)0x0) {
        if (uVar10 == 0xffffffff) {
          return;
        }
        iVar5 = *(int *)(*(int *)(in_ECX + 0x20) + uVar10 * 4);
        if (iVar5 == 0) {
          return;
        }
        uVar10 = *(uint *)(in_ECX + 0x34);
        iVar2 = *(int *)(in_ECX + 0x10);
        uVar11 = 0;
        param_2 = (int *)0x0;
        if (uVar10 != 0) break;
        goto LAB_00ade167;
      }
      param_2 = (int *)((int)param_2 + 1);
    }
    uVar10 = uVar10 + 1;
    if (uVar11 <= uVar10) {
      return;
    }
  } while( true );
  do {
    iVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x30) + uVar11 * 4) + 4))();
    if (iVar6 == 5) {
      if (param_2 == (int *)0x0) {
        if ((uVar11 != 0xffffffff) &&
           (piVar9 = *(int **)(*(int *)(in_ECX + 0x30) + uVar11 * 4), piVar9 != (int *)0x0)) {
          iStack_c = (**(code **)(*piVar9 + 0x10))();
          goto LAB_00ade16f;
        }
        break;
      }
      param_2 = (int *)((int)param_2 + 1);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < uVar10);
LAB_00ade167:
  iStack_c = 0;
LAB_00ade16f:
  param_2 = (int *)(iVar2 + param_1 * 4);
  param_1 = 3;
  do {
    iVar2 = *(int *)(iStack_c + *param_2 * 4);
    uVar10 = (uint)*(byte *)(*(int *)(iVar5 + 0x1c) + 4 + iVar2 * 8);
    uVar11 = 0;
    if (uVar10 != 0) {
      do {
        iVar6 = *(int *)(*(int *)(param_3 + 0x80) +
                        (uint)*(ushort *)
                               (*(int *)(iVar5 + 0xc) + 6 +
                               (*(int *)(*(int *)(iVar5 + 0x1c) + iVar2 * 8) + (uVar11 & 0xff)) * 8)
                        * 4);
        uVar3 = piVar4[1];
        uVar7 = 0;
        if (uVar3 != 0) {
          piVar9 = (int *)*piVar4;
          do {
            if (*piVar9 == iVar6) {
              if (uVar7 != 0xffffffff) goto LAB_00ade295;
              break;
            }
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 < uVar3);
        }
        piVar4[1] = uVar3 + 1;
        if ((uint)piVar4[2] < uVar3 + 1) {
          iVar1 = uVar3 + 2;
          if (iVar1 == 0) {
            piVar4[1] = 0;
            piVar4[2] = 0;
            if (*piVar4 != 0) {
              (*(code *)PTR__free_00f01b10)(*piVar4);
              *piVar4 = 0;
            }
          }
          else {
            if (*piVar4 == 0) {
              iVar8 = (*(code *)PTR_FUN_00f01b08)(iVar1 * 4,(short)piVar4[3],4,2,0,0xffffffff);
            }
            else {
              iVar8 = (*(code *)PTR_FUN_00f01b0c)(*piVar4,iVar1 * 4);
            }
            *piVar4 = iVar8;
            piVar4[2] = iVar1;
          }
        }
        piVar9 = (int *)(*piVar4 + -4 + piVar4[1] * 4);
        if (piVar9 != (int *)0x0) {
          *piVar9 = iVar6;
        }
LAB_00ade295:
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return;
    }
  } while( true );
}

