// FUN_00b0d940 @ 00b0d940 body=[[00b0d940, 00b0dae8]]


void FUN_00b0d940(float param_1,uint param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_4;
  
  fVar6 = param_1;
  local_4 = *(int *)(in_ECX + 0x20);
  if (local_4 != 0) {
    iVar10 = 0;
    do {
      iVar14 = *(int *)(in_ECX + 0x1c);
      cVar7 = (char)*(undefined4 *)(iVar14 + 4 + iVar10);
      if (cVar7 != '\0') {
        uVar11 = 0;
        if (cVar7 != '\0') {
          do {
            if (*(char *)(iVar14 + 4 + iVar10) == '\x01') break;
            iVar14 = *(int *)(in_ECX + 0xc);
            uVar12 = uVar11 & 0xff;
            if (fVar6 <= *(float *)(iVar14 + (*(int *)(iVar10 + *(int *)(in_ECX + 0x1c)) + uVar12) *
                                             8)) {
              uVar11 = uVar11 + 1;
            }
            else {
              iVar13 = *(int *)(*(int *)(in_ECX + 0x1c) + iVar10);
              uVar8 = *(int *)(*(int *)(in_ECX + 0x1c) + 4 + iVar10) - 1;
              if (uVar12 != uVar8) {
                iVar9 = uVar8 + iVar13;
                iVar13 = uVar12 + iVar13;
                *(undefined4 *)(iVar14 + iVar13 * 8) = *(undefined4 *)(iVar14 + iVar9 * 8);
                *(undefined4 *)(iVar14 + 4 + iVar13 * 8) = *(undefined4 *)(iVar14 + 4 + iVar9 * 8);
              }
              piVar2 = (int *)(iVar10 + 4 + *(int *)(in_ECX + 0x1c));
              *piVar2 = *piVar2 + -1;
            }
            iVar14 = *(int *)(in_ECX + 0x1c);
          } while (uVar11 < *(byte *)(iVar14 + 4 + iVar10));
        }
        iVar14 = *(int *)(in_ECX + 0x1c);
        bVar4 = *(byte *)(iVar14 + 4 + iVar10);
        while (param_2 < bVar4) {
          uVar12 = (uint)*(byte *)(iVar14 + 4 + iVar10);
          uVar11 = 0;
          param_1 = 0.0;
          if (uVar12 != 0) {
            fVar5 = 999999.9;
            do {
              fVar3 = *(float *)(*(int *)(in_ECX + 0xc) +
                                ((uVar11 & 0xff) + *(int *)(iVar10 + *(int *)(in_ECX + 0x1c))) * 8);
              if (fVar3 < fVar5) {
                fVar5 = fVar3;
                param_1 = (float)uVar11;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar12);
          }
          iVar14 = *(int *)(*(int *)(in_ECX + 0x1c) + iVar10);
          uVar11 = *(int *)(*(int *)(in_ECX + 0x1c) + 4 + iVar10) - 1;
          if (((uint)param_1 & 0xff) != uVar11) {
            iVar13 = *(int *)(in_ECX + 0xc);
            iVar9 = uVar11 + iVar14;
            iVar14 = ((uint)param_1 & 0xff) + iVar14;
            *(undefined4 *)(iVar13 + iVar14 * 8) = *(undefined4 *)(iVar13 + iVar9 * 8);
            *(undefined4 *)(iVar13 + 4 + iVar14 * 8) = *(undefined4 *)(iVar13 + 4 + iVar9 * 8);
          }
          piVar2 = (int *)(iVar10 + 4 + *(int *)(in_ECX + 0x1c));
          *piVar2 = *piVar2 + -1;
          iVar14 = *(int *)(in_ECX + 0x1c);
          bVar4 = *(byte *)(iVar14 + 4 + iVar10);
        }
        uVar12 = (uint)*(byte *)(iVar10 + 4 + *(int *)(in_ECX + 0x1c));
        uVar11 = 0;
        fVar5 = 0.0;
        if (uVar12 != 0) {
          do {
            uVar8 = uVar11 & 0xff;
            uVar11 = uVar11 + 1;
            fVar5 = fVar5 + *(float *)(*(int *)(in_ECX + 0xc) +
                                      (uVar8 + *(int *)(iVar10 + *(int *)(in_ECX + 0x1c))) * 8);
          } while (uVar11 < uVar12);
          if (1.0 <= fVar5) goto LAB_00b0dac4;
        }
        uVar11 = 0;
        if (uVar12 != 0) {
          do {
            iVar14 = *(int *)(iVar10 + *(int *)(in_ECX + 0x1c));
            iVar13 = iVar14 + uVar11;
            pfVar1 = (float *)(*(int *)(in_ECX + 0xc) + ((uVar11 & 0xff) + iVar14) * 8);
            uVar11 = uVar11 + 1;
            *pfVar1 = (*(float *)(*(int *)(in_ECX + 0xc) + iVar13 * 8) / fVar5) * (1.0 - fVar5) +
                      *pfVar1;
          } while (uVar11 < uVar12);
        }
      }
LAB_00b0dac4:
      iVar10 = iVar10 + 8;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  FUN_00b0df00();
  return;
}

