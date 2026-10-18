// FUN_00454550 @ 00454550 body=[[00454550, 0045457a] [00454580, 004546c0]]


void FUN_00454550(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  int in_ECX;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  iVar5 = param_1;
  local_8 = in_ECX - param_1 >> 2;
  iVar11 = local_8 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar11) {
    local_c = iVar11 * 2 + 2;
    do {
      local_28 = *(undefined4 *)(iVar5 + -4 + iVar11 * 4);
      iVar11 = iVar11 + -1;
      local_c = local_c + -2;
      iVar4 = iVar11;
      for (iVar10 = local_c; iVar10 < local_8; iVar10 = iVar10 * 2 + 2) {
        local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                        100);
        iVar3 = *(int *)(*(int *)(iVar5 + iVar10 * 4) + 0x20);
        puVar9 = (undefined4 *)(*(undefined4 **)(iVar2 + 8))[1];
        cVar1 = *(char *)((int)puVar9 + 0x15);
        local_10 = *(undefined4 **)(iVar2 + 8);
        while (cVar1 == '\0') {
          if ((int)puVar9[3] < iVar3) {
            puVar6 = (undefined4 *)puVar9[2];
            puVar9 = local_10;
          }
          else {
            puVar6 = (undefined4 *)*puVar9;
          }
          local_10 = puVar9;
          puVar9 = puVar6;
          cVar1 = *(char *)((int)puVar6 + 0x15);
        }
        local_18 = *(undefined4 **)(iVar2 + 8);
        if ((local_10 == local_18) || (iVar3 < (int)local_10[3])) {
          local_14 = local_18;
          ppuVar8 = &local_14;
        }
        else {
          ppuVar8 = &local_10;
        }
        puVar9 = *(undefined4 **)(iVar2 + 8);
        if ((*ppuVar8 != puVar9) && (*(char *)(*ppuVar8 + 4) == '\x01')) {
          iVar2 = *(int *)(*(int *)(iVar5 + -4 + iVar10 * 4) + 0x20);
          cVar1 = *(char *)((int)puVar9[1] + 0x15);
          local_10 = puVar9;
          puVar6 = (undefined4 *)puVar9[1];
          while (cVar1 == '\0') {
            if ((int)puVar6[3] < iVar2) {
              puVar7 = (undefined4 *)puVar6[2];
              puVar6 = local_10;
            }
            else {
              puVar7 = (undefined4 *)*puVar6;
            }
            local_10 = puVar6;
            puVar6 = puVar7;
            cVar1 = *(char *)((int)puVar7 + 0x15);
          }
          if ((local_10 == local_18) || (iVar2 < (int)local_10[3])) {
            local_20 = local_18;
            ppuVar8 = &local_20;
          }
          else {
            ppuVar8 = &local_10;
          }
          if ((*ppuVar8 == puVar9) || (*(char *)(*ppuVar8 + 4) == '\0')) {
            iVar10 = iVar10 + -1;
          }
        }
        *(undefined4 *)(iVar5 + iVar4 * 4) = *(undefined4 *)(iVar5 + iVar10 * 4);
        iVar4 = iVar10;
      }
      param_1 = iVar4;
      if (iVar10 == local_8) {
        param_1 = local_8 + -1;
        *(undefined4 *)(iVar5 + iVar4 * 4) = *(undefined4 *)(iVar5 + -4 + local_8 * 4);
      }
      local_24 = iVar11;
      FUN_00454ca0(iVar5,param_1,iVar11,&local_28,param_2);
    } while (0 < iVar11);
  }
  return;
}

