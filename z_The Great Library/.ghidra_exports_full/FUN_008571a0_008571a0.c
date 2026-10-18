// FUN_008571a0 @ 008571a0 body=[[008571a0, 00857429]]


int FUN_008571a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_30;
  int local_28;
  
  iVar10 = *(int *)(DAT_012588e8 + 0xbcc);
  iVar1 = *(int *)(param_1 + 300);
  iVar8 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  if ((((DAT_01258734 != 0) && (iVar1 != DAT_01258734 + 0x10)) && (iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x138) == 1)) {
    iVar2 = *(int *)(param_2 + 0xbcc);
    if (((*(char *)(*(int *)(param_1 + 0x58) + *(int *)(iVar2 + 0x2fc)) != '\0') ||
        (*(char *)(param_1 + 0x130) != '\0')) &&
       ((iVar7 = 0, *(char *)(param_1 + 0x130) != '\0' ||
        (0 < *(int *)(*(int *)(iVar2 + 8) + *(int *)(param_1 + 0x58) * 4))))) {
      local_30 = 0;
      local_28 = 0;
      if (0 < iVar8) {
        do {
          uVar3 = (uint)*(byte *)(iVar1 + 0x2c + iVar7);
          iVar5 = *(int *)(*(int *)(iVar1 + 0x6c) + 4 + uVar3 * 8);
          if ((-1 < iVar5) && ((0 < iVar5 || (*(int *)(*(int *)(iVar1 + 0x6c) + uVar3 * 8) != 0))))
          {
            uVar3 = (uint)*(byte *)(iVar10 + 0x180 + iVar7);
            uVar4 = (uint)*(byte *)(iVar10 + 0x10 + iVar7);
            iVar5 = (*(uint *)(*(int *)(iVar10 + 0x50) + uVar4 * 8) >> 0xf |
                    *(int *)(*(int *)(iVar10 + 0x50) + 4 + uVar4 * 8) << 0x11) -
                    (*(uint *)(*(int *)(iVar10 + 0x1c0) + uVar3 * 8) >> 0xf |
                    *(int *)(*(int *)(iVar10 + 0x1c0) + 4 + uVar3 * 8) << 0x11);
            if (iVar5 < 0) {
              local_30 = local_30 + -100000;
            }
            else {
              uVar3 = (uint)*(byte *)(iVar10 + 0x288 + iVar7);
              local_30 = local_30 +
                         (*(uint *)(*(int *)(iVar10 + 0x2c8) + uVar3 * 8) >> 0xf |
                         *(int *)(*(int *)(iVar10 + 0x2c8) + 4 + uVar3 * 8) << 0x11) * iVar5;
            }
            local_28 = local_28 + 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
      }
      local_30 = local_30 / local_28;
      iVar8 = *(int *)(*(int *)(iVar1 + 0x80) + 8);
      uVar3 = (uint)*(byte *)(iVar8 + 0x180 + iVar10);
      uVar9 = (uint)*(byte *)(iVar8 + 0x10 + iVar10);
      uVar4 = (uint)*(byte *)(iVar8 + 0x288 + iVar10);
      iVar8 = (*(uint *)(*(int *)(iVar10 + 0x1c0) + uVar3 * 8) >> 0xf |
              *(int *)(*(int *)(iVar10 + 0x1c0) + 4 + uVar3 * 8) << 0x11) -
              (*(uint *)(*(int *)(iVar10 + 0x50) + uVar9 * 8) >> 0xf |
              *(int *)(*(int *)(iVar10 + 0x50) + 4 + uVar9 * 8) << 0x11);
      iVar10 = (*(uint *)(*(int *)(iVar10 + 0x2c8) + uVar4 * 8) >> 0xf |
               *(int *)(*(int *)(iVar10 + 0x2c8) + 4 + uVar4 * 8) << 0x11) * iVar8;
      if (iVar8 < 0) {
        iVar10 = iVar10 + -10000;
      }
      iVar8 = 0;
      piVar6 = (int *)(iVar2 + 0x1b0);
      local_28 = 4;
      do {
        iVar7 = *(int *)(*piVar6 + *(int *)(*(int *)(iVar1 + 0x80) + 8) * 4);
        if (*(char *)(iVar1 + 0x13c) == '\0') {
          if (*(char *)(iVar1 + 0x13d) != '\0') {
            iVar7 = iVar7 + *(int *)(iVar2 + 0x274);
          }
        }
        else {
          iVar7 = iVar7 + *(int *)(iVar2 + 0x270);
        }
        iVar8 = iVar8 + iVar7;
        piVar6 = piVar6 + 4;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
      return (iVar8 / 1000) * 100 + local_30 + iVar10;
    }
  }
  return 0;
}

