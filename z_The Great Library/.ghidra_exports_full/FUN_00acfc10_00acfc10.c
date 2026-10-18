// FUN_00acfc10 @ 00acfc10 body=[[00acfc10, 00acfc6a] [00acfc70, 00acff65]]


int * FUN_00acfc10(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,int *param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int in_ECX;
  uint uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  int local_1c;
  uint local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  int *local_4;
  
  local_34 = 0.0;
  local_18 = (uint)*(ushort *)(in_ECX + 400);
  local_30 = 0.0;
  local_2c = 0.0;
  local_10 = 0.0;
  local_c = 0.0;
  local_14 = 3.4028235e+38;
  local_4 = (int *)0x0;
  local_8 = 0;
  if (*(ushort *)(in_ECX + 400) == 0) {
    return (int *)0x0;
  }
  local_1c = param_1 << 5;
  param_1 = 0;
  do {
    uVar11 = (uint)*(ushort *)(param_1 + *(int *)(in_ECX + 0x18c));
    piVar5 = *(int **)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar11 * 4);
    iVar8 = piVar5[7];
    if ((((*(int *)(iVar8 + 0xc + local_1c) != 0) &&
         (iVar8 = (**(code **)(**(int **)(iVar8 + local_1c + 0xc) + 0x10))(), iVar8 != 0)) &&
        (cVar7 = FUN_00ade510(uVar11 * 0x40 + *(int *)(in_ECX + 0xc),param_2,&fStack_40,&fStack_20,
                              &fStack_24,&iStack_28), cVar7 != '\0')) &&
       (fVar2 = (fStack_3c - param_2[1]) * (fStack_3c - param_2[1]) +
                (fStack_40 - *param_2) * (fStack_40 - *param_2) +
                (fStack_38 - param_2[2]) * (fStack_38 - param_2[2]), fVar2 < local_14)) {
      local_34 = fStack_40;
      local_8 = iStack_28;
      local_30 = fStack_3c;
      local_2c = fStack_38;
      local_10 = fStack_20;
      local_c = fStack_24;
      local_14 = fVar2;
      local_4 = piVar5;
    }
    param_1 = param_1 + 2;
    local_18 = local_18 - 1;
  } while (local_18 != 0);
  if (local_4 != (int *)0x0) {
    if (param_3 != (float *)0x0) {
      *param_3 = local_34;
      param_3[1] = local_30;
      param_3[2] = local_2c;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = local_10;
    }
    if (param_7 != (float *)0x0) {
      *param_7 = local_c;
    }
    if (param_8 != (int *)0x0) {
      *param_8 = local_8;
    }
    if ((param_4 != (float *)0x0) || (param_5 != (float *)0x0)) {
      if (*(int *)(local_4[7] + 0xc + local_1c) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (**(code **)(**(int **)(local_4[7] + local_1c + 0xc) + 0x10))();
      }
      iVar8 = *(int *)(iVar8 + 0x10);
      if (param_4 != (float *)0x0) {
        iVar9 = FUN_00add3d0(1,0);
        FUN_00ad2f90(&local_34,local_10,local_c,iVar9 + *(int *)(iVar8 + local_8 * 4) * 0xc,
                     iVar9 + *(int *)(iVar8 + 4 + local_8 * 4) * 0xc,
                     iVar9 + *(int *)(iVar8 + 8 + local_8 * 4) * 0xc);
        pfVar10 = (float *)(*local_4 * 0x40 + *(int *)(in_ECX + 0xc));
        fVar2 = pfVar10[4] * local_30 + *pfVar10 * local_34 + pfVar10[8] * local_2c;
        fVar3 = pfVar10[9] * local_2c + pfVar10[1] * local_34 + pfVar10[5] * local_30;
        fVar4 = pfVar10[6] * local_30 + pfVar10[2] * local_34 + pfVar10[10] * local_2c;
        auVar13 = ZEXT416((uint)(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3));
        auVar13 = rsqrtss(auVar13,auVar13);
        fVar12 = auVar13._0_4_;
        *param_4 = fVar12 * fVar2;
        param_4[1] = fVar3 * fVar12;
        param_4[2] = fVar12 * fVar4;
      }
      if ((param_5 != (float *)0x0) && (iVar9 = FUN_00add3d0(3,0), iVar9 != 0)) {
        iVar6 = *(int *)(iVar8 + 8 + local_8 * 4);
        pfVar10 = (float *)(iVar9 + *(int *)(iVar8 + local_8 * 4) * 8);
        pfVar1 = (float *)(iVar9 + *(int *)(iVar8 + 4 + local_8 * 4) * 8);
        fVar2 = *(float *)(iVar9 + iVar6 * 8 + 4);
        fVar3 = pfVar1[1];
        fVar12 = (1.0 - local_10) - local_c;
        fVar4 = pfVar10[1];
        *param_5 = *pfVar10 * fVar12 + *pfVar1 * local_10 + *(float *)(iVar9 + iVar6 * 8) * local_c;
        param_5[1] = fVar2 * local_c + fVar3 * local_10 + fVar4 * fVar12;
      }
    }
  }
  return local_4;
}

