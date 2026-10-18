// FUN_00acff70 @ 00acff70 body=[[00acff70, 00acffcd] [00acffd0, 00ad02bd]]


int * FUN_00acff70(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,int *param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int in_ECX;
  int iVar10;
  uint uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  float local_10;
  float local_c;
  float local_8;
  int *local_4;
  
  local_38 = 0.0;
  local_34 = 0.0;
  local_1c = *(int *)(in_ECX + 0xc);
  local_30 = 0.0;
  local_c = 0.0;
  local_14 = (uint)*(ushort *)(in_ECX + 400);
  local_8 = 0.0;
  local_10 = 3.4028235e+38;
  iVar10 = 0;
  local_4 = (int *)0x0;
  if (*(ushort *)(in_ECX + 400) == 0) {
    return (int *)0x0;
  }
  local_18 = param_1 << 5;
  param_1 = 0;
  do {
    uVar11 = (uint)*(ushort *)(param_1 + *(int *)(in_ECX + 0x18c));
    local_20 = *(int **)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar11 * 4);
    if ((((*(int *)(local_20[7] + 4 + local_18) != 0) &&
         (iVar7 = (**(code **)(**(int **)(local_20[7] + 4 + local_18) + 0x10))(), iVar7 != 0)) &&
        (cVar6 = FUN_00ade510(uVar11 * 0x40 + local_1c,param_2,&fStack_44,&fStack_24,&fStack_28,
                              &iStack_2c), cVar6 != '\0')) &&
       (fVar2 = (fStack_40 - param_2[1]) * (fStack_40 - param_2[1]) +
                (fStack_44 - *param_2) * (fStack_44 - *param_2) +
                (fStack_3c - param_2[2]) * (fStack_3c - param_2[2]), fVar2 < local_10)) {
      local_38 = fStack_44;
      local_4 = local_20;
      local_34 = fStack_40;
      local_30 = fStack_3c;
      local_c = fStack_24;
      local_8 = fStack_28;
      iVar10 = iStack_2c;
      local_10 = fVar2;
    }
    param_1 = param_1 + 2;
    local_14 = local_14 - 1;
  } while (local_14 != 0);
  if (local_4 != (int *)0x0) {
    if (param_3 != (float *)0x0) {
      *param_3 = local_38;
      param_3[1] = local_34;
      param_3[2] = local_30;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = local_c;
    }
    if (param_7 != (float *)0x0) {
      *param_7 = local_8;
    }
    if (param_8 != (int *)0x0) {
      *param_8 = iVar10;
    }
    if ((param_4 != (float *)0x0) || (param_5 != (float *)0x0)) {
      if (*(int *)(local_4[7] + local_18 + 4) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (**(code **)(**(int **)(local_4[7] + local_18 + 4) + 0x10))();
      }
      iVar7 = *(int *)(iVar7 + 0x10);
      if (param_4 != (float *)0x0) {
        iVar8 = FUN_00add3d0(1,0);
        FUN_00ad2f90(&local_38,local_c,local_8,iVar8 + *(int *)(iVar7 + iVar10 * 4) * 0xc,
                     iVar8 + *(int *)(iVar7 + 4 + iVar10 * 4) * 0xc,
                     iVar8 + *(int *)(iVar7 + 8 + iVar10 * 4) * 0xc);
        pfVar9 = (float *)(*local_4 * 0x40 + local_1c);
        fVar2 = pfVar9[4] * local_34 + *pfVar9 * local_38 + pfVar9[8] * local_30;
        fVar3 = pfVar9[9] * local_30 + pfVar9[1] * local_38 + pfVar9[5] * local_34;
        fVar4 = pfVar9[6] * local_34 + pfVar9[2] * local_38 + pfVar9[10] * local_30;
        auVar13 = ZEXT416((uint)(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3));
        auVar13 = rsqrtss(auVar13,auVar13);
        fVar12 = auVar13._0_4_;
        *param_4 = fVar12 * fVar2;
        param_4[1] = fVar3 * fVar12;
        param_4[2] = fVar12 * fVar4;
      }
      if ((param_5 != (float *)0x0) && (iVar8 = FUN_00add3d0(3,0), iVar8 != 0)) {
        pfVar9 = (float *)(iVar8 + *(int *)(iVar7 + iVar10 * 4) * 8);
        iVar5 = *(int *)(iVar7 + 8 + iVar10 * 4);
        pfVar1 = (float *)(iVar8 + *(int *)(iVar7 + 4 + iVar10 * 4) * 8);
        fVar2 = *(float *)(iVar8 + iVar5 * 8 + 4);
        fVar3 = pfVar1[1];
        fVar12 = (1.0 - local_c) - local_8;
        fVar4 = pfVar9[1];
        *param_5 = *pfVar9 * fVar12 + local_c * *pfVar1 + *(float *)(iVar8 + iVar5 * 8) * local_8;
        param_5[1] = fVar2 * local_8 + fVar4 * fVar12 + fVar3 * local_c;
      }
    }
  }
  return local_4;
}

