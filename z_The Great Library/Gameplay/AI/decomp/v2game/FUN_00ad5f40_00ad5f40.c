// FUN_00ad5f40 @ 00ad5f40 body=[[00ad5f40, 00ad5f8d] [00ad5f90, 00ad6104]]


void FUN_00ad5f40(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint local_18;
  
  piVar4 = param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*param_2 != 0) {
    (*(code *)PTR__free_00f01b10)(*param_2);
    *param_2 = 0;
  }
  uVar1 = *(uint *)(in_ECX + 0x84);
  local_18 = 0;
  if (uVar1 != 0) {
    iVar9 = param_1 * 0x20;
    do {
      iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x80) + local_18 * 4) + 0x1c);
      if (((*(int *)(iVar5 + 4 + iVar9) != 0) &&
          (iVar5 = (**(code **)(**(int **)(iVar5 + 4 + iVar9) + 0x10))(), iVar5 != 0)) &&
         (iVar6 = FUN_00add2c0(3,0), iVar6 != 0)) {
        uVar2 = *(uint *)(iVar5 + 0x14);
        param_2 = (int *)0x0;
        if (uVar2 != 0) {
          do {
            uVar11 = (uint)*(byte *)(*(int *)(iVar6 + 0x1c) + 4 + (int)param_2 * 8);
            param_1 = 0;
            if (uVar11 != 0) {
              do {
                uVar12 = (uint)*(ushort *)
                                (*(int *)(iVar6 + 0xc) + 6 +
                                (*(int *)(*(int *)(iVar6 + 0x1c) + (int)param_2 * 8) +
                                (param_1 & 0xff)) * 8);
                uVar3 = piVar4[1];
                uVar7 = 0;
                if (uVar3 != 0) {
                  puVar10 = (uint *)*piVar4;
                  do {
                    if (*puVar10 == uVar12) {
                      if (uVar7 != 0xffffffff) goto LAB_00ad60c0;
                      break;
                    }
                    uVar7 = uVar7 + 1;
                    puVar10 = puVar10 + 1;
                  } while (uVar7 < uVar3);
                }
                piVar4[1] = uVar3 + 1;
                if ((uint)piVar4[2] < uVar3 + 1) {
                  iVar5 = uVar3 + 2;
                  if (iVar5 == 0) {
                    piVar4[1] = 0;
                    piVar4[2] = 0;
                    if (*piVar4 != 0) {
                      (*(code *)PTR__free_00f01b10)(*piVar4);
                      *piVar4 = 0;
                    }
                  }
                  else {
                    if (*piVar4 == 0) {
                      iVar8 = (*(code *)PTR_FUN_00f01b08)
                                        (iVar5 * 4,(short)piVar4[3],4,2,0,0xffffffff);
                    }
                    else {
                      iVar8 = (*(code *)PTR_FUN_00f01b0c)(*piVar4,iVar5 * 4);
                    }
                    *piVar4 = iVar8;
                    piVar4[2] = iVar5;
                  }
                }
                puVar10 = (uint *)(*piVar4 + -4 + piVar4[1] * 4);
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = uVar12;
                }
LAB_00ad60c0:
                param_1 = param_1 + 1;
              } while (param_1 < uVar11);
            }
            param_2 = (int *)((int)param_2 + 1);
          } while (param_2 < uVar2);
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < uVar1);
  }
  return;
}

