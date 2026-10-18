// FUN_00858d90 @ 00858d90 body=[[00858d90, 0085917c]]


int FUN_00858d90(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  int iStack_3c;
  uint local_38;
  int iStack_34;
  undefined4 local_2c;
  uint local_28;
  uint *puStack_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  char local_9;
  
  local_18 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  iVar3 = *(int *)(*(int *)(local_18 + 0xe64) + 0x50);
  local_48 = *(undefined4 *)(iVar3 + 0x1c);
  local_44 = *(int *)(iVar3 + 0x20);
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_44 * 4);
  if (0 < (int)(*(int *)(iVar3 + 0x9dc) - *(int *)(iVar3 + 0x9d8) & 0xfffffffcU)) {
    local_48 = 0x2d2d2d;
    local_44 = 0;
  }
  local_2c = CONCAT31(local_2c._1_3_,local_44 != 0);
  iVar10 = *(int *)(param_1 + 0x38) * 0x58 + *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x7d4);
  local_28 = 0;
  puStack_24 = (uint *)0x0;
  iVar3 = 1;
  iVar5 = *(int *)(iVar10 + 0x4c) - *(int *)(iVar10 + 0x48) >> 3;
  local_40 = 0;
  iStack_3c = 0;
  local_1c = -9999;
  local_20 = 0;
  local_38 = 0;
  iStack_34 = 0;
  if (1 < iVar5) {
    if (1 < iVar5 + -1) {
      uVar8 = iVar5 - 3U >> 1;
      puVar4 = (uint *)(*(int *)(iVar10 + 0x48) + 8);
      iVar9 = uVar8 + 1;
      iVar3 = uVar8 + 2 + iVar9;
      do {
        bVar11 = CARRY4(local_28,*puVar4);
        local_28 = local_28 + *puVar4;
        puStack_24 = (uint *)((int)puStack_24 + puVar4[1] + (uint)bVar11);
        bVar11 = CARRY4(local_40,puVar4[2]);
        local_40 = local_40 + puVar4[2];
        iStack_3c = iStack_3c + puVar4[3] + (uint)bVar11;
        puVar4 = puVar4 + 4;
        iVar9 = iVar9 + -1;
        local_10 = iVar3;
      } while (iVar9 != 0);
    }
    if (iVar3 < iVar5) {
      local_38 = *(uint *)(*(int *)(iVar10 + 0x48) + iVar3 * 8);
      iStack_34 = *(int *)(*(int *)(iVar10 + 0x48) + 4 + iVar3 * 8);
    }
    bVar11 = CARRY4(local_38,local_28 + local_40);
    local_38 = local_38 + local_28 + local_40;
    iStack_34 = iStack_34 + (int)puStack_24 + iStack_3c + (uint)CARRY4(local_28,local_40) +
                (uint)bVar11;
  }
  piVar6 = *(int **)(DAT_012588e8 + 0xadc);
  puStack_24 = (uint *)(DAT_012588e8 + 0xadc);
  iVar3 = local_18;
  while (((int *)*puStack_24 <= piVar6 && (piVar6 < (int *)puStack_24[1]))) {
    iVar5 = *piVar6;
    piVar6 = piVar6 + 1;
    pcVar1 = (char *)(iVar5 + 0x1c);
    if (((0 < (int)(*(int *)(iVar5 + 0x9dc) - *(int *)(iVar5 + 0x9d8) & 0xfffffffcU)) &&
        (((*pcVar1 != 'R' || (*(char *)(iVar5 + 0x1d) != 'E')) || (*(char *)(iVar5 + 0x1e) != 'B')))
        ) && ((*(int *)(iVar5 + 0x20) != *(int *)(param_1 + 0x38) &&
              (*(char *)(iVar3 + 0x31) != '\0')))) {
      local_14 = *(undefined4 *)pcVar1;
      iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x20) * 4);
      if ((*(char *)(iVar10 + 0x31) == '\0') &&
         (((*(char *)(iVar10 + 0x12d0) != '\0' && (*(char *)(iVar10 + 0xb60) != '\0')) &&
          (*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + *(int *)(iVar5 + 0x20) * 4) + 0x34) == 0))))
      {
        local_10 = FUN_0085ee00(iVar3 + 0x364,pcVar1,local_2c,&local_48,0,local_38,iStack_34);
        iVar3 = *(int *)(iVar5 + 0x1580);
        local_40 = *(uint *)(iVar3 + *(int *)(param_1 + 0x38) * 8);
        iStack_3c = *(int *)(iVar3 + 4 + *(int *)(param_1 + 0x38) * 8);
        FUN_005404a0(iVar5);
        local_9 = '\0';
        if ((local_4c < 0) || ((local_4c < 1 && (local_50 == 0)))) {
          FUN_00401000(((float)local_10 + 0.0005) * 1000.0);
          iVar3 = FUN_00b31c00();
          FUN_00401000(0x44961000);
          iVar10 = FUN_00b31c00();
          iVar3 = __alldiv((longlong)iVar10 * (longlong)iVar3,1000,0);
          local_10 = iVar3 / 1000;
        }
        else {
          piVar7 = *(int **)(local_18 + 0x3c0);
          if (piVar7 != (int *)0x0) {
            do {
              iVar10 = *piVar7;
              iVar9 = *(int *)(iVar10 + 0xc);
              iVar2 = *(int *)(iVar3 + 4 + iVar9 * 8);
              piVar7 = (int *)piVar7[2];
              if ((iStack_3c <= iVar2) &&
                 (((iStack_3c < iVar2 || (local_40 <= *(uint *)(iVar3 + iVar9 * 8))) &&
                  (0 < *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(iVar10 + 0xc) * 4) + 0x13f0) +
                               *(int *)(iVar5 + 0x20) * 4))))) {
                local_9 = '\x01';
              }
            } while (piVar7 != (int *)0x0);
            if (local_9 != '\0') {
              FUN_00401000(((float)local_10 + 0.0005) * 1000.0);
              iVar3 = FUN_00b31c00();
              FUN_00401000(0x44961000);
              iVar10 = FUN_00b31c00();
              iVar3 = __alldiv((longlong)iVar10 * (longlong)iVar3,1000,0);
              local_10 = iVar3 / 1000 + 0x1e;
            }
          }
        }
        iVar3 = local_18;
        if (local_1c < local_10) {
          local_20 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x20) * 4);
          local_1c = local_10;
        }
      }
    }
  }
  if ((local_1c < 0xb) || (local_20 == 0)) {
    local_20 = 0;
  }
  return local_20;
}

