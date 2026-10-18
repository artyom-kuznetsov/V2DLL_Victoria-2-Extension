// FUN_0048b190 @ 0048b190 body=[[0048b190, 0048b28f]]


void FUN_0048b190(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_ESI;
  int *piVar8;
  uint uVar9;
  int local_10;
  int local_c;
  
  local_10 = (*(int *)(param_1 + 0x7d8) - *(int *)(param_1 + 0x7d4)) / 0x58;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  if (1 < local_10) {
    piVar8 = *(int **)(DAT_012588e8 + 0xadc);
    local_10 = local_10 + -1;
    local_c = 0x58;
    do {
      piVar8 = piVar8 + 1;
      iVar5 = *piVar8;
      if (((*(int *)(iVar5 + 0x20) != 0) &&
          (((*(char *)(iVar5 + 0x1c) != 'R' || (*(char *)(iVar5 + 0x1d) != 'E')) ||
           (*(char *)(iVar5 + 0x1e) != 'B')))) &&
         (iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x20) * 4),
         0 < (int)(*(int *)(iVar5 + 0x9dc) - *(int *)(iVar5 + 0x9d8) & 0xfffffffcU))) {
        iVar5 = *(int *)(param_1 + 0x7d4) + local_c;
        iVar4 = *(int *)(param_1 + 0x814) + local_c;
        uVar9 = (uint)*(byte *)(*(int *)(param_2 + 8) + 8 + iVar5);
        uVar6 = (uint)*(byte *)(*(int *)(param_2 + 8) + 8 + iVar4);
        iVar5 = *(int *)(iVar5 + 0x48);
        uVar2 = *(uint *)(iVar5 + uVar9 * 8);
        iVar4 = *(int *)(iVar4 + 0x48);
        puVar1 = (uint *)(iVar4 + uVar6 * 8);
        uVar3 = *puVar1;
        uVar7 = uVar2 - *puVar1;
        iVar5 = *(int *)(iVar5 + 4 + uVar9 * 8);
        iVar4 = *(int *)(iVar4 + 4 + uVar6 * 8);
        uVar6 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + uVar7;
        unaff_ESI[1] = unaff_ESI[1] + ((iVar5 - iVar4) - (uint)(uVar2 < uVar3)) +
                       (uint)CARRY4(uVar6,uVar7);
      }
      local_c = local_c + 0x58;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

