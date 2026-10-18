// FUN_0068d950 @ 0068d950 body=[[0068d950, 0068da60] [0068da64, 0068dac5] [0068dac9, 0068dbee]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0068d950(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_fc0 [1000];
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ee46;
  local_10 = ExceptionList;
  iVar5 = 0;
  puVar2 = DAT_00f20c18;
  ExceptionList = &local_10;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_00aae9af(4);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
        DAT_00f20c18 = puVar2;
      }
      else {
        *puVar2 = &PTR_FUN_00e38b28;
        DAT_00f20c18 = puVar2;
      }
    }
    DAT_00f20c14 = DAT_00f20c14 + 1;
    if (DAT_00f0f6b0 == 0) {
      FUN_009b7700();
    }
    uVar4 = *(uint *)(&DAT_00f0ecf0 + DAT_00f0f6b0 * 4) ^
            (int)*(uint *)(&DAT_00f0ecf0 + DAT_00f0f6b0 * 4) >> 0xb;
    uVar4 = uVar4 ^ (uVar4 & 0xff3a58ad) << 7;
    uVar4 = uVar4 ^ (uVar4 & 0xffffdf8c) << 0xf;
    DAT_00f0f6b0 = (DAT_00f0f6b0 + 1) % 0x270;
    local_fc0[iVar5] = uVar4 ^ (int)uVar4 >> 0x12;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1000);
  if (DAT_0131bb34 == 0) {
    local_20 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (local_20 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0041a160();
    }
    iVar6 = DAT_0131bb34;
    local_8 = 1;
    local_20 = 0;
    if ((iVar5 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar6);
    }
    local_8 = 0xffffffff;
    DAT_0131bb34 = iVar5;
  }
  local_20 = DAT_0131bb34;
  if (DAT_0131bb34 == 0) {
    local_18 = FUN_00aae9af(0x188);
    local_8 = 2;
    if (local_18 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0041a160();
    }
    iVar6 = DAT_0131bb34;
    local_8 = 3;
    local_18 = 0;
    if ((iVar5 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar6);
    }
    local_8 = 0xffffffff;
    DAT_0131bb34 = iVar5;
  }
  iVar5 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  local_18 = iVar5;
  FUN_009b7670();
  _DAT_00f0ea00 = 0;
  local_1c = 0;
  if (0 < (int)(*(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) & 0xfffffffcU)) {
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0xacc) + local_1c * 4) + 300) != 0) {
        iVar6 = 1;
        if (1 < iVar5) {
          iVar5 = 0x10;
          do {
            if (*(int *)(local_20 + 0x10) - *(int *)(local_20 + 0xc) >> 2 < iVar6) {
              iVar3 = FUN_0096bb70();
            }
            else {
              iVar3 = *(int *)(*(int *)(local_20 + 0xc) + iVar6 * 4);
            }
            if (*(char *)(iVar3 + 0x39c) != '\0') {
              iVar3 = *(int *)(iVar5 + *(int *)(*(int *)(*(int *)(param_1 + 0xacc) + local_1c * 4) +
                                               0x194));
              while (iVar3 != 0) {
                iVar1 = *(int *)(iVar3 + 0x27c);
                FUN_009599a0(iVar3,local_fc0,1);
                iVar3 = iVar1;
              }
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 0x10;
          } while (iVar6 < local_18);
        }
        FUN_004b9c60();
        iVar5 = local_18;
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2);
  }
  ExceptionList = local_10;
  return;
}

