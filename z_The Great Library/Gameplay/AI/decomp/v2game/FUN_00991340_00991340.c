// FUN_00991340 @ 00991340 body=[[00991340, 009913e7] [009913eb, 009914aa] [009914ae, 009915c6] [009915ca, 009915ee] [009915f2, 00991613]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 * FUN_00991340(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *****pppppuVar5;
  BOOL BVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  UINT local_6ec [2];
  DWORD aDStack_6e4 [3];
  char *local_6d8;
  size_t sStack_6d4;
  undefined1 local_6c4 [520];
  char local_4bc [520];
  undefined1 local_2b4 [548];
  undefined1 local_90 [48];
  size_t local_60;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined8 local_38;
  undefined4 ****local_30 [4];
  int local_20;
  uint local_1c;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b581b6;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffff930;
  sStack_6d4 = 0xe36be0;
  local_38 = (ulonglong)(uint)local_38;
  local_6d8 = (char *)0x991376;
  ExceptionList = &pvStack_10;
  iVar3 = PHYSFS_exists();
  if (iVar3 == 0) {
    sStack_6d4 = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_6d8 = "";
    *param_1 = 0;
    aDStack_6e4[2] = 0x991640;
    FUN_00409350();
  }
  else {
    local_8 = 0;
    sStack_6d4 = 0xb;
    local_6d8 = "userdir.txt";
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    aDStack_6e4[2] = 0x9913a2;
    FUN_00409350();
    local_38 = CONCAT44(local_6ec,(uint)local_38);
    local_8._0_1_ = 1;
    local_6d8 = (char *)0xf;
    aDStack_6e4[2] = 0;
    local_6ec[0]._0_1_ = 0;
    FUN_00409350(&DAT_00ded94d,0);
    FUN_00992740(local_90,local_54,0);
    local_8._0_1_ = 3;
    if (0xf < local_40) {
      sStack_6d4 = local_54[0];
                    /* WARNING: Subroutine does not return */
      local_6d8 = &UNK_009913e8;
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (local_60 == 0) {
      local_38 = 0;
      local_38._0_4_ = 0;
      iVar3 = (uint)local_38;
    }
    else {
      sStack_6d4 = local_60;
      local_6d8 = (char *)0x991402;
      uVar16 = PHYSFS_fileLength();
      local_38 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),(uint)local_38);
      iVar3 = (int)uVar16;
    }
    iVar3 = iVar3 + 1;
    if (0x1ff < iVar3) {
      iVar3 = 0x200;
    }
    sStack_6d4 = 0x99142e;
    iVar2 = -(iVar3 + 8);
    local_14 = local_6c4 + iVar2 + -0xc;
    *(int *)((int)&sStack_6d4 + iVar2) = iVar3;
    pcVar9 = local_6c4 + iVar2 + -8;
    *(undefined4 *)((int)&local_6d8 + iVar2) = 0;
    *(undefined4 *)(local_6c4 + iVar2 + -0xc) = 0xa110ca7e;
    *(char **)((int)aDStack_6e4 + iVar2 + 8) = pcVar9;
    *(undefined4 *)(local_6c4 + iVar3 + iVar2 + -8) = 0xa110ca7e;
    *(undefined4 *)((int)aDStack_6e4 + iVar2 + 4) = 0x99144d;
    _memset(*(void **)((int)aDStack_6e4 + iVar2 + 8),*(int *)((int)&local_6d8 + iVar2),
            *(size_t *)((int)&sStack_6d4 + iVar2));
    *(int *)((int)&sStack_6d4 + iVar2) = iVar3 + -1;
    *(char **)((int)&local_6d8 + iVar2) = pcVar9;
    *(undefined4 *)((int)aDStack_6e4 + iVar2 + 8) = 0x99145e;
    FUN_00992f20();
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined4 ****)((uint)local_30[0] & 0xffffff00);
    pcVar4 = pcVar9;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(int *)((int)&sStack_6d4 + iVar2) = (int)pcVar4 - (int)(local_6c4 + iVar2 + -7);
    *(char **)((int)&local_6d8 + iVar2) = pcVar9;
    *(undefined4 *)((int)aDStack_6e4 + iVar2 + 8) = 0x991488;
    FUN_00409350();
    *(uint **)((int)&sStack_6d4 + iVar2) = local_54;
    local_8._0_1_ = 4;
    *(undefined4 *)((int)&local_6d8 + iVar2) = 0x991498;
    FUN_00989330();
    if (0xf < local_40) {
      *(uint *)((int)&sStack_6d4 + iVar2) = local_54[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)((int)&local_6d8 + iVar2) = &UNK_009914ab;
      FUN_00aae91b();
    }
    if (local_20 == 0) {
      if (0xf < local_1c) {
        *(undefined4 *****)((int)&sStack_6d4 + iVar2) = local_30[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)((int)&local_6d8 + iVar2) = &UNK_009915ef;
        FUN_00aae91b();
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (undefined4 ****)((uint)local_30[0] & 0xffffff00);
      *(undefined4 *)((int)&sStack_6d4 + iVar2) = 0x99160b;
      FUN_00992d60();
      local_8 = 0xffffffff;
      puVar10 = (undefined1 *)FUN_00991624();
      return puVar10;
    }
    pppppuVar5 = (undefined4 *****)local_30[0];
    if (local_1c < 0x10) {
      pppppuVar5 = local_30;
    }
    *(undefined4 *)((int)&sStack_6d4 + iVar2) = 0x104;
    *(undefined1 **)((int)&local_6d8 + iVar2) = local_2b4;
    *(undefined4 *)((int)aDStack_6e4 + iVar2 + 8) = 0xffffffff;
    *(undefined4 ******)((int)aDStack_6e4 + iVar2 + 4) = pppppuVar5;
    *(undefined4 *)((int)aDStack_6e4 + iVar2) = 0;
    *(undefined4 *)((int)local_6ec + iVar2 + 4) = 0xfde9;
    puVar11 = (undefined1 *)((int)local_6ec + iVar2);
    *(undefined4 *)((int)local_6ec + iVar2) = 0x9914df;
    MultiByteToWideChar(*(UINT *)((int)local_6ec + iVar2 + 4),*(DWORD *)((int)aDStack_6e4 + iVar2),
                        *(LPCSTR *)((int)aDStack_6e4 + iVar2 + 4),
                        *(int *)((int)aDStack_6e4 + iVar2 + 8),*(LPWSTR *)((int)&local_6d8 + iVar2),
                        *(int *)((int)&sStack_6d4 + iVar2));
    *(undefined4 *)(puVar11 + -4) = 0;
    *(undefined1 **)(puVar11 + -8) = local_2b4;
    puVar12 = puVar11 + -0xc;
    *(undefined4 *)(puVar11 + -0xc) = 0x9914ed;
    BVar6 = CreateDirectoryW(*(LPCWSTR *)(puVar11 + -8),*(LPSECURITY_ATTRIBUTES *)(puVar11 + -4));
    if (BVar6 == 0) {
      puVar13 = (undefined4 *)(puVar12 + -4);
      puVar12 = puVar12 + -4;
      *puVar13 = 0x9914f7;
      DVar7 = GetLastError();
      if (DVar7 == 3) {
        *(undefined4 *)(puVar12 + -4) = 0x99150c;
        FUN_009885d0();
        *(undefined4 ******)(puVar12 + -4) = local_30;
        local_8 = CONCAT31(local_8._1_3_,5);
        *(undefined4 *)(puVar12 + -8) = 0x99151e;
        puVar8 = (undefined4 *)FUN_00988f20();
        if (0xf < (uint)puVar8[5]) {
          puVar8 = (undefined4 *)*puVar8;
        }
        *(undefined4 *)(puVar12 + -4) = 0;
        *(char **)(puVar12 + -8) = "Could not create or read directory";
        *(undefined4 **)(puVar12 + -0xc) = puVar8;
        *(undefined4 *)(puVar12 + -0x10) = 0;
        puVar14 = puVar12 + -0x14;
        *(undefined4 *)(puVar12 + -0x14) = 0x991534;
        MessageBoxA(*(HWND *)(puVar12 + -0x10),*(LPCSTR *)(puVar12 + -0xc),*(LPCSTR *)(puVar12 + -8)
                    ,*(UINT *)(puVar12 + -4));
        *(undefined4 *)(puVar14 + -4) = 0x99153c;
        FUN_00408ad0();
        *(undefined4 *)(puVar14 + -4) = 0x991547;
        FUN_00408ad0();
        *(undefined4 *)(puVar14 + -4) = 0;
                    /* WARNING: Subroutine does not return */
        *(undefined4 *)(puVar14 + -8) = 0x99154d;
        _exit(*(int *)(puVar14 + -4));
      }
    }
    *(undefined4 *)(puVar12 + -4) = 0;
    *(undefined1 **)(puVar12 + -8) = local_6c4;
    *(undefined4 *)(puVar12 + -0xc) = 0x104;
    *(undefined1 **)(puVar12 + -0x10) = local_2b4;
    puVar15 = puVar12 + -0x14;
    *(undefined4 *)(puVar12 + -0x14) = 0x991567;
    GetFullPathNameW(*(LPCWSTR *)(puVar12 + -0x10),*(DWORD *)(puVar12 + -0xc),
                     *(LPWSTR *)(puVar12 + -8),*(LPWSTR **)(puVar12 + -4));
    *(undefined4 *)(puVar15 + -4) = 0;
    *(undefined4 *)(puVar15 + -8) = 0x208;
    *(char **)(puVar15 + -0xc) = local_4bc;
    *(undefined1 **)(puVar15 + -0x10) = local_2b4;
    *(undefined4 *)(puVar15 + -0x14) = 0x991580;
    PHYSFS_utf8FromUcs2();
    pcVar9 = local_4bc;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    *(int *)(puVar15 + -4) = (int)pcVar9 - (int)(local_4bc + 1);
    *(char **)(puVar15 + -8) = local_4bc;
    *(undefined4 *)(puVar15 + -0xc) = 0x9915b8;
    FUN_00409350();
    if (0xf < local_1c) {
      *(undefined4 *****)(puVar15 + -4) = local_30[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar15 + -8) = &UNK_009915c7;
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined4 ****)((uint)local_30[0] & 0xffffff00);
    *(undefined4 *)(puVar15 + -4) = 0x9915df;
    FUN_00992d60();
  }
  ExceptionList = pvStack_10;
  return param_1;
}

