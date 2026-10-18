// FUN_0085fc90 @ 0085fc90 body=[[0085fc90, 0085fe36]]


void FUN_0085fc90(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_14;
  
  iVar6 = DAT_012586dc;
  *(undefined4 *)(param_1 + 0x150) = 0;
  uVar1 = *(uint *)(param_1 + 8);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  if (*(char *)(iVar2 + 0x31) == '\0') {
    iVar2 = *(int *)(iVar2 + 0x1404);
    if (iVar2 < *(int *)(*(int *)(iVar6 + 0x40) + 0x1c) / 1000 + 1) {
      iVar6 = iVar2 + -2;
      if (iVar2 + -2 < 0) {
        iVar6 = iVar2;
      }
      if (((0 < iVar6) &&
          (iVar6 < *(int *)(DAT_012588e8 + 0xbd4) - *(int *)(DAT_012588e8 + 0xbd0) >> 2)) &&
         (*(int *)(*(int *)(DAT_012588e8 + 0xbd0) + iVar6 * 4) != 0)) {
        uVar4 = FUN_0085fbf0();
        *(undefined4 *)(param_1 + 0x150) = uVar4;
      }
    }
  }
  else {
    if (*(int *)(iVar2 + 0x1400) + 0x18 < *(int *)(DAT_012588e8 + 0xb0c)) {
      *(undefined4 *)(param_1 + 0x150) = 7;
      return;
    }
    FUN_005f80b0();
    if (1 < *(int *)(iVar2 + 0x1404)) {
      puVar3 = (uint *)FUN_005f80b0();
      uVar5 = (uint)(*puVar3 < uVar1);
      bVar7 = (int)((puVar3[1] - local_14) - uVar5) < 0;
      if ((puVar3[1] - local_14 == uVar5 || bVar7) && ((bVar7 || (*puVar3 - uVar1 < 0x140000)))) {
        uVar4 = FUN_0085fbf0();
        *(undefined4 *)(param_1 + 0x150) = uVar4;
      }
    }
    if (*(int *)(iVar2 + 0x1404) <
        *(int *)(DAT_012588e8 + 0xbd4) - *(int *)(DAT_012588e8 + 0xbd0) >> 2) {
      puVar3 = (uint *)FUN_005f80b0();
      bVar7 = (int)((local_14 - puVar3[1]) - (uint)(uVar1 < *puVar3)) < 0;
      if ((local_14 - puVar3[1] == (uint)(uVar1 < *puVar3) || bVar7) &&
         ((bVar7 || (uVar1 - *puVar3 < 0x140000)))) {
        uVar1 = *(uint *)(param_1 + 0x150);
        uVar5 = FUN_0085fbf0();
        *(uint *)(param_1 + 0x150) = uVar5 | uVar1;
        return;
      }
    }
  }
  return;
}

