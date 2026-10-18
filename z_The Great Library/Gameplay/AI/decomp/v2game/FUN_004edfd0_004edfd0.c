// FUN_004edfd0 @ 004edfd0 body=[[004edfd0, 004edffb] [004ee000, 004ee14a]]


void FUN_004edfd0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_ESI;
  int iVar9;
  int local_18;
  int local_14;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) >> 3;
  local_18 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x118) + local_18 * 8);
      iVar5 = *(int *)(*param_2 + *(int *)(iVar1 + 0x28) * 4);
      iVar7 = 0;
      if (0 < iVar5) {
        iVar6 = *(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) >> 4;
        local_14 = 0;
        local_8 = iVar5;
        if (0 < iVar6) {
          do {
            if (iVar5 == 0) goto LAB_004ee133;
            if (*(int *)(*(int *)(*(int *)(unaff_ESI + 0x10) + 8 + iVar7) + 0x68) == iVar1) {
              iVar2 = *(int *)(*(int *)(unaff_ESI + 0x10) + 8 + iVar7);
              if (*(char *)(*(int *)(iVar2 + 0x68) + 0x40) == '\0') {
                iVar9 = *(int *)(iVar2 + 0x58);
              }
              else {
                iVar9 = *(int *)(iVar2 + 0x60);
              }
              iVar9 = *(int *)(iVar2 + 0x58) - iVar9;
              if (iVar9 != 0) {
                if (iVar5 <= iVar9) {
                  iVar9 = iVar5;
                }
                piVar4 = (int *)(*(int *)(*(int *)(unaff_ESI + 0x10) + 8 + iVar7) + 0x60);
                *piVar4 = *piVar4 + iVar9;
                piVar4 = (int *)(*(int *)(unaff_ESI + 0x10) + 0xc + iVar7);
                *piVar4 = *piVar4 + iVar9;
                local_8 = iVar5 - iVar9;
                iVar5 = *(int *)(*(int *)(unaff_ESI + 0x10) + 8 + iVar7);
                piVar4 = (int *)FUN_004c8d10();
                *piVar4 = *piVar4 + iVar9;
                *(int *)(unaff_ESI + 0x48) = *(int *)(unaff_ESI + 0x48) + iVar9;
                piVar4 = (int *)(*(int *)(unaff_ESI + 0x5c) +
                                *(int *)(*(int *)(iVar5 + 0x68) + 0x28) * 4);
                *piVar4 = *piVar4 + iVar9;
                iVar5 = local_8;
              }
            }
            local_14 = local_14 + 1;
            iVar7 = iVar7 + 0x10;
          } while (local_14 < iVar6);
        }
        if (0 < iVar5) {
          iVar7 = *(int *)(unaff_ESI + 8);
          if (iVar7 == 0) {
            FUN_004ee8b0(unaff_ESI,iVar1,&local_8);
          }
          else {
            uVar8 = *(uint *)(iVar7 + 0x48);
            while (((*(uint *)(iVar7 + 0x48) <= uVar8 && (uVar8 < *(uint *)(iVar7 + 0x4c))) &&
                   (iVar5 != 0))) {
              uVar8 = uVar8 + 4;
              FUN_004ee8b0(unaff_ESI,iVar1,&local_8);
              iVar5 = local_8;
            }
          }
        }
      }
LAB_004ee133:
      local_18 = local_18 + 1;
    } while (local_18 < iVar3);
  }
  return;
}

