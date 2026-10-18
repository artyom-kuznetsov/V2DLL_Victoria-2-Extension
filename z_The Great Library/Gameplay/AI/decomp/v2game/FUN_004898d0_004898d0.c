// FUN_004898d0 @ 004898d0 body=[[004898d0, 0048998c]]


void FUN_004898d0(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_c;
  
  iVar6 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  iVar9 = 0;
  if (0 < iVar6) {
    local_c = 0;
    do {
      iVar8 = *(int *)(param_1 + 0x12a0) + local_c;
      if (*(char *)(iVar8 + 0x10) == '\0') {
        uVar10 = (uint)*(byte *)(param_1 + 0x11e4 + iVar9);
        uVar4 = *(uint *)(*(int *)(param_1 + 0x1224) + uVar10 * 8);
        uVar7 = uVar4 - *(uint *)(iVar8 + 8);
        iVar8 = (*(int *)(*(int *)(param_1 + 0x1224) + 4 + uVar10 * 8) - *(int *)(iVar8 + 0xc)) -
                (uint)(uVar4 < *(uint *)(iVar8 + 8));
        if ((DAT_0125ba14 <= iVar8) && ((DAT_0125ba14 < iVar8 || (DAT_0125ba10 < uVar7)))) {
          bVar3 = *(byte *)(iVar9 + 8 + param_2);
          if (bVar3 == 0) {
            *(char *)(iVar9 + 8 + param_2) =
                 (char)(*(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x48) >> 3);
            FUN_00423920();
          }
          else {
            iVar5 = *(int *)(param_2 + 0x48);
            puVar2 = (uint *)(iVar5 + (uint)bVar3 * 8);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 + uVar7;
            piVar1 = (int *)(iVar5 + (uint)bVar3 * 8 + 4);
            *piVar1 = *piVar1 + iVar8 + (uint)CARRY4(uVar4,uVar7);
          }
        }
      }
      local_c = local_c + 0x18;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar6);
  }
  return;
}

