// FUN_006e69d0 @ 006e69d0 body=[[006e69d0, 006e6a65] [006e6a69, 006e6b30] [006e6b34, 006e6bc5] [006e6bc9, 006e6c0d] [006e6c11, 006e6cd7] [006e6cdb, 006e6d71] [006e6d75, 006e6e58] [006e6e5c, 006e6ea5] [006e6ea9, 006e6f67] [006e6f6b, 006e6f8e] [006e6f92, 006e705c] [006e7060, 006e7085] [006e7089, 006e70a0] [006e70a4, 006e70c2] [006e70c6, 006e718c] [006e7190, 006e71b8] [006e71bc, 006e71d6] [006e71da, 006e71fb] [006e71ff, 006e727d] [006e7281, 006e72a3] [006e72a7, 006e72dc] [006e72e0, 006e7398] [006e739c, 006e73e5] [006e73e9, 006e74e5] [006e74e9, 006e7515] [006e7519, 006e75dd] [006e75e1, 006e7606] [006e760a, 006e7621] [006e7625, 006e7643] [006e7647, 006e770c] [006e7710, 006e7738] [006e773c, 006e7756] [006e775a, 006e777b] [006e777f, 006e77fd] [006e7801, 006e7823] [006e7827, 006e790d] [006e7911, 006e793d] [006e7941, 006e7aa9]]


void FUN_006e69d0(int param_1,int *param_2,int *param_3,int *param_4)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  int *_Value;
  char cVar4;
  char *pcVar5;
  int *piVar6;
  code *pcVar7;
  short *psVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  char local_f4 [32];
  char local_d4 [32];
  undefined8 local_b4;
  int *local_a8;
  undefined1 *local_a4;
  char local_a0 [4];
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  int *local_64;
  char local_60;
  int local_5c;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ee14;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  ExceptionList = &local_10;
  *(int **)(param_1 + 0x111c) = param_2;
  (**(code **)(*param_2 + 0x20))();
  local_8 = 0;
  local_34 = *(int **)(param_1 + 0x1110);
  FUN_00408ed0();
  FUN_00a5ecc0();
  local_8 = 0xffffffff;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d4[0] = '\0';
  local_d4[1] = '\0';
  local_d4[2] = '\0';
  local_d4[3] = '\0';
  local_d4[4] = '\0';
  local_d4[5] = '\0';
  local_d4[6] = '\0';
  local_d4[7] = '\0';
  local_d4[8] = '\0';
  local_d4[9] = '\0';
  local_d4[10] = '\0';
  local_d4[0xb] = '\0';
  local_d4[0xc] = '\0';
  local_d4[0xd] = '\0';
  local_d4[0xe] = '\0';
  local_d4[0xf] = '\0';
  local_d4[0x10] = '\0';
  local_d4[0x11] = '\0';
  local_d4[0x12] = '\0';
  local_d4[0x13] = '\0';
  local_d4[0x14] = '\0';
  local_d4[0x15] = '\0';
  local_d4[0x16] = '\0';
  local_d4[0x17] = '\0';
  local_d4[0x18] = '\0';
  local_d4[0x19] = '\0';
  local_d4[0x1a] = '\0';
  local_d4[0x1b] = '\0';
  local_d4[0x1c] = '\0';
  local_d4[0x1d] = '\0';
  local_d4[0x1e] = '\0';
  local_d4[0x1f] = 0;
  _sprintf(local_d4,"%i/%i");
  pcVar5 = local_d4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  FUN_00409350();
  local_8 = 1;
  FUN_00408ed0();
  FUN_00a5ecc0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 2;
  local_b4 = CONCAT44(local_b4._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
  local_60 = FUN_0052e960();
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))();
  if (local_60 == '\0') {
    pcVar7 = *(code **)(*piVar6 + 0xbc);
  }
  else {
    pcVar7 = *(code **)(*piVar6 + 0xb8);
  }
  (*pcVar7)();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 3;
  local_64 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  local_8 = 0xffffffff;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0xf;
  local_a8 = (int *)(param_1 + 0x11c4);
  local_5c = (param_3[1] - *param_3 >> 2) + (param_4[1] - *param_4 >> 2);
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  if ((*(int *)(param_1 + 0x11c8) - *local_a8 >> 2 < local_5c) &&
     (local_38 = (int *)(*(int *)(param_1 + 0x11c8) - *local_a8 >> 2), (int)local_38 < local_5c)) {
    local_34 = (int *)((uint)local_34 & 0xffff);
    do {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350();
      local_8 = 4;
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x2c) + 0x34))();
      iVar12 = *piVar6;
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))();
      piVar6 = (int *)(**(code **)(iVar12 + 0x2c))();
      local_8 = 0xffffffff;
      local_3c = piVar6;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      psVar8 = (short *)(**(code **)(*piVar6 + 0x60))();
      _Value = local_38;
      local_34 = (int *)CONCAT22(local_34._2_2_,*psVar8 * (short)local_38);
      (**(code **)(*piVar6 + 0x18))();
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_8 = 5;
      pcVar5 = __itoa((int)_Value,local_a0,10);
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350();
      local_8 = 6;
      (**(code **)(*local_64 + 0xbc))();
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_004e9b90();
      local_38 = (int *)((int)local_38 + 1);
    } while ((int)local_38 < local_5c);
  }
  local_30 = (int *)(param_3[1] - *param_3 >> 2);
  local_34 = (int *)0x0;
  if (0 < (int)local_30) {
    do {
      iVar12 = *(int *)(*param_3 + (int)local_34 * 4);
      piVar6 = *(int **)(*local_a8 + (int)local_34 * 4);
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_5c = iVar12;
      FUN_00409350();
      local_8 = 7;
      local_64 = (int *)(**(code **)(*piVar6 + 0x44))();
      if (DAT_0131bb34 == (int *)0x0) {
        local_3c = (int *)FUN_00aae9af();
        local_8._0_1_ = 8;
        if (local_3c == (int *)0x0) {
          local_38 = (int *)0x0;
        }
        else {
          local_38 = (int *)FUN_0041a160();
          iVar12 = local_5c;
        }
        local_8 = CONCAT31(local_8._1_3_,9);
        local_a4 = (undefined1 *)0x0;
        if ((local_38 != DAT_0131bb34) && (local_3c = DAT_0131bb34, DAT_0131bb34 != (int *)0x0)) {
          FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        DAT_0131bb34 = local_38;
        local_8 = CONCAT31(local_8._1_3_,7);
      }
      if (DAT_0131bb34[4] - DAT_0131bb34[3] >> 2 < iVar12) {
        FUN_0096bb70();
      }
      (**(code **)(*local_64 + 0x48))();
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350();
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      local_8._0_1_ = 0xb;
      local_8._1_3_ = 0;
      pcVar5 = __itoa(*(int *)(*(int *)(*(int *)(param_1 + 0x111c) + 0x118) + iVar12 * 4) -
                      *(int *)(*(int *)(*(int *)(param_1 + 0x111c) + 0x120) + iVar12 * 4),local_a0,
                      10);
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      (**(code **)(*piVar6 + 0x3c))();
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      FUN_00409350();
      local_8 = 0xd;
      local_3c = (int *)(**(code **)(*piVar6 + 0x44))();
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_8._0_1_ = 0xe;
      pcVar5 = __itoa(local_5c,local_f4,10);
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350();
      local_8._0_1_ = 0xf;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x10;
      FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x11);
      (**(code **)(*local_3c + 0x78))();
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      FUN_00409350("pop_amount");
      local_8 = 0x12;
      local_3c = (int *)(**(code **)(*piVar6 + 0x3c))();
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      local_8._0_1_ = 0x13;
      pcVar9 = __itoa(local_5c,local_f4,10);
      pcVar5 = pcVar9;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar9,(int)pcVar5 - (int)(pcVar9 + 1));
      local_8._0_1_ = 0x14;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("poppop",6);
      local_8._0_1_ = 0x15;
      uVar10 = FUN_00988f20(local_58);
      local_8 = CONCAT31(local_8._1_3_,0x16);
      (**(code **)(*local_3c + 0x78))(uVar10);
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_9c[0]);
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      local_8 = 0xffffffff;
      local_44 = 0xf;
      local_48 = 0;
      uVar2 = local_58[0] >> 8;
      local_58[0] = uVar2 << 8;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80);
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = uVar2 << 8;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 0x17;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("pop_amount_2",0xc);
      local_8 = CONCAT31(local_8._1_3_,0x18);
      (**(code **)(*piVar6 + 0x3c))(local_2c);
      FUN_00408ed0(local_58,0,0xffffffff);
      FUN_00a5ecc0(local_58,0);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_8 = 0xffffffff;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      (**(code **)(piVar6[6] + 0x34))();
      local_34 = (int *)((int)local_34 + 1);
    } while ((int)local_34 < (int)local_30);
  }
  local_38 = (int *)0x0;
  local_64 = (int *)(param_4[1] - *param_4 >> 2);
  if (0 < (int)local_64) {
    do {
      iVar12 = *(int *)(*param_4 + (int)local_38 * 4);
      piVar6 = *(int **)(*local_a8 + ((param_3[1] - *param_3 >> 2) + (int)local_38) * 4);
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      local_5c = iVar12;
      FUN_00409350();
      local_8 = 0x19;
      local_3c = (int *)(**(code **)(*piVar6 + 0x44))();
      if (DAT_0131bb34 == (int *)0x0) {
        local_a4 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0x1a;
        if (local_a4 == (undefined1 *)0x0) {
          local_34 = (int *)0x0;
        }
        else {
          local_34 = (int *)FUN_0041a160();
          iVar12 = local_5c;
        }
        local_8 = CONCAT31(local_8._1_3_,0x1b);
        local_a4 = (undefined1 *)0x0;
        if ((local_34 != DAT_0131bb34) && (local_30 = DAT_0131bb34, DAT_0131bb34 != (int *)0x0)) {
          FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        DAT_0131bb34 = local_34;
        local_8 = CONCAT31(local_8._1_3_,0x19);
      }
      if (DAT_0131bb34[4] - DAT_0131bb34[3] >> 2 < iVar12) {
        FUN_0096bb70();
      }
      (**(code **)(*local_3c + 0x48))();
      local_8 = 0xffffffff;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      FUN_00409350();
      local_8 = 0x1c;
      iVar12 = *(int *)(*(int *)(*(int *)(param_1 + 0x111c) + 0x118) + iVar12 * 4);
      fVar1 = (float)iVar12;
      if (iVar12 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_30 = (int *)(fVar1 / (float)*(int *)(*(int *)(param_1 + 0x111c) + 200));
      local_a4 = &stack0xfffffed8;
      if ((float)local_30 < 0.0) {
        local_b4 = 0xbfe0000000000000;
      }
      else {
        local_b4 = 0x3fe0000000000000;
      }
      FUN_00b31c36();
      FUN_009c80d0(local_9c);
      local_8 = CONCAT31(local_8._1_3_,0x1d);
      local_30 = (int *)(**(code **)(*piVar6 + 0x3c))();
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      FUN_00409350();
      local_8 = 0x1e;
      local_30 = (int *)(**(code **)(*piVar6 + 0x44))();
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      local_8._0_1_ = 0x1f;
      pcVar5 = __itoa(local_5c,local_f4,10);
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350();
      local_8._0_1_ = 0x20;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x21;
      FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x22);
      (**(code **)(*local_30 + 0x78))();
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      FUN_00409350("pop_amount");
      local_8 = 0x23;
      local_30 = (int *)(**(code **)(*piVar6 + 0x3c))();
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      local_8._0_1_ = 0x24;
      pcVar9 = __itoa(local_5c,local_f4,10);
      pcVar5 = pcVar9;
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      FUN_00409350(pcVar9,(int)pcVar5 - (int)(pcVar9 + 1));
      local_8._0_1_ = 0x25;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("poppop",6);
      local_8._0_1_ = 0x26;
      uVar10 = FUN_00988f20(local_58);
      local_8 = CONCAT31(local_8._1_3_,0x27);
      (**(code **)(*local_30 + 0x78))(uVar10);
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_9c[0]);
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      local_8 = 0xffffffff;
      local_44 = 0xf;
      local_48 = 0;
      uVar2 = local_58[0] >> 8;
      local_58[0] = uVar2 << 8;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80);
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = uVar2 << 8;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 0x28;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("pop_amount_2",0xc);
      local_8 = CONCAT31(local_8._1_3_,0x29);
      (**(code **)(*piVar6 + 0x3c))(local_2c);
      FUN_00408ed0(local_58,0,0xffffffff);
      FUN_00a5ecc0(local_58,0);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_8 = 0xffffffff;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      (**(code **)(piVar6[6] + 0x34))();
      local_38 = (int *)((int)local_38 + 1);
    } while ((int)local_38 < (int)local_64);
  }
  param_3 = *(int **)(*(int *)(param_1 + 0x111c) + 0x26c);
  param_4 = (int *)param_3[1];
  param_3 = (int *)*param_3;
  puVar11 = &param_3;
  if ((int)param_3 <= (int)param_4) {
    puVar11 = &param_4;
  }
  param_3 = (int *)*puVar11;
  param_4 = (int *)*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x111c) + 0x26c) + 8);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  param_3 = (int *)&stack0xfffffee8;
  local_8 = 0x2a;
  FUN_009c8c30();
  local_8 = CONCAT31(local_8._1_3_,0x2b);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (*(int *)(param_1 + 0x1118) == 0) {
    ExceptionList = local_10;
    return;
  }
  piVar6 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(DAT_012588e8 + 0xb60) * 0x10
                             ) + *(int *)(param_2[0x94] + 0x6c) * 4);
  if (piVar6 == (int *)0x0) {
LAB_006e7993:
    bVar3 = false;
  }
  else {
    cVar4 = (**(code **)(*piVar6 + 0x34))();
    bVar3 = true;
    if (cVar4 == '\0') goto LAB_006e7993;
  }
  (**(code **)(**(int **)(param_1 + 0x1118) + 0x108))();
  if (*(char *)((int)*(int **)(param_1 + 0x1118) + 0x4f) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x1118) + 0x34))();
  }
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x1118) + 0xec))();
  (**(code **)(*piVar6 + 0x60))();
  (**(code **)(**(int **)(param_1 + 0x1118) + 0x48))();
  for (piVar6 = *(int **)(*(int *)(param_1 + 0x1118) + 0x58); piVar6 != (int *)0x0;
      piVar6 = (int *)piVar6[2]) {
    if (*piVar6 == param_1 + 0x1170) goto LAB_006e7a1c;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1118) + 0x54) + 4))();
LAB_006e7a1c:
  (**(code **)(**(int **)(param_1 + 0x1118) + 0xd4))();
  if (bVar3) {
    iVar12 = **(int **)(param_1 + 0x1118);
  }
  else {
    local_b4 = CONCAT44(local_b4._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
    iVar12 = **(int **)(param_1 + 0x1118);
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x1488)
        < 1) {
      pcVar7 = *(code **)(iVar12 + 0xbc);
      goto LAB_006e7a95;
    }
  }
  pcVar7 = *(code **)(iVar12 + 0xb8);
LAB_006e7a95:
  (*pcVar7)();
  ExceptionList = local_10;
  return;
}

