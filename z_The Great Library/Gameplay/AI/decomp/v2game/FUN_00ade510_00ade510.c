// FUN_00ade510 @ 00ade510 body=[[00ade510, 00ade709] [00ade710, 00ade8ad]]


void FUN_00ade510(float *param_1,float *param_2,float *param_3,int *param_4,undefined4 *param_5,
                 uint *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int in_ECX;
  int iVar13;
  int *piVar14;
  uint uVar15;
  float fStack_7c;
  uint uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int local_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar9 = *(uint *)(in_ECX + 0x34);
  iVar13 = 0;
  uVar15 = 0;
  if (uVar9 != 0) {
    do {
      iVar12 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x30) + uVar15 * 4) + 4))();
      if (iVar12 == 0) {
        if (iVar13 == 0) {
          if ((uVar15 != 0xffffffff) &&
             (piVar14 = *(int **)(*(int *)(in_ECX + 0x30) + uVar15 * 4), piVar14 != (int *)0x0)) {
            iVar13 = (**(code **)(*piVar14 + 0x10))();
            goto LAB_00ade548;
          }
          break;
        }
        iVar13 = iVar13 + 1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar9);
  }
  iVar13 = 0;
LAB_00ade548:
  local_6c = *(int *)(in_ECX + 0x10);
  FID_conflict__memcpy(&local_40,param_1,0x40);
  FUN_00ad29c0();
  fStack_58 = *param_2 * local_40 + param_2[1] * fStack_30 + param_2[2] * fStack_20 + fStack_10;
  fStack_54 = param_2[2] * fStack_1c + param_2[1] * fStack_2c + *param_2 * fStack_3c + fStack_c;
  fStack_50 = param_2[2] * fStack_18 + *param_2 * fStack_38 + param_2[1] * fStack_28 + fStack_8;
  fStack_34 = param_2[3] * local_40 + param_2[4] * fStack_30 + param_2[5] * fStack_20 + fStack_10;
  fStack_30 = param_2[5] * fStack_1c + param_2[4] * fStack_2c + param_2[3] * fStack_3c + fStack_c;
  fStack_2c = param_2[5] * fStack_18 + param_2[3] * fStack_38 + param_2[4] * fStack_28 + fStack_8;
  fStack_7c = 3.4028235e+38;
  uVar9 = *(uint *)(in_ECX + 0x1c);
  fStack_64 = 0.0;
  uVar15 = 0;
  fStack_60 = 0.0;
  bVar10 = false;
  fStack_5c = 0.0;
  uStack_78 = 0;
  iStack_74 = 0;
  uStack_70 = 0;
  fStack_28 = fStack_34 - fStack_58;
  fStack_24 = fStack_30 - fStack_54;
  fVar1 = fStack_2c - fStack_50;
  fStack_20 = 1.0 / SQRT(fVar1 * fVar1 + fStack_28 * fStack_28 + fStack_24 * fStack_24);
  fStack_28 = fStack_28 * fStack_20;
  fStack_24 = fStack_24 * fStack_20;
  fStack_20 = fStack_20 * fVar1;
  if (uVar9 != 0) {
    piVar14 = (int *)(local_6c + 4);
    local_40 = fStack_58;
    fStack_3c = fStack_54;
    fStack_38 = fStack_50;
    do {
      cVar11 = FUN_00adf620(iVar13 + piVar14[-1] * 0xc,iVar13 + *piVar14 * 0xc,
                            iVar13 + piVar14[1] * 0xc,&fStack_4c,&local_6c,&uStack_68);
      if ((cVar11 != '\0') &&
         (fVar1 = (fStack_48 - fStack_54) * (fStack_48 - fStack_54) +
                  (fStack_4c - fStack_58) * (fStack_4c - fStack_58) +
                  (fStack_44 - fStack_50) * (fStack_44 - fStack_50), fVar1 < fStack_7c)) {
        bVar10 = true;
        fStack_64 = fStack_4c;
        fStack_60 = fStack_48;
        fStack_5c = fStack_44;
        iStack_74 = local_6c;
        uStack_70 = uStack_68;
        fStack_7c = fVar1;
        uStack_78 = uVar15;
      }
      uVar15 = uVar15 + 3;
      piVar14 = piVar14 + 3;
    } while (uVar15 < uVar9);
    if (bVar10) {
      if (param_3 != (float *)0x0) {
        fVar1 = param_1[5];
        fVar2 = param_1[1];
        fVar3 = param_1[9];
        fVar4 = param_1[0xd];
        fVar5 = param_1[6];
        fVar6 = param_1[2];
        fVar7 = param_1[10];
        fVar8 = param_1[0xe];
        *param_3 = param_1[8] * fStack_5c + *param_1 * fStack_64 + param_1[4] * fStack_60 +
                   param_1[0xc];
        param_3[1] = fVar3 * fStack_5c + fVar2 * fStack_64 + fVar1 * fStack_60 + fVar4;
        param_3[2] = fVar5 * fStack_60 + fVar6 * fStack_64 + fVar7 * fStack_5c + fVar8;
      }
      if (param_6 != (uint *)0x0) {
        *param_6 = uStack_78;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = iStack_74;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = uStack_70;
        return;
      }
    }
  }
  return;
}

