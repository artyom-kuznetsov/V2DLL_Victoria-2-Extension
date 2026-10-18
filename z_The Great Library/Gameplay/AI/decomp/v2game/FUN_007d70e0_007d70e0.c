// FUN_007d70e0 @ 007d70e0 body=[[007d70e0, 007d7275]]


void FUN_007d70e0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int local_c;
  
  iVar6 = 0;
  local_c = 0;
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + local_10 * 4 + 4);
      for (iVar8 = *(int *)(*(int *)(param_1 + 0x8c) + local_10 * 4); iVar8 < iVar3;
          iVar8 = iVar8 + 1) {
        if (((*(char *)(iVar8 + *(int *)(param_1 + 0x94)) != '\0') &&
            ((int)*(short *)(*(int *)(param_1 + 0x90) + iVar8 * 2) < *(int *)(param_1 + 0x40) + -2))
           && (local_10 < *(int *)(param_1 + 0x44) + -2)) {
          iVar4 = *(int *)(param_1 + 0x9c);
          pbVar1 = (byte *)(iVar4 + 3 + iVar8 * 4);
          local_c = iVar6 + 2;
          bVar2 = *pbVar1;
          bVar5 = bVar2 & 7;
          iVar7 = *(short *)(*(int *)(param_1 + 0x98) + iVar6 * 2) + iVar8;
          iVar6 = *(short *)(*(int *)(param_1 + 0x98) + 2 + iVar6 * 2) + iVar8;
          if ((bVar5 == 1) || (bVar5 == 2)) {
            bVar2 = *(byte *)(iVar4 + 2 + iVar8 * 4);
            if ((bVar2 & 2) != 0) {
              pbVar1 = (byte *)(iVar4 + -2 + iVar8 * 4);
              *pbVar1 = *pbVar1 | 1;
            }
            if ((bVar2 & 1) != 0) {
              pbVar1 = (byte *)(iVar4 + 6 + iVar8 * 4);
              *pbVar1 = *pbVar1 | 2;
            }
            if ((bVar2 & 4) != 0) {
              pbVar1 = (byte *)(iVar4 + 2 + iVar6 * 4);
              *pbVar1 = *pbVar1 | 8;
            }
            if ((bVar2 & 8) != 0) {
              pbVar1 = (byte *)(iVar4 + 2 + iVar7 * 4);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          else if (2 < bVar5) {
            if (bVar5 == 3) {
              if ((*(char *)(iVar4 + -1 + iVar8 * 4) == '\t') ||
                 (*(char *)(iVar4 + 3 + iVar6 * 4) == '\t')) {
LAB_007d720f:
                *pbVar1 = bVar2 | 8;
              }
              else {
                *pbVar1 = bVar2 & 0xf7;
              }
            }
            else if (bVar5 == 4) {
              if ((*(char *)(iVar4 + -1 + iVar8 * 4) == '\n') ||
                 (*(char *)(iVar4 + 3 + iVar7 * 4) == '\n')) goto LAB_007d720f;
              *pbVar1 = bVar2 & 0xf7;
            }
            else if (bVar5 == 5) {
              if ((*(char *)(iVar4 + 7 + iVar8 * 4) == '\t') ||
                 (*(char *)(iVar4 + 3 + iVar7 * 4) == '\t')) goto LAB_007d720f;
              *pbVar1 = bVar2 & 0xf7;
            }
            else if (bVar5 == 6) {
              if ((*(char *)(iVar4 + 7 + iVar8 * 4) == '\n') ||
                 (*(char *)(iVar4 + 3 + iVar6 * 4) == '\n')) goto LAB_007d720f;
              *pbVar1 = bVar2 & 0xf7;
            }
          }
        }
        iVar6 = local_c;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_1 + 0x44));
  }
  return;
}

