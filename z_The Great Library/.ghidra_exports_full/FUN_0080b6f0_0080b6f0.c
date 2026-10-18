// FUN_0080b6f0 @ 0080b6f0 body=[[0080b6f0, 0080bcdb]]


int * FUN_0080b6f0(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  undefined2 *puVar9;
  int *piVar10;
  int *unaff_ESI;
  int iVar11;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int *local_1c;
  undefined2 *local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined2 local_6;
  
  iVar11 = param_2 * 0x3c0 + *(int *)(param_1 + 0x19c);
  (**(code **)(*unaff_ESI + 0x20))(&param_2,4);
  uVar1 = *(uint *)(iVar11 + 0x27c);
  local_1c = (int *)(uVar1 * 8);
  local_28 = uVar1;
  (**(code **)(*unaff_ESI + 0x20))(&local_1c,4);
  local_20 = FUN_00aad56b(-(uint)((int)((ulonglong)uVar1 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar1 * 8));
  piVar10 = *(int **)(iVar11 + 0x270);
  iVar4 = 0;
  if (piVar10 != (int *)0x0) {
    uVar6 = 0;
    if ((*(char *)(iVar11 + 0x285) != '\0') && (*(char *)(iVar11 + 0x286) == '\0')) {
      uVar6 = 0x2000;
    }
    (**(code **)(*piVar10 + 0x2c))(piVar10,0,0,&local_30,uVar6);
    iVar4 = local_30;
  }
  if (0 < (int)uVar1) {
    local_18 = (undefined2 *)(local_20 + 4);
    puVar9 = (undefined2 *)(iVar4 + 8);
    do {
      local_34 = *(undefined4 *)(puVar9 + -4);
      D3DXFloat32To16Array(&local_6,&local_34,1);
      local_18[-2] = local_6;
      local_38 = *(int **)(puVar9 + -2);
      D3DXFloat32To16Array((int)&local_c + 2,&local_38,1);
      local_18[-1] = local_c._2_2_;
      *local_18 = *puVar9;
      local_18[1] = puVar9[1];
      local_18 = local_18 + 4;
      puVar9 = puVar9 + 6;
      local_28 = local_28 - 1;
    } while (local_28 != 0);
  }
  (**(code **)(**(int **)(iVar11 + 0x270) + 0x30))(*(int **)(iVar11 + 0x270));
  (**(code **)(*unaff_ESI + 0x20))(local_20,local_1c);
  piVar10 = local_1c;
  FUN_00aaea59(local_20);
  local_3c = *(int *)(iVar11 + 0x25c) * 6;
  (**(code **)(*unaff_ESI + 0x20))(&local_3c,4);
  local_24 = (*(int *)(iVar11 + 0x14) - *(int *)(iVar11 + 0x10)) / 0x24;
  (**(code **)(*unaff_ESI + 0x20))(&local_24,4);
  piVar10 = piVar10 + 4;
  local_28 = 0;
  local_1c = (int *)0x0;
  if (0 < *(int *)(*(int *)(iVar11 + 0x20) + -4 +
                  (*(int *)(iVar11 + 0x24) - *(int *)(iVar11 + 0x20) >> 2) * 4)) {
    (**(code **)(**(int **)(iVar11 + 0x250) + 0x2c))(*(int **)(iVar11 + 0x250),0,0,&local_38,0);
    local_1c = local_38;
  }
  local_c = 0;
  if (0 < local_24) {
    do {
      piVar5 = (int *)(*(int *)(iVar11 + 0x20) + local_c * 4);
      local_20 = (piVar5[1] - *piVar5) * 2;
      (**(code **)(*unaff_ESI + 0x20))(&local_20,4);
      piVar10 = piVar10 + 1;
      if ((int)local_28 < *(int *)(*(int *)(iVar11 + 0x20) + 4 + local_c * 4)) {
        (**(code **)(*unaff_ESI + 0x20))((int)local_1c + local_28 * 2,local_20);
        piVar10 = (int *)((int)piVar10 + local_20);
      }
      local_28 = *(int *)(*(int *)(iVar11 + 0x20) + 4 + local_c * 4);
      local_c = local_c + 1;
    } while (local_c < local_24);
  }
  if (local_1c != (int *)0x0) {
    (**(code **)(**(int **)(iVar11 + 0x250) + 0x30))(*(int **)(iVar11 + 0x250));
  }
  local_10 = *(int *)(iVar11 + 0x2a4) * 6;
  (**(code **)(*unaff_ESI + 0x20))(&local_10,4);
  piVar10 = piVar10 + 1;
  if (0 < local_10) {
    (**(code **)(**(int **)(iVar11 + 0x298) + 0x2c))(*(int **)(iVar11 + 0x298),0,0,&local_38,0);
    (**(code **)(*unaff_ESI + 0x20))(local_38,local_10);
    piVar10 = (int *)((int)piVar10 + local_10);
    (**(code **)(**(int **)(iVar11 + 0x298) + 0x30))(*(int **)(iVar11 + 0x298));
  }
  local_28 = *(uint *)(iVar11 + 0x2a0);
  local_40 = (int *)(local_28 * 0xc);
  local_1c = local_40;
  (**(code **)(*unaff_ESI + 0x20))(&local_40,4);
  piVar10 = piVar10 + 1;
  if (0 < (int)local_28) {
    local_20 = FUN_00aad56b(-(uint)((int)((ulonglong)local_28 * 0xc >> 0x20) != 0) |
                            (uint)((ulonglong)local_28 * 0xc));
    piVar5 = *(int **)(iVar11 + 0x294);
    piVar7 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      if ((*(char *)(iVar11 + 0x2a9) != '\0') && (*(char *)(iVar11 + 0x2aa) == '\0')) {
        piVar7 = (int *)0x2000;
      }
      (**(code **)(*piVar5 + 0x2c))(piVar5,0,0,&local_38,piVar7);
      piVar7 = local_38;
    }
    fVar3 = DAT_00f092fc;
    if (0 < (int)local_28) {
      puVar9 = (undefined2 *)(local_20 + 2);
      pfVar8 = (float *)(piVar7 + 5);
      do {
        if (pfVar8[-1] == 0.0) {
          fVar2 = (pfVar8[-5] - 0.5) - 1000.0;
LAB_0080ba89:
          puVar9[-1] = (short)(int)fVar2;
        }
        else if (pfVar8[-1] == fVar3) {
          fVar2 = (pfVar8[-5] - 0.5) + 1000.0;
          goto LAB_0080ba89;
        }
        if (*pfVar8 == 0.0) {
          fVar2 = (pfVar8[-4] - 0.5) - 1000.0;
LAB_0080bac9:
          *puVar9 = (short)(int)fVar2;
        }
        else if (*pfVar8 == fVar3) {
          fVar2 = (pfVar8[-4] - 0.5) + 1000.0;
          goto LAB_0080bac9;
        }
        puVar9[1] = *(undefined2 *)(pfVar8 + -3);
        puVar9[2] = *(undefined2 *)((int)pfVar8 + -10);
        *(float *)(puVar9 + 3) = pfVar8[-2];
        pfVar8 = pfVar8 + 6;
        puVar9 = puVar9 + 6;
        local_28 = local_28 - 1;
      } while (local_28 != 0);
    }
    (**(code **)(*unaff_ESI + 0x20))(local_20,local_1c);
    piVar10 = (int *)((int)piVar10 + (int)local_1c);
    (**(code **)(**(int **)(iVar11 + 0x294) + 0x30))(*(int **)(iVar11 + 0x294));
    FUN_00aaea59(local_20);
  }
  local_14 = *(int *)(iVar11 + 0x2c4) * 0xc;
  (**(code **)(*unaff_ESI + 0x20))(&local_14,4);
  piVar10 = piVar10 + 1;
  if (0 < local_14) {
    piVar5 = *(int **)(iVar11 + 0x2b8);
    piVar7 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      uVar6 = 0;
      if ((*(char *)(iVar11 + 0x2cd) != '\0') && (*(char *)(iVar11 + 0x2ce) == '\0')) {
        uVar6 = 0x2000;
      }
      (**(code **)(*piVar5 + 0x2c))(piVar5,0,0,&local_38,uVar6);
      piVar7 = local_38;
    }
    (**(code **)(*unaff_ESI + 0x20))(piVar7,local_14);
    iVar4 = local_14;
    (**(code **)(**(int **)(iVar11 + 0x2b8) + 0x30))(*(int **)(iVar11 + 0x2b8));
    local_c = *(int *)(iVar11 + 0x2ec) * 6;
    (**(code **)(*unaff_ESI + 0x20))(&local_c,4);
    piVar10 = (int *)((int)piVar10 + iVar4 + 4);
    if (0 < local_c) {
      (**(code **)(**(int **)(iVar11 + 0x2e0) + 0x2c))(*(int **)(iVar11 + 0x2e0),0,0,&local_38,0);
      (**(code **)(*unaff_ESI + 0x20))(local_38,local_c);
      piVar10 = (int *)((int)piVar10 + local_c);
      (**(code **)(**(int **)(iVar11 + 0x2e0) + 0x30))(*(int **)(iVar11 + 0x2e0));
    }
  }
  piVar5 = (int *)(param_2 * 0x10 + *(int *)(*(int *)(param_1 + 0x1588) + 0x18));
  local_2c = (piVar5[1] - *piVar5) / 0x1c;
  (**(code **)(*unaff_ESI + 0x20))(&local_2c,4);
  if (0 < local_2c) {
    local_38 = (int *)(*(int *)(*(int *)(param_1 + 0x1588) + 0x18) + param_2 * 0x10);
    (**(code **)(*unaff_ESI + 0x20))(*local_38,((local_38[1] - *local_38) / 0x1c) * 0x1c);
    piVar5 = (int *)(param_2 * 0x10 + *(int *)(*(int *)(param_1 + 0x1588) + 0x18));
    return piVar10 + ((piVar5[1] - *piVar5) / 0x1c) * 7 + 1;
  }
  return piVar10 + 1;
}

