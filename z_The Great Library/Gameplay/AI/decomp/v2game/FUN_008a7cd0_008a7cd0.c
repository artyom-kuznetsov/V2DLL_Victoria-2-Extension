// FUN_008a7cd0 @ 008a7cd0  (requested 008A7CD0, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_008a7cd0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int local_90;
  int local_88;
  undefined1 local_60 [8];
  undefined4 local_58;
  int local_54;
  int iStack_50;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar2 = DAT_012588e8;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5a810;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar6 = FUN_009b7950(0x20,0);
  FUN_008a8650(uVar6);
  uVar7 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18 & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  if (uVar7 == 1) {
    iVar2 = *DAT_012587e4;
    if (1 < iVar2) {
      piVar1 = DAT_012587e4 + 1;
      iVar9 = 1;
      piVar10 = DAT_012587e4;
      do {
        iVar3 = *(int *)(*piVar1 + iVar9 * 4);
        local_54 = *(int *)(iVar3 + 0x20);
        local_58 = *(undefined4 *)(iVar3 + 0x1c);
        if ((local_54 != 0) &&
           (iVar3 = *(int *)(piVar10[1] + local_54 * 4),
           0 < (int)(*(int *)(iVar3 + 0x9dc) - *(int *)(iVar3 + 0x9d8) & 0xfffffffcU))) {
          iVar3 = *(int *)(piVar10[1] + local_54 * 4);
          iVar11 = *(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8) >> 2;
          local_90 = 0;
          if (0 < iVar11) {
            do {
              iVar4 = *(int *)(*(int *)(iVar3 + 8) + local_90 * 4);
              cVar5 = (**(code **)(*(int *)(iVar4 + 0x30) + 0x18))(local_60);
              if (cVar5 != '\0') {
                iVar8 = FUN_008ae380(iVar4 + 0xc0,local_60,1);
                if (DAT_00f20c18 == (undefined4 *)0x0) {
                  DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
                  if (DAT_00f20c18 == (undefined4 *)0x0) {
                    DAT_00f20c18 = (undefined4 *)0x0;
                  }
                  else {
                    *DAT_00f20c18 = &PTR_FUN_00e38b28;
                  }
                }
                DAT_00f20c14 = DAT_00f20c14 + 1;
                if (DAT_00f0f6b0 == 0) {
                  FUN_009b7700();
                }
                uVar7 = *(uint *)(&DAT_00f0ecf0 + DAT_00f0f6b0 * 4) ^
                        (int)*(uint *)(&DAT_00f0ecf0 + DAT_00f0f6b0 * 4) >> 0xb;
                uVar7 = uVar7 ^ (uVar7 & 0xff3a58ad) << 7;
                uVar7 = uVar7 ^ (uVar7 & 0xffffdf8c) << 0xf;
                DAT_00f0f6b0 = (DAT_00f0f6b0 + 1) % 0x270;
                if (((int)((int)uVar7 >> 0x12 ^ uVar7) % 1000000 < iVar8) &&
                   (((*(char *)(iVar4 + 0x1a3) == '\0' || (iVar8 = FUN_009c1d40(), iVar8 == 0)) ||
                    (iVar8 != iVar4)))) {
                  FUN_008a8120(param_1,local_60);
                }
              }
              local_90 = local_90 + 1;
              piVar10 = DAT_012587e4;
            } while (local_90 < iVar11);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar2);
      ExceptionList = local_14;
      return;
    }
  }
  else {
    local_58 = 0x2d2d2d;
    local_54 = 0;
    iVar9 = (**(code **)(*DAT_0125870c + 0x24))();
    local_88 = 0;
    if (0 < iVar9) {
      do {
        iVar3 = *(int *)(*(int *)(iVar2 + 0xacc) + local_88 * 4);
        if (*(int *)(iVar3 + 300) != 0) {
          local_90 = 0;
          iVar11 = *(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14) >> 2;
          iStack_50 = local_88;
          if (0 < iVar11) {
            do {
              iVar4 = *(int *)(*(int *)(iVar3 + 0x14) + local_90 * 4);
              cVar5 = (**(code **)(*(int *)(iVar4 + 0x30) + 0x18))(local_60);
              if (cVar5 != '\0') {
                iVar8 = FUN_008ae380(iVar4 + 0xc0,local_60,2);
                if (DAT_00f20c18 == (undefined4 *)0x0) {
                  DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
                  if (DAT_00f20c18 == (undefined4 *)0x0) {
                    DAT_00f20c18 = (undefined4 *)0x0;
                  }
                  else {
                    *DAT_00f20c18 = &PTR_FUN_00e38b28;
                  }
                }
                DAT_00f20c14 = DAT_00f20c14 + 1;
                if (DAT_00f0f6b0 == 0) {
                  FUN_009b7700();
                }
                uVar7 = *(uint *)(&DAT_00f0ecf0 + DAT_00f0f6b0 * 4) ^
                        (int)*(uint *)(&DAT_00f0ecf0 + DAT_00f0f6b0 * 4) >> 0xb;
                uVar7 = uVar7 ^ (uVar7 & 0xff3a58ad) << 7;
                uVar7 = uVar7 ^ (uVar7 & 0xffffdf8c) << 0xf;
                DAT_00f0f6b0 = (DAT_00f0f6b0 + 1) % 0x270;
                if (((int)((int)uVar7 >> 0x12 ^ uVar7) % 1000000 < iVar8) &&
                   (((*(char *)(iVar4 + 0x1a3) == '\0' || (iVar8 = FUN_009c1d40(), iVar8 == 0)) ||
                    (iVar8 != iVar4)))) {
                  FUN_008a8120(param_1,local_60);
                }
              }
              local_90 = local_90 + 1;
            } while (local_90 < iVar11);
          }
        }
        local_88 = local_88 + 1;
      } while (local_88 < iVar9);
    }
  }
  ExceptionList = local_14;
  return;
}

