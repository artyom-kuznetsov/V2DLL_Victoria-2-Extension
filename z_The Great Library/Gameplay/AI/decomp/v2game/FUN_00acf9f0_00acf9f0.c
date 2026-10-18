// FUN_00acf9f0 @ 00acf9f0 body=[[00acf9f0, 00acfb5d]]


void FUN_00acf9f0(undefined4 *param_1,int param_2)

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
  int in_ECX;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  undefined1 local_64 [8];
  float local_5c [22];
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_74;
  *param_1 = 0x7f7fffff;
  param_1[1] = 0x7f7fffff;
  param_1[2] = 0x7f7fffff;
  param_1[3] = 0xff7fffff;
  param_1[4] = 0xff7fffff;
  local_74 = 0;
  param_1[5] = 0xff7fffff;
  uVar13 = (uint)*(ushort *)(in_ECX + 400);
  local_68 = *(int *)(in_ECX + 0xc);
  local_70 = in_ECX;
  local_6c = uVar13;
  if (*(ushort *)(in_ECX + 400) != 0) {
    do {
      uVar15 = local_74 & 0xffff;
      iVar14 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) +
                       (uint)*(ushort *)(*(int *)(in_ECX + 0x18c) + uVar15 * 2) * 4);
      if (((((*(byte *)(iVar14 + 0xa4) & 1) != 0) && (0.0 <= *(float *)(iVar14 + 0x8c))) &&
          (0.0 <= *(float *)(iVar14 + 0x90))) && (0.0 <= *(float *)(iVar14 + 0x94))) {
        FUN_00ad2b40(local_64);
        pfVar16 = (float *)(uVar15 * 0x40 + local_68);
        pfVar17 = local_5c;
        iVar14 = 8;
        do {
          pfVar1 = pfVar17 + -2;
          fVar2 = *pfVar1;
          fVar3 = pfVar16[1];
          fVar4 = pfVar16[5];
          fVar5 = pfVar16[9];
          fVar6 = pfVar16[0xd];
          fVar7 = pfVar16[6];
          fVar8 = pfVar17[-1];
          fVar9 = pfVar16[2];
          fVar10 = *pfVar1;
          fVar11 = pfVar16[10];
          fVar12 = pfVar16[0xe];
          *pfVar1 = pfVar16[8] * *pfVar17 + *pfVar1 * *pfVar16 + pfVar16[4] * pfVar17[-1] +
                    pfVar16[0xc];
          pfVar17[-1] = fVar5 * *pfVar17 + pfVar17[-1] * fVar4 + fVar2 * fVar3 + fVar6;
          *pfVar17 = *pfVar17 * fVar11 + fVar9 * fVar10 + fVar7 * fVar8 + fVar12;
          FUN_00ad2ef0(pfVar1);
          pfVar17 = pfVar17 + 3;
          iVar14 = iVar14 + -1;
          in_ECX = local_70;
          uVar13 = local_6c;
        } while (iVar14 != 0);
      }
      local_74 = local_74 + param_2;
    } while ((ushort)local_74 < (ushort)uVar13);
  }
  __security_check_cookie(local_4 ^ (uint)&local_74);
  return;
}

