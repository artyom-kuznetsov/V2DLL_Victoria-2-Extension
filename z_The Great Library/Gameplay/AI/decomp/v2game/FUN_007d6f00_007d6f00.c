// FUN_007d6f00 @ 007d6f00 body=[[007d6f00, 007d70d4]]


void FUN_007d6f00(int param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_c;
  
  iVar11 = 0;
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x8c) + local_c * 4 + 4);
      for (iVar9 = *(int *)(*(int *)(param_1 + 0x8c) + local_c * 4); iVar9 < iVar6;
          iVar9 = iVar9 + 1) {
        if (((*(char *)(iVar9 + *(int *)(param_1 + 0x94)) != '\0') &&
            (iVar8 = (int)*(short *)(*(int *)(param_1 + 0x90) + iVar9 * 2),
            iVar8 < *(int *)(param_1 + 0x40) + -2)) && (local_c < *(int *)(param_1 + 0x44) + -2)) {
          iVar7 = *(int *)(param_1 + 0x9c);
          iVar1 = iVar7 + -4 + iVar9 * 4;
          iVar10 = *(short *)(*(int *)(param_1 + 0x98) + 2 + iVar11 * 2) + iVar9;
          bVar4 = *(byte *)(iVar7 + 3 + iVar9 * 4);
          iVar12 = *(short *)(*(int *)(param_1 + 0x98) + iVar11 * 2) + iVar9;
          pbVar2 = (byte *)(iVar7 + 3 + iVar9 * 4);
          pbVar3 = (byte *)(iVar7 + 2 + iVar9 * 4);
          iVar11 = iVar11 + 2;
          if (*(char *)(iVar7 + 2 + iVar9 * 4) == '\0') {
            if (bVar4 != 0) {
              *pbVar2 = bVar4 & 0xf7;
            }
          }
          else if ((bVar4 != 0) &&
                  (bVar5 = *(byte *)(*(int *)(DAT_01258708 + 0x20) * local_c +
                                     *(int *)(DAT_01258708 + 0xc) + iVar8), (bVar5 & 0xf) != 0)) {
            if (((*pbVar3 & 5) != 0) && ((bVar5 & 1) != 0)) {
              *pbVar2 = bVar4 | 8;
              if ((*(byte *)(iVar7 + 2 + iVar10 * 4) & 8) == 0) {
                *pbVar3 = *pbVar3 & 0xfb;
              }
              if ((*(byte *)(iVar7 + 6 + iVar9 * 4) & 2) == 0) {
                *pbVar3 = *pbVar3 & 0xfe;
              }
            }
            if (((*pbVar3 & 10) != 0) && ((bVar5 & 2) != 0)) {
              *pbVar2 = *pbVar2 | 8;
              if ((*(byte *)(iVar7 + 2 + iVar12 * 4) & 4) == 0) {
                *pbVar3 = *pbVar3 & 0xf7;
              }
              if ((*(byte *)(iVar1 + 2) & 1) == 0) {
                *pbVar3 = *pbVar3 & 0xfd;
              }
            }
            if (((*pbVar3 & 9) != 0) && ((bVar5 & 8) != 0)) {
              *pbVar2 = *pbVar2 | 8;
              if ((*(byte *)(iVar7 + 2 + iVar12 * 4) & 4) == 0) {
                *pbVar3 = *pbVar3 & 0xf7;
              }
              if ((*(byte *)(iVar7 + 6 + iVar9 * 4) & 2) == 0) {
                *pbVar3 = *pbVar3 & 0xfe;
              }
            }
            if (((*pbVar3 & 6) != 0) && ((bVar5 & 4) != 0)) {
              *pbVar2 = *pbVar2 | 8;
              if ((*(byte *)(iVar7 + 2 + iVar10 * 4) & 8) == 0) {
                *pbVar3 = *pbVar3 & 0xfb;
              }
              if ((*(byte *)(iVar1 + 2) & 1) == 0) {
                *pbVar3 = *pbVar3 & 0xfd;
              }
            }
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x44));
  }
  return;
}

