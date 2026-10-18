// FUN_00727f80 @ 00727f80 body=[[00727f80, 00727fad] [00727fb0, 007280c3]]


void FUN_00727f80(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar7 = param_2 - param_1 >> 2;
  iVar10 = iVar7 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar10) {
    local_c = iVar10 * 2 + 2;
    local_18 = iVar7;
    do {
      local_20 = *(undefined4 *)(param_1 + -4 + iVar10 * 4);
      iVar10 = iVar10 + -1;
      local_c = local_c + -2;
      bVar11 = local_c == iVar7;
      iVar5 = iVar10;
      iVar6 = local_c;
      local_8 = iVar10;
      if (local_c < iVar7) {
        do {
          iVar5 = iVar6;
          iVar7 = *(int *)(DAT_012588e8 + 0xbcc);
          iVar6 = *(int *)(*(int *)(*(int *)(param_1 + -4 + iVar5 * 4) + 0x28) + 8);
          iVar3 = *(int *)(*(int *)(*(int *)(param_1 + iVar5 * 4) + 0x28) + 8);
          uVar9 = (uint)*(byte *)(iVar6 + 0x72c + iVar7);
          uVar8 = (uint)*(byte *)(iVar6 + 0x784 + iVar7);
          uVar4 = *(uint *)(*(int *)(iVar7 + 0x76c) + uVar9 * 8);
          puVar1 = (uint *)(*(int *)(iVar7 + 0x7c4) + uVar8 * 8);
          iVar6 = (*(int *)(*(int *)(iVar7 + 0x76c) + 4 + uVar9 * 8) -
                  *(int *)(*(int *)(iVar7 + 0x7c4) + 4 + uVar8 * 8)) - (uint)(uVar4 < *puVar1);
          local_14 = (uint)*(byte *)(iVar3 + 0x72c + iVar7);
          local_10 = (uint)*(byte *)(iVar3 + 0x784 + iVar7);
          uVar8 = *(uint *)(*(int *)(iVar7 + 0x76c) + local_14 * 8);
          puVar2 = (uint *)(*(int *)(iVar7 + 0x7c4) + local_10 * 8);
          iVar7 = (*(int *)(*(int *)(iVar7 + 0x76c) + 4 + local_14 * 8) -
                  *(int *)(*(int *)(iVar7 + 0x7c4) + 4 + local_10 * 8)) - (uint)(uVar8 < *puVar2);
          if ((iVar6 <= iVar7) && ((iVar6 < iVar7 || (uVar4 - *puVar1 < uVar8 - *puVar2)))) {
            iVar5 = iVar5 + -1;
          }
          *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
          iVar6 = iVar5 * 2 + 2;
          bVar11 = iVar6 == local_18;
          iVar7 = local_18;
          local_8 = iVar5;
        } while (iVar6 < local_18);
      }
      iVar6 = iVar5;
      if (bVar11) {
        *(undefined4 *)(param_1 + iVar5 * 4) = *(undefined4 *)(param_1 + -4 + iVar7 * 4);
        iVar6 = iVar7 + -1;
      }
      local_1c = iVar10;
      local_8 = iVar5;
      FUN_007294e0(param_1,iVar6,iVar10,&local_20,param_3);
    } while (0 < iVar10);
  }
  return;
}

