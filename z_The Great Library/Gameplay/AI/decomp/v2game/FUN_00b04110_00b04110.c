// FUN_00b04110 @ 00b04110 body=[[00b04110, 00b0449e] [00b044a0, 00b0469c] [00b046a0, 00b046ec] [00b046f0, 00b048b8] [00b048c0, 00b04970]]


void FUN_00b04110(float *param_1,int *param_2,float *param_3)

{
  undefined2 *puVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int in_ECX;
  float *pfVar12;
  uint uVar13;
  uint uStack_48;
  int iStack_44;
  int iStack_34;
  float *pfStack_30;
  float *pfStack_2c;
  float *pfStack_28;
  float *pfStack_24;
  float *pfStack_20;
  float *local_1c;
  uint local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  piVar6 = param_2;
  param_2[6] = in_ECX;
  param_2[2] = (int)param_1[6];
  param_2[4] = *(int *)(in_ECX + 0xa0);
  param_2[5] = 0x24;
  iVar3 = *(int *)(in_ECX + 0xa0);
  iVar5 = iVar3 * 3;
  if ((*(int *)(in_ECX + 0x7c) != 0) || (*(int *)(in_ECX + 0x80) != 0)) {
    uVar8 = FUN_00ae7070(param_3,*(undefined4 *)(in_ECX + 0x70));
    FUN_00b1b010(*param_1,param_1[7],uVar8,&local_14);
    uVar9 = local_14 >> 1;
    pfVar10 = (float *)FUN_00ae70c0(param_3,uVar9);
    FUN_00b1c2f0(uVar8,uVar9,pfVar10,param_1[3],*(undefined4 *)(in_ECX + 0x98));
    param_2[5] = param_2[5] + uVar9 * 4;
    if (*(int *)(in_ECX + 0x7c) != 0) {
      local_10 = 0.0;
      local_c = 0.0;
      local_8 = 0.0;
      local_4 = 1.0;
      iVar11 = (*(code *)PTR_FUN_00f01b08)(param_2[4] * *(int *)(in_ECX + 0x7c) * 8,0,4,0,0,0);
      *param_2 = iVar11;
      param_2 = (int *)0x0;
      if (*(int *)(in_ECX + 0x7c) != 0) {
        iStack_44 = 0;
        local_1c = pfVar10 + iVar3 * 2;
        pfStack_20 = pfVar10 + iVar3 * 3;
        pfStack_24 = pfVar10;
        do {
          uVar9 = 0;
          do {
            FUN_00b1bfa0(pfVar10 + *(int *)(in_ECX + 0xa0) * uVar9 + iStack_44,
                         *(int *)(in_ECX + 0xa0));
            uVar9 = uVar9 + 1;
          } while (uVar9 < 4);
          uVar9 = *(uint *)(in_ECX + 0xa0);
          uStack_48 = 0;
          if (uVar9 != 0) {
            iStack_34 = iStack_44;
            pfStack_30 = pfStack_24;
            pfStack_28 = pfStack_20;
            pfStack_2c = local_1c;
            do {
              local_10 = *pfStack_30;
              local_c = pfVar10[uVar9 + iStack_34];
              local_8 = *pfStack_2c;
              local_4 = *pfStack_28;
              fVar4 = 1.0 / SQRT(local_4 * local_4 +
                                 local_8 * local_8 + local_10 * local_10 + local_c * local_c);
              local_10 = fVar4 * local_10;
              local_c = fVar4 * local_c;
              local_8 = local_8 * fVar4;
              local_4 = local_4 * fVar4;
              FUN_00b18f80(&local_10,1);
              puVar1 = (undefined2 *)
                       (*piVar6 + (*(int *)(in_ECX + 0xa0) * (int)param_2 + uStack_48) * 8);
              uVar7 = FUN_00b31c00();
              *puVar1 = uVar7;
              uVar7 = FUN_00b31c00();
              puVar1[1] = uVar7;
              uVar7 = FUN_00b31c00();
              puVar1[2] = uVar7;
              uVar7 = FUN_00b31c00();
              iStack_34 = iStack_34 + 1;
              puVar1[3] = uVar7;
              pfStack_30 = pfStack_30 + 1;
              pfStack_2c = pfStack_2c + 1;
              pfStack_28 = pfStack_28 + 1;
              uVar9 = *(uint *)(in_ECX + 0xa0);
              uStack_48 = uStack_48 + 1;
            } while (uStack_48 < uVar9);
          }
          iStack_44 = iStack_44 + iVar3 * 4;
          pfStack_24 = pfStack_24 + iVar3 * 4;
          pfStack_20 = pfStack_20 + iVar3 * 4;
          local_1c = local_1c + iVar3 * 4;
          param_2 = (int *)((int)param_2 + 1);
        } while (param_2 < *(uint *)(in_ECX + 0x7c));
      }
    }
    if (*(int *)(in_ECX + 0x80) != 0) {
      local_10 = 0.0;
      local_c = 0.0;
      local_8 = 0.0;
      local_4 = 1.0;
      iVar11 = (*(code *)PTR_FUN_00f01b08)(piVar6[4] * *(int *)(in_ECX + 0x80) * 8,0,4,0,0,0);
      piVar6[7] = iVar11;
      param_2 = (int *)0x0;
      if (*(int *)(in_ECX + 0x80) != 0) {
        iStack_44 = 0;
        do {
          uVar9 = 0;
          do {
            FUN_00b1bfa0(pfVar10 + *(int *)(in_ECX + 0xa0) * uVar9 + iStack_44 +
                                   *(int *)(in_ECX + 0xb4),*(int *)(in_ECX + 0xa0));
            uVar9 = uVar9 + 1;
          } while (uVar9 < 4);
          uVar9 = *(uint *)(in_ECX + 0xa0);
          uStack_48 = 0;
          if (uVar9 != 0) {
            do {
              iVar11 = iStack_44 + uStack_48 + *(int *)(in_ECX + 0xb4);
              local_10 = pfVar10[iVar11];
              local_c = pfVar10[uVar9 + iVar11];
              local_8 = pfVar10[iVar11 + iVar3 * 2];
              local_4 = pfVar10[iVar11 + iVar5];
              fVar4 = 1.0 / SQRT(local_4 * local_4 +
                                 local_8 * local_8 + local_10 * local_10 + local_c * local_c);
              local_10 = fVar4 * local_10;
              local_c = fVar4 * local_c;
              local_8 = local_8 * fVar4;
              local_4 = local_4 * fVar4;
              FUN_00b18f80(&local_10,1);
              puVar1 = (undefined2 *)
                       (piVar6[7] + (*(int *)(in_ECX + 0xa0) * (int)param_2 + uStack_48) * 8);
              uVar7 = FUN_00b31c00();
              *puVar1 = uVar7;
              uVar7 = FUN_00b31c00();
              puVar1[1] = uVar7;
              uVar7 = FUN_00b31c00();
              puVar1[2] = uVar7;
              uVar7 = FUN_00b31c00();
              puVar1[3] = uVar7;
              uVar9 = *(uint *)(in_ECX + 0xa0);
              uStack_48 = uStack_48 + 1;
            } while (uStack_48 < uVar9);
          }
          iStack_44 = iStack_44 + iVar3 * 4;
          param_2 = (int *)((int)param_2 + 1);
        } while (param_2 < *(uint *)(in_ECX + 0x80));
      }
    }
  }
  if (*(int *)(in_ECX + 0x84) != 0) {
    uVar8 = FUN_00ae7070(param_3,*(undefined4 *)(in_ECX + 0x74));
    FUN_00b1b010(param_1[1],param_1[8],uVar8,&local_14);
    uVar9 = local_14 >> 1;
    pfVar10 = (float *)FUN_00ae70c0(param_3,uVar9);
    FUN_00b1c2f0(uVar8,uVar9,pfVar10,param_1[4],*(undefined4 *)(in_ECX + 0x94));
    piVar6[5] = piVar6[5] + uVar9 * 4;
    iVar11 = (*(code *)PTR_FUN_00f01b08)(*(int *)(in_ECX + 0x84) * piVar6[4] * 0xc,0,4,0,0,0);
    piVar6[1] = iVar11;
    param_2 = (int *)0x0;
    if (*(int *)(in_ECX + 0x84) != 0) {
      pfStack_2c = pfVar10 + iVar3 * 2;
      iStack_44 = 0;
      pfStack_28 = pfVar10;
      do {
        uVar9 = 0;
        do {
          FUN_00b1bfa0(pfVar10 + *(int *)(in_ECX + 0xa0) * uVar9 + iStack_44,*(int *)(in_ECX + 0xa0)
                      );
          uVar9 = uVar9 + 1;
        } while (uVar9 < 3);
        uVar9 = *(uint *)(in_ECX + 0xa0);
        uVar13 = 0;
        if (uVar9 != 0) {
          pfStack_20 = pfStack_28;
          pfStack_24 = pfStack_2c;
          iVar11 = iStack_44;
          do {
            local_10 = *pfStack_20;
            local_c = pfVar10[uVar9 + iVar11];
            local_8 = *pfStack_24;
            FUN_00b18c30(&local_10,1);
            pfVar12 = (float *)(piVar6[1] + (*(int *)(in_ECX + 0xa0) * (int)param_2 + uVar13) * 0xc)
            ;
            uVar13 = uVar13 + 1;
            iVar11 = iVar11 + 1;
            *pfVar12 = local_10;
            pfVar12[1] = local_c;
            pfVar12[2] = local_8;
            pfStack_20 = pfStack_20 + 1;
            pfStack_24 = pfStack_24 + 1;
            uVar9 = *(uint *)(in_ECX + 0xa0);
          } while (uVar13 < uVar9);
        }
        iStack_44 = iStack_44 + iVar5;
        pfStack_28 = pfStack_28 + iVar3 * 3;
        pfStack_2c = pfStack_2c + iVar3 * 3;
        param_2 = (int *)((int)param_2 + 1);
      } while (param_2 < *(uint *)(in_ECX + 0x84));
    }
  }
  if (*(int *)(in_ECX + 0x88) != 0) {
    uVar8 = FUN_00ae7070(param_3,*(undefined4 *)(in_ECX + 0x78));
    FUN_00b1b010(param_1[2],param_1[9],uVar8,&local_14);
    uVar9 = local_14 >> 1;
    pfVar10 = (float *)FUN_00ae70c0(param_3,uVar9);
    FUN_00b1c2f0(uVar8,uVar9,pfVar10,param_1[5],*(undefined4 *)(in_ECX + 0x9c));
    piVar6[5] = piVar6[5] + uVar9 * 4;
    iVar11 = (*(code *)PTR_FUN_00f01b08)(*(int *)(in_ECX + 0x88) * piVar6[4] * 0xc,0,4,0,0,0);
    piVar6[8] = iVar11;
    param_2 = (int *)0x0;
    if (*(int *)(in_ECX + 0x84) != 0) {
      pfStack_20 = pfVar10 + iVar3 * 2;
      pfStack_24 = (float *)0x0;
      local_1c = pfVar10;
      do {
        uVar9 = 0;
        do {
          FUN_00b1bfa0(pfVar10 + *(int *)(in_ECX + 0xa0) * uVar9 + (int)pfStack_24,
                       *(int *)(in_ECX + 0xa0));
          uVar9 = uVar9 + 1;
        } while (uVar9 < 3);
        uVar9 = *(uint *)(in_ECX + 0xa0);
        uVar13 = 0;
        if (uVar9 != 0) {
          param_1 = local_1c;
          param_3 = pfStack_20;
          pfVar12 = pfStack_24;
          do {
            local_10 = *param_1;
            local_c = pfVar10[uVar9 + (int)pfVar12];
            local_8 = *param_3;
            FUN_00b18bf0(&local_10,1);
            pfVar2 = (float *)(piVar6[8] + (*(int *)(in_ECX + 0xa0) * (int)param_2 + uVar13) * 0xc);
            uVar13 = uVar13 + 1;
            pfVar12 = (float *)((int)pfVar12 + 1);
            *pfVar2 = local_10;
            pfVar2[1] = local_c;
            pfVar2[2] = local_8;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
            uVar9 = *(uint *)(in_ECX + 0xa0);
          } while (uVar13 < uVar9);
        }
        pfStack_24 = (float *)((int)pfStack_24 + iVar5);
        local_1c = local_1c + iVar3 * 3;
        pfStack_20 = pfStack_20 + iVar3 * 3;
        param_2 = (int *)((int)param_2 + 1);
      } while (param_2 < *(uint *)(in_ECX + 0x84));
    }
  }
  return;
}

