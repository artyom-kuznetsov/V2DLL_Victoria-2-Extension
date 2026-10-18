// FUN_00b10130 @ 00b10130 body=[[00b10130, 00b10427]]


void FUN_00b10130(float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *in_ECX;
  float *pfVar11;
  int local_20;
  uint local_14;
  uint local_10;
  
  uVar3 = in_ECX[1];
  local_10 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = *(int *)(*in_ECX + local_10 * 4);
      if (*(char *)(iVar4 + 0x28) != '\0') {
        if (param_2 < param_1) {
          iVar9 = FUN_00b0f790();
          iVar9 = iVar9 + -1;
          if (iVar9 != -1) {
            iVar10 = iVar9 * 0x10;
            do {
              fVar1 = *(float *)(*(int *)(iVar4 + 0x14) + iVar10);
              fVar2 = *(float *)(*(int *)(iVar4 + 0x14) + iVar10 + 4);
              if (fVar1 < param_2) break;
              if ((param_2 < fVar2) && (fVar2 <= param_1)) {
                iVar5 = *(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c);
                uVar6 = FUN_00b13250(param_3,param_4,1);
                uVar8 = FUN_00b0f750(uVar6);
                uVar8 = FUN_00b13240(uVar8);
                (**(code **)(iVar5 + 4))(fVar2,uVar8);
              }
              if (((param_2 < fVar1) && (fVar1 <= param_1)) && (fVar1 != fVar2)) {
                iVar5 = *(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c);
                uVar6 = FUN_00b13250(param_3,param_4,0);
                uVar8 = FUN_00b0f750(uVar6);
                uVar8 = FUN_00b13240(uVar8);
                (**(code **)(iVar5 + 4))(fVar1,uVar8);
              }
              iVar9 = iVar9 + -1;
              iVar10 = iVar10 + -0x10;
            } while (iVar9 != -1);
          }
        }
        else {
          uVar7 = FUN_00b0f790();
          local_14 = 0;
          if (uVar7 != 0) {
            local_20 = 0;
            do {
              pfVar11 = (float *)(*(int *)(iVar4 + 0x14) + local_20);
              fVar1 = *pfVar11;
              fVar2 = pfVar11[1];
              if (param_2 < fVar1) break;
              if ((param_1 < fVar1 != (param_1 == fVar1)) && (fVar1 < param_2)) {
                iVar9 = *(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c);
                uVar6 = FUN_00b13250(param_3,param_4,1);
                uVar8 = FUN_00b0f750(uVar6);
                uVar8 = FUN_00b13240(uVar8);
                (**(code **)(iVar9 + 4))(fVar1,uVar8);
              }
              if (((param_1 < fVar2 != (param_1 == fVar2)) && (fVar2 < param_2)) && (fVar2 != fVar1)
                 ) {
                iVar9 = *(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c);
                uVar6 = FUN_00b13250(param_3,param_4,0);
                uVar8 = FUN_00b0f750(uVar6);
                uVar8 = FUN_00b13240(uVar8);
                (**(code **)(iVar9 + 4))(fVar2,uVar8);
              }
              local_20 = local_20 + 0x10;
              local_14 = local_14 + 1;
            } while (local_14 < uVar7);
          }
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < uVar3);
  }
  return;
}

