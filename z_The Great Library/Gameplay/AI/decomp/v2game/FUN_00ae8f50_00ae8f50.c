// FUN_00ae8f50 @ 00ae8f50 body=[[00ae8f50, 00ae91a9] [00ae91b0, 00ae939f]]


void FUN_00ae8f50(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint *in_ECX;
  undefined4 *puVar30;
  uint uVar31;
  undefined4 *puVar32;
  int iVar33;
  float *pfVar34;
  uint uStack_44;
  uint local_38;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pfVar24 = param_2;
  puStack_8 = &LAB_00b37fc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar33 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  param_1 = param_1 * 0x20;
  local_4 = 0;
  if ((*(int *)(in_ECX[7] + 4 + param_1) == 0) ||
     (iVar25 = (**(code **)(**(int **)(in_ECX[7] + 4 + param_1) + 0x10))
                         (DAT_00ef259c ^ (uint)&stack0xffffffa4), iVar25 == 0)) {
    uVar23 = *(uint *)(in_ECX[6] + 0x84);
    local_38 = 0;
    if (uVar23 != 0) {
      do {
        iVar25 = *(int *)(*(int *)(*(int *)(in_ECX[6] + 0x80) + local_38 * 4) + 0x1c);
        if ((*(int *)(iVar25 + 4 + param_1) != 0) &&
           (iVar25 = (**(code **)(**(int **)(iVar25 + 4 + param_1) + 0x10))(), iVar25 != 0)) {
          uVar27 = *(uint *)(iVar25 + 0x18);
          if (local_14 < uVar27 * 2) {
            FUN_00adfdb0(uVar27 * 2);
            iVar33 = local_1c;
          }
          iVar25 = FUN_00add410(0,0);
          iVar26 = FUN_00add2c0(3,0);
          if (iVar26 != 0) {
            iVar28 = FUN_00add3d0(5,0);
            uStack_44 = 0;
            if (uVar27 != 0) {
              pfVar34 = (float *)(iVar25 + 8);
              do {
                iVar25 = *(int *)(iVar28 + uStack_44 * 4);
                uVar31 = (uint)*(byte *)(*(int *)(iVar26 + 0x1c) + 4 + iVar25 * 8);
                param_2 = (float *)0x0;
                if (uVar31 != 0) {
                  do {
                    if ((uint)*(ushort *)
                               (*(int *)(iVar26 + 0xc) + 6 +
                               (((uint)param_2 & 0xff) +
                               *(int *)(*(int *)(iVar26 + 0x1c) + iVar25 * 8)) * 8) == *in_ECX) {
                      fVar2 = pfVar24[4];
                      fVar3 = pfVar34[-1];
                      uVar29 = local_18 + 1;
                      fVar4 = *pfVar24;
                      fVar5 = pfVar34[-2];
                      fVar6 = pfVar24[8];
                      fVar7 = *pfVar34;
                      fVar8 = pfVar24[0xc];
                      fVar9 = pfVar24[5];
                      fVar10 = pfVar34[-1];
                      fVar11 = pfVar24[1];
                      fVar12 = pfVar34[-2];
                      fVar13 = pfVar24[9];
                      fVar14 = *pfVar34;
                      fVar15 = pfVar24[0xd];
                      fVar16 = pfVar24[6];
                      fVar17 = pfVar34[-1];
                      fVar18 = pfVar24[2];
                      fVar19 = pfVar34[-2];
                      fVar20 = pfVar24[10];
                      fVar21 = *pfVar34;
                      fVar22 = pfVar24[0xe];
                      if (local_14 < uVar29) {
                        local_14 = local_18 + 2;
                        if (local_14 == 0) {
                          local_18 = 0;
                          local_14 = 0;
                          uVar29 = local_18;
                          if (iVar33 != 0) {
                            (*(code *)PTR__free_00f01b10)(iVar33);
                            iVar33 = 0;
                            local_1c = iVar33;
                          }
                        }
                        else if (iVar33 == 0) {
                          iVar33 = (*(code *)PTR_FUN_00f01b08)(local_14 * 0xc,1,4,2,0,0xffffffff);
                          local_1c = iVar33;
                        }
                        else {
                          iVar33 = (*(code *)PTR_FUN_00f01b0c)(iVar33,local_14 * 0xc,1);
                          local_1c = iVar33;
                        }
                      }
                      local_18 = uVar29;
                      pfVar1 = (float *)(iVar33 + (local_18 * 3 + -3) * 4);
                      if (pfVar1 != (float *)0x0) {
                        *pfVar1 = fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3 + fVar8;
                        pfVar1[1] = fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10 + fVar15;
                        pfVar1[2] = fVar20 * fVar21 + fVar18 * fVar19 + fVar16 * fVar17 + fVar22;
                      }
                    }
                    param_2 = (float *)((int)param_2 + 1);
                  } while (param_2 < uVar31);
                }
                uStack_44 = uStack_44 + 1;
                pfVar34 = pfVar34 + 3;
              } while (uStack_44 < uVar27);
            }
          }
        }
        local_38 = local_38 + 1;
      } while (local_38 < uVar23);
      goto LAB_00ae90af;
    }
  }
  else {
    iVar26 = FUN_00add2c0(3,0);
    if (iVar26 == 0) {
      uVar23 = *(uint *)(iVar25 + 0x18);
      if (uVar23 != 0) {
        FUN_00adfdb0(uVar23);
        local_18 = uVar23;
      }
      iVar33 = 0;
      iVar25 = FUN_00add410(0,0);
      uVar27 = 0;
      if (3 < (int)uVar23) {
        iVar26 = (uVar23 - 4 >> 2) + 1;
        uVar27 = iVar26 * 4;
        puVar30 = (undefined4 *)0x10;
        puVar32 = (undefined4 *)(iVar25 + 0x1c);
        do {
          puVar30[-4] = puVar32[-7];
          iVar26 = iVar26 + -1;
          puVar30[-3] = puVar32[-6];
          puVar30[-2] = puVar32[-5];
          puVar30[-1] = puVar32[-4];
          *puVar30 = *(undefined4 *)(iVar25 + -0x30 + (int)(puVar30 + 0xc));
          puVar30[1] = puVar32[-2];
          puVar30[2] = puVar32[-1];
          puVar30[3] = *puVar32;
          puVar30[4] = puVar32[1];
          puVar30[5] = puVar32[2];
          puVar30[6] = puVar32[3];
          puVar30[7] = puVar32[4];
          puVar30 = puVar30 + 0xc;
          puVar32 = puVar32 + 0xc;
        } while (iVar26 != 0);
      }
      if (uVar27 < uVar23) {
        iVar26 = uVar23 - uVar27;
        puVar30 = (undefined4 *)(uVar27 * 0xc + 4);
        puVar32 = (undefined4 *)(uVar27 * 0xc + iVar25);
        do {
          puVar30[-1] = *puVar32;
          iVar26 = iVar26 + -1;
          *puVar30 = *(undefined4 *)((int)puVar30 + iVar25);
          puVar30[1] = puVar32[2];
          puVar30 = puVar30 + 3;
          puVar32 = puVar32 + 3;
        } while (iVar26 != 0);
      }
LAB_00ae90af:
      if (local_18 != 0) {
        FUN_00aeac10(iVar33,local_18);
        goto LAB_00ae9374;
      }
    }
  }
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x23] = 0xff7fffff;
  in_ECX[0x24] = 0xff7fffff;
  in_ECX[0x25] = 0xff7fffff;
  in_ECX[0x13] = 0x3f800000;
  in_ECX[0x18] = 0x3f800000;
  in_ECX[0x1d] = 0x3f800000;
  in_ECX[0x22] = 0x3f800000;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
LAB_00ae9374:
  local_4 = 0xffffffff;
  if (iVar33 != 0) {
    (*(code *)PTR__free_00f01b10)(iVar33);
  }
  ExceptionList = local_c;
  return;
}

