// FUN_004956d0 @ 004956d0 body=[[004956d0, 00495881] [00495885, 00495900] [00495904, 00495915]]


undefined4 FUN_004956d0(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *unaff_ESI;
  undefined1 local_a0 [16];
  undefined4 local_90;
  int *local_8c;
  char *pcStack_88;
  undefined **local_7c [5];
  undefined4 local_68;
  uint local_54;
  int local_4c;
  char local_44;
  byte local_40 [20];
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5b618;
  local_10 = ExceptionList;
  uVar2 = *(undefined4 *)(unaff_ESI[2] + 0x2ac0);
  pcVar1 = (char *)(unaff_ESI + 10);
  ExceptionList = &local_10;
  *unaff_ESI = *(undefined4 *)(unaff_ESI[2] + 0x2abc);
  unaff_ESI[1] = uVar2;
  pcStack_88 = pcVar1;
  if (0xf < (uint)unaff_ESI[0xf]) {
    pcStack_88 = *(char **)pcVar1;
  }
  if ((pcStack_88 != (char *)0x0) && (*pcStack_88 != '\0')) {
    local_8c = (int *)0x495720;
    iVar3 = PHYSFS_exists();
    if (iVar3 != 0) {
      local_18 = local_a0;
      local_8c = (int *)0xf;
      local_90 = 0;
      local_a0[0] = 0;
      FUN_00409350(&DAT_00ded94d,0);
      FUN_00992740(local_7c,pcVar1,0);
      local_8 = 0;
      if (local_44 == '\0') {
        local_40[0x10] = 3;
        local_40[0x11] = 0;
        local_40[0x12] = 0;
        local_40[0x13] = 0;
        local_1c = 3;
        pcStack_88 = (char *)0x14;
        local_8c = (int *)&local_2c;
        local_40[0] = 0x4d;
        local_40[1] = 0x41;
        local_40[2] = 0x50;
        local_40[3] = 0x5f;
        local_40[4] = 0x43;
        local_40[5] = 0x41;
        local_40[6] = 0x43;
        local_40[7] = 0x48;
        local_40[8] = 0x45;
        local_40[9] = 0;
        local_40[10] = 0;
        local_40[0xb] = 0;
        local_40[0xc] = 2;
        local_40[0xd] = 0;
        local_40[0xe] = 0;
        local_40[0xf] = 0;
        local_2c = 0x484341435f50414d;
        local_24 = 0x45;
        local_20 = 2;
        local_90 = 0x4957ce;
        FUN_00992f20();
        uVar4 = 0x14;
        pbVar5 = local_40;
        pbVar6 = (byte *)&local_2c;
        do {
          if (*(int *)pbVar6 != *(int *)pbVar5) {
            iVar3 = (uint)*pbVar6 - (uint)*pbVar5;
            if (((iVar3 == 0) && (iVar3 = (uint)pbVar6[1] - (uint)pbVar5[1], iVar3 == 0)) &&
               (iVar3 = (uint)pbVar6[2] - (uint)pbVar5[2], iVar3 == 0)) {
              iVar3 = (uint)pbVar6[3] - (uint)pbVar5[3];
            }
            if ((iVar3 >> 0x1f | 1U) != 0) {
              local_7c[0] = &PTR_FUN_00e37dc0;
              if (local_4c != 0) {
                pcStack_88 = (char *)local_4c;
                local_8c = (int *)0x4958e5;
                PHYSFS_close();
                local_4c = 0;
              }
              local_7c[0] = &PTR_FUN_00e3b540;
              if (local_54 < 0x10) {
                ExceptionList = local_10;
                return 0;
              }
              pcStack_88 = (char *)local_68;
                    /* WARNING: Subroutine does not return */
              local_8c = (int *)&UNK_00495901;
              FUN_00aae91b();
            }
            break;
          }
          uVar4 = uVar4 - 4;
          pbVar5 = pbVar5 + 4;
          pbVar6 = pbVar6 + 4;
        } while (3 < uVar4);
        pcStack_88 = (char *)0x4;
        local_8c = &local_14;
        local_14 = 0;
        local_90 = 0x495809;
        FUN_00992f20();
        pcStack_88 = (char *)0x495814;
        FUN_00495920();
        if (local_14 != 0) {
          pcStack_88 = (char *)(local_14 * 8);
          local_8c = (int *)unaff_ESI[4];
          local_90 = 0x49582e;
          FUN_00992f20();
        }
        pcStack_88 = (char *)(unaff_ESI[8] * unaff_ESI[9]);
        local_8c = (int *)0x49583b;
        local_8c = (int *)FUN_00aad56b();
        pcStack_88 = (char *)(unaff_ESI[8] * unaff_ESI[9]);
        unaff_ESI[3] = local_8c;
        local_90 = 0x495852;
        FUN_00992f20();
        local_7c[0] = &PTR_FUN_00e37dc0;
        if (local_4c != 0) {
          pcStack_88 = (char *)local_4c;
          local_8c = (int *)0x495866;
          PHYSFS_close();
          local_4c = 0;
        }
        local_7c[0] = &PTR_FUN_00e3b540;
        if (local_54 < 0x10) {
          ExceptionList = local_10;
          return 1;
        }
        pcStack_88 = (char *)local_68;
                    /* WARNING: Subroutine does not return */
        local_8c = (int *)&UNK_00495882;
        FUN_00aae91b();
      }
      pcStack_88 = (char *)0x495763;
      FUN_00992d60();
    }
  }
  ExceptionList = local_10;
  return 0;
}

