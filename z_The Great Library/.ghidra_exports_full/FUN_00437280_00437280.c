// FUN_00437280 @ 00437280 body=[[00437280, 004373b1] [004373b5, 0043740c] [00437410, 004374af] [004374b3, 004374cd] [004374d1, 00437545] [00437549, 0043760a] [0043760e, 00437628] [0043762c, 00437704] [00437708, 00437722] [00437726, 004377c2] [004377c6, 004377fb] [004377ff, 0043781e] [00437822, 0043782e] [00437832, 00437847]]


undefined1 * FUN_00437280(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char local_d0 [32];
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_74;
  undefined1 local_70 [4];
  int local_6c;
  int local_5c;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined8 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b77953;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_74 = 1;
  if (DAT_0131bb34 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)FUN_00aae9af();
    local_8 = 1;
    if (local_14 != (undefined4 *)0x0) {
      FUN_0041a160();
    }
    FUN_00423700();
  }
  local_84 = 0;
  local_5c = (int)(DAT_0131bb34[4] - DAT_0131bb34[3]) >> 2;
  local_80 = 0;
  local_7c = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_8 = 3;
  FUN_0068ea30();
  FUN_0043a880();
  local_18 = 0;
  if (0 < local_5c) {
    do {
      iVar5 = local_18;
      if (0 < *(int *)(local_84 + local_18 * 4)) {
        local_9c = 0xf;
        local_a0 = 0;
        local_b0[0] = local_b0[0] & 0xffffff00;
        FUN_00409350("PAYED_POPS",10);
        local_8._0_1_ = 4;
        FUN_009a8ee0(local_70,local_b0);
        local_8._0_1_ = 6;
        if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_9c = 0xf;
        local_a0 = 0;
        local_b0[0] = local_b0[0] & 0xffffff00;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350(&DAT_00df7e7c,3);
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        local_8._0_1_ = 8;
        pcVar2 = __itoa(*(int *)(local_84 + iVar5 * 4),local_d0,10);
        pcVar6 = pcVar2;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
        local_8._0_1_ = 9;
        puVar3 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 10;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = &PTR_FUN_00e38ecc;
          puVar3[1] = local_70;
          puVar3[7] = 0xf;
          puVar3[6] = 0;
          *(undefined1 *)(puVar3 + 2) = 0;
          local_14 = puVar3;
          FUN_00408ed0();
          local_8._0_1_ = 0xb;
          *puVar3 = &PTR_FUN_00e38ef4;
          puVar3[0xe] = 0xf;
          puVar3[0xd] = 0;
          *(undefined1 *)(puVar3 + 9) = 0;
          FUN_00408ed0();
        }
        local_8._0_1_ = 9;
        local_14 = puVar3;
        FUN_009e6810(local_34,&local_14);
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 6;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350(&DAT_00df7e80,4);
        local_8._0_1_ = 0xc;
        puVar3 = DAT_0131bb34;
        if (DAT_0131bb34 == (undefined4 *)0x0) {
          local_14 = (undefined4 *)FUN_00aae9af();
          local_8._0_1_ = 0xd;
          if (local_14 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = (undefined4 *)FUN_0041a160();
          }
          local_8 = CONCAT31(local_8._1_3_,0xe);
          local_3c = (double)((ulonglong)local_3c & 0xffffffff);
          if ((puVar3 != DAT_0131bb34) &&
             (local_14 = DAT_0131bb34, DAT_0131bb34 != (undefined4 *)0x0)) {
            FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        DAT_0131bb34 = puVar3;
        local_8._0_1_ = 0xc;
        if ((int)(DAT_0131bb34[4] - DAT_0131bb34[3]) >> 2 < local_18) {
          uVar4 = FUN_0096bb70();
        }
        else {
          uVar4 = *(undefined4 *)(DAT_0131bb34[3] + local_18 * 4);
        }
        local_14 = (undefined4 *)FUN_0096d650(uVar4,local_58);
        local_8._0_1_ = 0xf;
        puVar3 = (undefined4 *)FUN_00aae9af();
        local_3c = (double)CONCAT44(puVar3,(undefined4)local_3c);
        local_8._0_1_ = 0x10;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = &PTR_FUN_00e38ecc;
          puVar3[1] = local_70;
          puVar3[7] = 0xf;
          puVar3[6] = 0;
          *(undefined1 *)(puVar3 + 2) = 0;
          FUN_00408ed0();
          local_8._0_1_ = 0x11;
          *puVar3 = &PTR_FUN_00e38ef4;
          puVar3[0xe] = 0xf;
          puVar3[0xd] = 0;
          *(undefined1 *)(puVar3 + 9) = 0;
          FUN_00408ed0();
        }
        local_8._0_1_ = 0xf;
        local_14 = puVar3;
        FUN_009e6810(local_34,&local_14);
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 6;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350("MONEY",5);
        local_8._0_1_ = 0x12;
        local_3c = (double)*(longlong *)(local_94 + local_18 * 8) * 3.0517578125e-05;
        local_14 = (undefined4 *)FUN_00988dc0(local_58,1);
        local_8._0_1_ = 0x13;
        puVar3 = (undefined4 *)FUN_00aae9af();
        local_3c = (double)CONCAT44(puVar3,(undefined4)local_3c);
        local_8._0_1_ = 0x14;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3[1] = local_70;
          *puVar3 = &PTR_FUN_00e38ecc;
          puVar3[7] = 0xf;
          puVar3[6] = 0;
          *(undefined1 *)(puVar3 + 2) = 0;
          FUN_00408ed0();
          local_8._0_1_ = 0x15;
          *puVar3 = &PTR_FUN_00e38ef4;
          puVar3[0xe] = 0xf;
          puVar3[0xd] = 0;
          *(undefined1 *)(puVar3 + 9) = 0;
          FUN_00408ed0();
        }
        local_8._0_1_ = 0x13;
        local_14 = puVar3;
        FUN_009e6810(local_34,&local_14);
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 6;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puVar3 = DAT_0125b5e0;
        if (DAT_0125b5e0 == (undefined4 *)0x0) {
          iVar5 = FUN_00aae9af();
          local_3c = (double)CONCAT44(iVar5,(undefined4)local_3c);
          local_8._0_1_ = 0x16;
          if (iVar5 == 0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = (undefined4 *)FUN_00475150();
          }
          local_8._0_1_ = 0x17;
          local_3c = (double)((ulonglong)local_3c & 0xffffffff);
          if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
            (**(code **)*DAT_0125b5e0)();
          }
        }
        DAT_0125b5e0 = puVar3;
        local_8._0_1_ = 6;
        FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
        local_8._0_1_ = 0x18;
        FUN_00448aa0();
        local_8._0_1_ = 6;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_00448740(&DAT_00dee2cc,1);
        local_8._0_1_ = 0x19;
        FUN_009adb70();
        local_8 = CONCAT31(local_8._1_3_,3);
        if (local_6c != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < local_5c);
  }
  if (local_94 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_84 == 0) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

