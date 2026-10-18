// FUN_007010a0 @ 007010a0 body=[[007010a0, 0070139a] [0070139e, 0070142c] [00701430, 0070146c] [00701470, 007014db] [007014df, 00701582] [00701586, 007015a0] [007015a4, 007015f1] [007015f5, 00701627] [0070162b, 00701695] [00701699, 00701771] [00701775, 00701790] [00701794, 00701831] [00701835, 007018bc] [007018c0, 007018cd] [007018d1, 007018ec] [007018f0, 007019ef] [007019f3, 00701a23] [00701a27, 00701ad2] [00701ad6, 00701b0b] [00701b14, 00701bae] [00701bb2, 00701be0] [00701be9, 00702897]]


undefined1 * FUN_007010a0(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined8 *puVar11;
  int in_ECX;
  char *pcVar12;
  bool bVar13;
  undefined1 auStack_1d8 [12];
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint *puStack_1c0;
  uint *puStack_1bc;
  uint *puStack_1b8;
  undefined1 local_1a8 [120];
  undefined1 local_130 [28];
  undefined1 local_114 [48];
  undefined4 local_e4;
  undefined4 *local_e0;
  undefined1 local_dc [16];
  int local_cc;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  int local_b0;
  undefined4 local_ac;
  undefined1 local_a4 [16];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_84;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  int local_64;
  int local_60;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00bb5419;
  local_10 = ExceptionList;
  local_e0 = (undefined4 *)0x0;
  local_c8 = 0xf;
  local_ac = 0xf;
  local_90 = 0xf;
  local_cc = 0;
  local_dc[0] = 0;
  local_b0 = 0;
  local_c0[0] = 0;
  local_94 = 0;
  local_a4[0] = 0;
  local_88 = 0;
  local_84 = 1;
  local_8 = 0;
  uStack_7 = 0;
  if ((*(int **)(in_ECX + 0x8c) != (int *)0x0) &&
     (*(char *)(**(int **)(in_ECX + 0x8c) + 0x67) != '\0')) {
    puStack_1b8 = (uint *)param_1;
    puStack_1bc = (uint *)0x701135;
    ExceptionList = &local_10;
    FUN_00749750();
    puStack_1b8 = (uint *)0x701140;
    FUN_00459820();
    ExceptionList = local_10;
    return param_1;
  }
  iVar4 = *(int *)(*(int *)(in_ECX + 0x3b8) + 4);
  local_64 = in_ECX;
  if ((iVar4 == 0) || (*(char *)(iVar4 + 0x67) == '\0')) {
    iVar4 = (*(int **)(in_ECX + 0x474))[2];
    ExceptionList = &local_10;
    if ((iVar4 != 0) && (ExceptionList = &local_10, *(char *)(iVar4 + 0x67) != '\0')) {
      puStack_1b8 = (uint *)local_1a8;
      puStack_1c0 = (uint *)0x70120c;
      ExceptionList = &local_10;
      puStack_1bc = (uint *)*(int **)(in_ECX + 0x474);
      FUN_0043d420();
      local_8 = 2;
      puStack_1b8 = (uint *)0x70121d;
      FUN_004115d0();
      local_8 = 0;
      puStack_1b8 = (uint *)0x70122b;
      FUN_00459820();
      goto joined_r0x00701231;
    }
  }
  else {
    puStack_1b8 = (uint *)local_1a8;
    puStack_1c0 = (uint *)0x70117b;
    ExceptionList = &local_10;
    puStack_1bc = (uint *)*(int *)(in_ECX + 0x3b8);
    iVar4 = FUN_00476ba0();
    puStack_1b8 = (uint *)0xffffffff;
    puStack_1bc = (uint *)0x0;
    local_8 = 1;
    uStack_1c4 = 0x701190;
    puStack_1c0 = (uint *)iVar4;
    FUN_00408ed0();
    puStack_1b8 = (uint *)0xffffffff;
    puStack_1bc = (uint *)0x0;
    puStack_1c0 = (uint *)(iVar4 + 0x1c);
    uStack_1c4 = 0x7011a2;
    FUN_00408ed0();
    puStack_1b8 = (uint *)0xffffffff;
    puStack_1bc = (uint *)0x0;
    puStack_1c0 = (uint *)(iVar4 + 0x38);
    uStack_1c4 = 0x7011b4;
    FUN_00408ed0();
    local_88 = *(undefined4 *)(iVar4 + 0x54);
    local_84 = *(undefined1 *)(iVar4 + 0x58);
    local_8 = 0;
    puStack_1b8 = (uint *)0x7011d1;
    FUN_00459820();
joined_r0x00701231:
    uVar2 = local_8;
    if ((local_cc != 0) || (local_b0 != 0)) goto LAB_00702869;
  }
  iVar9 = local_64;
  iVar4 = (*(int *)(local_64 + 0x60) - *(int *)(local_64 + 0x5c)) / 0x14;
  local_e0 = (undefined4 *)0x0;
  if (0 < iVar4) {
    local_60 = 0;
    do {
      puStack_1b8 = (uint *)param_2;
      puStack_1bc = (uint *)0x70128c;
      cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar9 + 0x5c) + 4 + local_60) + 0x18) + 0x94))
                        ();
      if (cVar3 != '\0') {
        puStack_1b8 = (uint *)0x20;
        puStack_1bc = (uint *)0xe0f8fc;
        local_6c = 0xf;
        local_70 = 0;
        local_80[0] = local_80[0] & 0xffffff00;
        puStack_1c0 = (uint *)0x7014b8;
        FUN_00409350();
        puStack_1b8 = local_80;
        puStack_1bc = (uint *)local_40;
        local_8 = 3;
        puStack_1c0 = (uint *)0x7014c9;
        FUN_009a8ee0();
        local_8 = 5;
        if (0xf < local_6c) {
          puStack_1b8 = (uint *)local_80[0];
                    /* WARNING: Subroutine does not return */
          puStack_1bc = (uint *)&UNK_007014dc;
          FUN_00aae91b();
        }
        puStack_1b8 = (uint *)0x5;
        puStack_1bc = (uint *)0xe0f920;
        local_6c = 0xf;
        local_70 = 0;
        local_80[0] = local_80[0] & 0xffffff00;
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        puStack_1c0 = (uint *)0x701500;
        FUN_00409350();
        local_8 = 6;
        puStack_1bc = *(uint **)(*(int *)(DAT_012587f0 + 0xc) +
                                *(int *)(*(int *)(iVar9 + 0x5c) + (int)local_e0 * 0x14 + 8) * 4);
        puStack_1b8 = local_2c;
        puStack_1c0 = (uint *)0x70152c;
        uVar8 = FUN_005659c0();
        puStack_1b8 = (uint *)0x40;
        local_8 = 7;
        puStack_1bc = (uint *)0x701539;
        param_2 = (int *)FUN_00aae9af();
        local_8 = 8;
        if (param_2 == (int *)0x0) {
          param_2 = (int *)0x0;
        }
        else {
          puStack_1bc = (uint *)local_40;
          uStack_1c4 = 0x701555;
          puStack_1c0 = (uint *)param_2;
          puStack_1b8 = (uint *)uVar8;
          param_2 = (int *)FUN_009a9ce0();
        }
        local_8 = 7;
        puStack_1b8 = (uint *)&param_2;
        puStack_1bc = local_5c;
        puStack_1c0 = (uint *)0x701570;
        FUN_009e6810();
        if (0xf < local_18) {
          puStack_1b8 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
          puStack_1bc = (uint *)&UNK_00701583;
          FUN_00aae91b();
        }
        local_8 = 5;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        if (0xf < local_48) {
          puStack_1b8 = (uint *)local_5c[0];
                    /* WARNING: Subroutine does not return */
          puStack_1bc = (uint *)&UNK_007015a1;
          FUN_00aae91b();
        }
        puStack_1b8 = (uint *)0x7015a9;
        iVar4 = FUN_00475500();
        uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
        puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
        puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
        puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
        uStack_1c8 = 0x7015cc;
        puStack_1c0 = (uint *)FUN_009a9880();
        puStack_1b8 = (uint *)0xffffffff;
        puStack_1bc = (uint *)0x0;
        local_8 = 9;
        uStack_1c4 = 0x7015df;
        FUN_00408ed0();
        local_8 = 5;
        if (0xf < local_18) {
          puStack_1b8 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
          puStack_1bc = (uint *)&UNK_007015f2;
          FUN_00aae91b();
        }
        puStack_1b8 = (uint *)param_1;
        puStack_1bc = (uint *)0x701604;
        FUN_0040c830();
        _local_8 = CONCAT31(uStack_7,10);
        puStack_1b8 = (uint *)0x701610;
        FUN_009adb70();
        if (local_3c != (undefined4 *)0x0) {
          puStack_1b8 = (uint *)0x70161f;
          FUN_009e6a80();
          puStack_1b8 = local_3c;
                    /* WARNING: Subroutine does not return */
          puStack_1bc = (uint *)&UNK_00701628;
          FUN_00aae91b();
        }
        local_3c = (undefined4 *)0x0;
        local_38 = (undefined4 *)0x0;
        local_34 = 0;
        puStack_1b8 = (uint *)0x70163f;
        FUN_00459820();
        ExceptionList = local_10;
        return param_1;
      }
      local_60 = local_60 + 0x14;
      local_e0 = (undefined4 *)((int)local_e0 + 1);
    } while ((int)local_e0 < iVar4);
  }
  iVar4 = (*(int *)(iVar9 + 0x70) - *(int *)(iVar9 + 0x6c)) / 0x14;
  local_60 = 0;
  if (0 < iVar4) {
    local_e0 = (undefined4 *)0x0;
    do {
      puStack_1b8 = (uint *)param_2;
      puStack_1bc = (uint *)0x7012ef;
      cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar9 + 0x6c) + 4 + (int)local_e0) + 0x18) +
                          0x94))();
      if (cVar3 != '\0') {
        puStack_1b8 = (uint *)0x20;
        puStack_1bc = (uint *)0xe0f8fc;
        local_6c = 0xf;
        local_70 = 0;
        local_80[0] = local_80[0] & 0xffffff00;
        puStack_1c0 = (uint *)0x701672;
        FUN_00409350();
        puStack_1b8 = local_80;
        puStack_1bc = (uint *)local_40;
        local_8 = 0xb;
        puStack_1c0 = (uint *)0x701683;
        FUN_009a8ee0();
        local_8 = 0xd;
        if (0xf < local_6c) {
          puStack_1b8 = (uint *)local_80[0];
                    /* WARNING: Subroutine does not return */
          puStack_1bc = (uint *)&UNK_00701696;
          FUN_00aae91b();
        }
        puStack_1b8 = (uint *)0x5;
        puStack_1bc = (uint *)0xe0f920;
        local_6c = 0xf;
        local_70 = 0;
        local_80[0] = local_80[0] & 0xffffff00;
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        puStack_1c0 = (uint *)0x7016ba;
        FUN_00409350();
        local_8 = 0xe;
        puStack_1bc = *(uint **)(*(int *)(DAT_012587f0 + 0xc) +
                                *(int *)(*(int *)(iVar9 + 0x6c) + local_60 * 0x14 + 8) * 4);
        puStack_1b8 = local_2c;
        puStack_1c0 = (uint *)0x7016e3;
        param_2 = (int *)FUN_005659c0();
        puStack_1b8 = (uint *)0x40;
        local_8 = 0xf;
        puStack_1bc = (uint *)0x7016f1;
        puVar5 = (undefined4 *)FUN_00aae9af();
        local_8 = 0x10;
        local_e0 = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          param_2 = (undefined4 *)0x0;
        }
        else {
          puStack_1b8 = (uint *)0xffffffff;
          *puVar5 = &PTR_FUN_00e38ecc;
          puVar5[1] = local_40;
          puStack_1bc = (uint *)0x0;
          puStack_1c0 = local_5c;
          puVar5[7] = 0xf;
          puVar5[6] = 0;
          *(undefined1 *)(puVar5 + 2) = 0;
          uStack_1c4 = 0x701727;
          FUN_00408ed0();
          local_8 = 0x11;
          puStack_1b8 = (uint *)0xffffffff;
          *puVar5 = &PTR_FUN_00e38ef4;
          puStack_1bc = (uint *)0x0;
          puVar5[0xe] = 0xf;
          puVar5[0xd] = 0;
          puStack_1c0 = (uint *)param_2;
          *(undefined1 *)(puVar5 + 9) = 0;
          uStack_1c4 = 0x701748;
          FUN_00408ed0();
          param_2 = puVar5;
        }
        puStack_1b8 = (uint *)&param_2;
        local_8 = 0xf;
        puStack_1bc = local_5c;
        puStack_1c0 = (uint *)0x701763;
        FUN_009e6810();
        if (0xf < local_18) {
          puStack_1b8 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
          puStack_1bc = (uint *)&UNK_00701772;
          FUN_00aae91b();
        }
        local_8 = 0xd;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        if (0xf < local_48) {
          puStack_1b8 = (uint *)local_5c[0];
                    /* WARNING: Subroutine does not return */
          puStack_1bc = (uint *)&UNK_00701791;
          FUN_00aae91b();
        }
        puVar5 = DAT_0125b5e0;
        if (DAT_0125b5e0 == (undefined4 *)0x0) {
          puStack_1b8 = (uint *)0x180;
          puStack_1bc = (uint *)0x7017a7;
          param_2 = (int *)FUN_00aae9af();
          local_8 = 0x12;
          if (param_2 == (int *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puStack_1bc = (uint *)0x7017bb;
            puStack_1b8 = (uint *)param_2;
            puVar5 = (undefined4 *)FUN_00475150();
          }
          local_8 = 0x13;
          param_2 = (undefined4 *)0x0;
          if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
            puStack_1b8 = (uint *)0x1;
            puStack_1bc = (uint *)0x7017de;
            (**(code **)*DAT_0125b5e0)();
          }
        }
        DAT_0125b5e0 = puVar5;
        local_8 = 0xd;
        uStack_1c4 = (undefined4)*(undefined8 *)(DAT_0125b5e0 + 0x1b);
        puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1b) >> 0x20);
        puStack_1bc = (uint *)*(undefined8 *)(DAT_0125b5e0 + 0x1d);
        puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1d) >> 0x20);
        uStack_1c8 = 0x70180c;
        puStack_1c0 = (uint *)FUN_009a9880();
        puStack_1b8 = (uint *)0xffffffff;
        puStack_1bc = (uint *)0x0;
        local_8 = 0x14;
        uStack_1c4 = 0x70181f;
        FUN_00408ed0();
        local_8 = 0xd;
        if (0xf < local_18) {
          puStack_1b8 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
          puStack_1bc = (uint *)&UNK_00701832;
          FUN_00aae91b();
        }
        puStack_1b8 = (uint *)0xffffffff;
        puStack_1bc = (uint *)0x0;
        puStack_1c0 = (uint *)local_dc;
        *(undefined4 *)(param_1 + 0x14) = 0xf;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *param_1 = 0;
        uStack_1c4 = 0x701856;
        FUN_00408ed0();
        puStack_1b8 = (uint *)0xffffffff;
        local_8 = 0x15;
        puStack_1bc = (uint *)0x0;
        puStack_1c0 = (uint *)local_c0;
        *(undefined4 *)(param_1 + 0x30) = 0xf;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        param_1[0x1c] = 0;
        uStack_1c4 = 0x701874;
        FUN_00408ed0();
        puStack_1b8 = (uint *)0xffffffff;
        local_8 = 0x16;
        puStack_1bc = (uint *)0x0;
        puStack_1c0 = (uint *)local_a4;
        *(undefined4 *)(param_1 + 0x4c) = 0xf;
        *(undefined4 *)(param_1 + 0x48) = 0;
        param_1[0x38] = 0;
        uStack_1c4 = 0x701892;
        FUN_00408ed0();
        *(undefined4 *)(param_1 + 0x54) = local_88;
        param_1[0x58] = local_84;
        _local_8 = CONCAT31(uStack_7,0x17);
        puStack_1b8 = (uint *)0x7018ad;
        FUN_009adb70();
        if (local_3c == (undefined4 *)0x0) {
          local_3c = (undefined4 *)0x0;
          local_38 = (undefined4 *)0x0;
          local_34 = 0;
          puStack_1b8 = (uint *)0x701904;
          FUN_00459820();
          ExceptionList = local_10;
          return param_1;
        }
        while( true ) {
          if (local_3c == local_38) {
                    /* WARNING: Subroutine does not return */
            puStack_1bc = (uint *)&UNK_007018ed;
            FUN_00aae91b();
          }
          if (0xf < (uint)local_3c[5]) break;
          local_3c[5] = 0xf;
          local_3c[4] = 0;
          *(undefined1 *)local_3c = 0;
          local_3c = local_3c + 8;
        }
        puStack_1b8 = (uint *)*local_3c;
                    /* WARNING: Subroutine does not return */
        puStack_1bc = (uint *)&UNK_007018ce;
        FUN_00aae91b();
      }
      local_e0 = (undefined4 *)((int)local_e0 + 0x14);
      local_60 = local_60 + 1;
    } while (local_60 < iVar4);
  }
  puStack_1b8 = (uint *)0x701316;
  puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar9 + 0x84) + 0x2c))();
  piVar6 = (int *)*puVar5;
  while (piVar6 != (int *)0x0) {
    local_e0 = (undefined4 *)*piVar6;
    piVar6 = (int *)piVar6[2];
    puStack_1bc = (uint *)0x701339;
    puStack_1b8 = (uint *)param_2;
    cVar3 = (**(code **)(*(int *)((int)local_e0 + 0x1c) + 0x58))();
    if (cVar3 != '\0') {
      puStack_1b8 = (uint *)param_2;
      puStack_1bc = (uint *)param_1;
      puStack_1c0 = local_e0;
      uStack_1c4 = 0x70192e;
      FUN_006ed3a0();
      puStack_1b8 = (uint *)0x701939;
      FUN_00459820();
      ExceptionList = local_10;
      return param_1;
    }
  }
  if (*(char *)(*(int *)(iVar9 + 0x88) + 0x67) != '\0') {
    puStack_1b8 = (uint *)0xf;
    puStack_1bc = (uint *)0xe0ee68;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    puStack_1c0 = (uint *)0x701372;
    FUN_00409350();
    local_8 = 0x18;
    puStack_1b8 = local_80;
    puStack_1bc = (uint *)0x701387;
    piVar6 = (int *)(**(code **)(**(int **)(iVar9 + 0x88) + 0x7c))();
    local_8 = 0;
    if (0xf < local_6c) {
      puStack_1bc = (uint *)local_80[0];
                    /* WARNING: Subroutine does not return */
      puStack_1c0 = (uint *)&UNK_0070139b;
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    puStack_1bc = (uint *)0x7013b4;
    puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
    for (piVar6 = (int *)*puVar5; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
      local_e0 = (undefined4 *)*piVar6;
      puStack_1bc = (uint *)0x7013d7;
      puStack_1b8 = (uint *)param_2;
      cVar3 = (**(code **)(*(int *)((int)local_e0 + 0x1c) + 0x58))();
      if (cVar3 != '\0') {
        puStack_1b8 = (uint *)param_2;
        puStack_1bc = (uint *)0x701962;
        FUN_006eb950();
        goto LAB_00702878;
      }
    }
  }
  puStack_1b8 = (uint *)0x7013f0;
  puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar9 + 0x7c) + 0x2c))();
  puVar5 = (undefined4 *)*puVar5;
  do {
    if (puVar5 == (undefined4 *)0x0) {
      puStack_1b8 = (uint *)0x701425;
      puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar9 + 0x80) + 0x2c))();
      puVar5 = (undefined4 *)*puVar5;
      piVar6 = param_2;
      goto joined_r0x00701429;
    }
    puStack_1b8 = (uint *)*puVar5;
    puVar5 = (undefined4 *)puVar5[2];
    puStack_1c0 = (uint *)iVar9;
    uStack_1c4 = 0x70140c;
    puStack_1bc = (uint *)param_2;
    cVar3 = FUN_006fe7f0();
    uVar2 = local_8;
  } while (cVar3 == '\0');
LAB_00702869:
  local_8 = uVar2;
  puStack_1b8 = (uint *)param_1;
  puStack_1bc = (uint *)0x702878;
  FUN_0040c830();
LAB_00702878:
  puStack_1b8 = (uint *)0x702883;
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
  while( true ) {
    puStack_1b8 = (uint *)*puVar5;
    puVar5 = (undefined4 *)puVar5[2];
    puStack_1c0 = (uint *)iVar9;
    uStack_1c4 = 0x701446;
    puStack_1bc = (uint *)piVar6;
    cVar3 = FUN_006fe7f0();
    uVar2 = local_8;
    piVar6 = param_2;
    if (cVar3 != '\0') break;
joined_r0x00701429:
    param_2 = piVar6;
    if (puVar5 == (undefined4 *)0x0) {
      puStack_1b8 = (uint *)0x70145e;
      pbVar7 = (byte *)(**(code **)(*piVar6 + 0x44))();
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar7 = *(byte **)pbVar7;
      }
      pcVar12 = "select_all";
      goto LAB_00701470;
    }
  }
  goto LAB_00702869;
  while( true ) {
    bVar1 = pbVar7[1];
    bVar13 = bVar1 < (byte)pcVar12[1];
    if (bVar1 != pcVar12[1]) goto LAB_00701967;
    pbVar7 = pbVar7 + 2;
    pcVar12 = pcVar12 + 2;
    if (bVar1 == 0) break;
LAB_00701470:
    bVar1 = *pbVar7;
    bVar13 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_00701967:
      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_0070196c;
    }
    if (bVar1 == 0) break;
  }
  iVar4 = 0;
LAB_0070196c:
  if (iVar4 == 0) {
    puStack_1b8 = (uint *)0x1d;
    puStack_1bc = (uint *)0xe0f928;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    puStack_1c0 = (uint *)0x701990;
    FUN_00409350();
    puStack_1b8 = local_5c;
    puStack_1bc = (uint *)local_40;
    local_8 = 0x19;
    puStack_1c0 = (uint *)0x7019a1;
    FUN_009a8ee0();
    local_8 = 0x1a;
    puStack_1b8 = (uint *)0x7019ac;
    iVar4 = FUN_00475500();
    uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
    puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
    puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
    puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
    uStack_1c8 = 0x7019ce;
    puStack_1c0 = (uint *)FUN_009a9880();
    puStack_1b8 = (uint *)0xffffffff;
    puStack_1bc = (uint *)0x0;
    local_8 = 0x1b;
    uStack_1c4 = 0x7019e1;
    FUN_00408ed0();
    if (0xf < local_18) {
      puStack_1b8 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
      puStack_1bc = (uint *)&UNK_007019f0;
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0x1c;
    puStack_1b8 = (uint *)0x701a0c;
    FUN_009adb70();
    if (local_3c != (undefined4 *)0x0) {
      puStack_1b8 = (uint *)0x701a1b;
      FUN_009e6a80();
      puStack_1b8 = local_3c;
                    /* WARNING: Subroutine does not return */
      puStack_1bc = (uint *)&UNK_00701a24;
      FUN_00aae91b();
    }
    local_3c = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
    local_34 = 0;
LAB_00701bd2:
    local_8 = 0;
    uVar2 = local_8;
    if (0xf < local_48) {
      puStack_1b8 = (uint *)local_5c[0];
                    /* WARNING: Subroutine does not return */
      puStack_1bc = (uint *)&UNK_00701be1;
      FUN_00aae91b();
    }
    goto LAB_00702869;
  }
  puStack_1b8 = (uint *)0x701a45;
  (**(code **)(*piVar6 + 0x44))();
  puStack_1b8 = (uint *)0x701a4f;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    puStack_1b8 = (uint *)0x1f;
    puStack_1bc = (uint *)0xe0f948;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    puStack_1c0 = (uint *)0x701a73;
    FUN_00409350();
    puStack_1b8 = local_5c;
    puStack_1bc = (uint *)local_40;
    local_8 = 0x1d;
    puStack_1c0 = (uint *)0x701a84;
    FUN_009a8ee0();
    local_8 = 0x1e;
    puStack_1b8 = (uint *)0x701a8f;
    iVar4 = FUN_00475500();
    uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
    puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
    puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
    puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
    uStack_1c8 = 0x701ab1;
    puStack_1c0 = (uint *)FUN_009a9880();
    puStack_1b8 = (uint *)0xffffffff;
    puStack_1bc = (uint *)0x0;
    local_8 = 0x1f;
    uStack_1c4 = 0x701ac4;
    FUN_00408ed0();
    if (0xf < local_18) {
      puStack_1b8 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
      puStack_1bc = (uint *)&UNK_00701ad3;
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0x20;
    puStack_1b8 = (uint *)0x701aef;
    FUN_009adb70();
    puStack_1b8 = (uint *)0x701af6;
    FUN_004d8540();
    local_8 = 0;
    uVar2 = local_8;
    local_8 = 0;
    if (0xf < local_48) {
      puStack_1b8 = (uint *)local_5c[0];
                    /* WARNING: Subroutine does not return */
      puStack_1bc = (uint *)&UNK_00701b0c;
      FUN_00aae91b();
    }
    goto LAB_00702869;
  }
  puStack_1b8 = (uint *)0x701b1d;
  (**(code **)(*piVar6 + 0x44))();
  puStack_1b8 = (uint *)0x701b27;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    puStack_1b8 = (uint *)0x1d;
    puStack_1bc = (uint *)0xe0f968;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    puStack_1c0 = (uint *)0x701b4b;
    FUN_00409350();
    puStack_1b8 = local_5c;
    puStack_1bc = (uint *)local_40;
    local_8 = 0x21;
    puStack_1c0 = (uint *)0x701b5c;
    FUN_009a8ee0();
    local_8 = 0x22;
    puStack_1b8 = (uint *)0x701b67;
    iVar4 = FUN_00475500();
    uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
    puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
    puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
    puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
    uStack_1c8 = 0x701b89;
    puStack_1c0 = (uint *)FUN_009a9880();
    puStack_1b8 = (uint *)0xffffffff;
    puStack_1bc = (uint *)0x0;
    local_8 = 0x23;
    uStack_1c4 = 0x701b9c;
    FUN_00408ed0();
    if (0xf < local_18) {
      puStack_1b8 = (uint *)local_2c[0];
                    /* WARNING: Subroutine does not return */
      puStack_1bc = (uint *)&UNK_00701baf;
      FUN_00aae91b();
    }
    puStack_1b8 = (uint *)local_40;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0x21;
    puStack_1bc = (uint *)0x701bcc;
    FUN_009a9740();
    goto LAB_00701bd2;
  }
  puStack_1b8 = (uint *)0x701bf2;
  (**(code **)(*piVar6 + 0x44))();
  puStack_1b8 = (uint *)0x701bfc;
  cVar3 = FUN_0040b360();
  if (cVar3 == '\0') {
    puStack_1b8 = (uint *)0x701c7a;
    (**(code **)(*piVar6 + 0x44))();
    puStack_1b8 = (uint *)0x701c84;
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      puStack_1b8 = (uint *)0x701c95;
      FUN_009885d0();
      puStack_1bc = (uint *)local_40;
      local_8 = 0x27;
      puStack_1c0 = (uint *)0x701ca5;
      puStack_1b8 = local_2c;
      FUN_009a8ee0();
      local_8 = 0x28;
      puStack_1b8 = (uint *)0x701cb0;
      iVar4 = FUN_00475500();
      uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
      puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
      puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
      puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
      uStack_1c8 = 0x701cd2;
      puStack_1c0 = (uint *)FUN_009a9880();
      puStack_1b8 = (uint *)0xffffffff;
      puStack_1bc = (uint *)0x0;
      local_8 = 0x29;
      uStack_1c4 = 0x701ce5;
      FUN_00408ed0();
      puStack_1b8 = (uint *)0x701cec;
      FUN_00408ad0();
      _local_8 = CONCAT31(uStack_7,0x27);
      goto LAB_00702859;
    }
    puStack_1b8 = (uint *)0x701d02;
    (**(code **)(*piVar6 + 0x44))();
    puStack_1b8 = (uint *)0x701d0c;
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      puStack_1b8 = (uint *)0x701d1d;
      FUN_009885d0();
      puStack_1bc = (uint *)local_40;
      local_8 = 0x2a;
      puStack_1c0 = (uint *)0x701d2d;
      puStack_1b8 = local_2c;
      FUN_009a8ee0();
      local_8 = 0x2b;
      puStack_1b8 = (uint *)0x701d38;
      iVar4 = FUN_00475500();
      uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
      puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
      puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
      puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
      uStack_1c8 = 0x701d5a;
      puStack_1c0 = (uint *)FUN_009a9880();
      puStack_1b8 = (uint *)0xffffffff;
      puStack_1bc = (uint *)0x0;
      local_8 = 0x2c;
      uStack_1c4 = 0x701d6d;
      FUN_00408ed0();
      puStack_1b8 = (uint *)0x701d74;
      FUN_00408ad0();
      _local_8 = CONCAT31(uStack_7,0x2a);
      goto LAB_00702859;
    }
    puStack_1b8 = (uint *)0x701d8a;
    (**(code **)(*piVar6 + 0x44))();
    puStack_1b8 = (uint *)0x701d94;
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      puStack_1b8 = (uint *)0x701ea7;
      FUN_009885d0();
      local_8 = 0x32;
      puStack_1bc = (uint *)0x701ebb;
      puStack_1b8 = local_2c;
      piVar10 = (int *)(**(code **)(**(int **)(local_64 + 0x4c) + 0x34))();
      piVar6 = param_2;
      param_2 = (int *)CONCAT13(piVar10 == param_2,param_2._0_3_);
      local_8 = 0;
      puStack_1b8 = (uint *)0x701ece;
      FUN_00408ad0();
      if (param_2._3_1_ == '\0') {
        puStack_1b8 = (uint *)0x701f4e;
        FUN_009885d0();
        local_8 = 0x36;
        puStack_1b8 = local_2c;
        puStack_1bc = (uint *)0x701f63;
        piVar10 = (int *)(**(code **)(**(int **)(local_64 + 0x4c) + 0x34))();
        param_2 = (int *)CONCAT13(piVar10 == piVar6,param_2._0_3_);
        local_8 = 0;
        puStack_1b8 = (uint *)0x701f74;
        FUN_00408ad0();
        if (param_2._3_1_ == '\0') {
          puStack_1b8 = (uint *)0x701ff4;
          FUN_009885d0();
          local_8 = 0x3a;
          puStack_1b8 = local_2c;
          puStack_1bc = (uint *)0x702009;
          piVar10 = (int *)(**(code **)(**(int **)(local_64 + 0x4c) + 0x34))();
          param_2 = (int *)CONCAT13(piVar10 == piVar6,param_2._0_3_);
          local_8 = 0;
          puStack_1b8 = (uint *)0x70201a;
          FUN_00408ad0();
          if (param_2._3_1_ == '\0') {
            puStack_1b8 = (uint *)0x0;
            puStack_1bc = (uint *)(piVar6 + 5);
            puStack_1c0 = (uint *)0x70209b;
            iVar4 = FUN_00989090();
            if (iVar4 != -1) {
              iVar4 = *(int *)(local_64 + 0x1c4);
              uVar2 = local_8;
              if ((iVar4 != 0) && (*(int *)(iVar4 + 0x28) != 0)) {
                puStack_1b8 = (uint *)piVar6;
                puStack_1bc = (uint *)param_1;
                uStack_1c4 = 0x7020c2;
                puStack_1c0 = (uint *)iVar4;
                FUN_006fd530();
                puStack_1b8 = (uint *)0x7020cd;
                FUN_00459820();
                ExceptionList = local_10;
                return param_1;
              }
              goto LAB_00702869;
            }
            puStack_1b8 = (uint *)0x7020eb;
            (**(code **)(*piVar6 + 0x44))();
            puStack_1b8 = (uint *)0x7020f5;
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              puStack_1b8 = (uint *)0x702106;
              (**(code **)(*piVar6 + 0x44))();
              puStack_1b8 = (uint *)0x702110;
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') {
                puStack_1b8 = (uint *)0x702121;
                (**(code **)(*piVar6 + 0x44))();
                puStack_1b8 = (uint *)0x70212b;
                cVar3 = FUN_0040b360();
                if (cVar3 == '\0') {
                  puStack_1b8 = (uint *)0x70213c;
                  (**(code **)(*piVar6 + 0x44))();
                  puStack_1b8 = (uint *)0x702146;
                  cVar3 = FUN_0040b360();
                  if (cVar3 == '\0') {
                    puStack_1b8 = (uint *)0x702157;
                    (**(code **)(*piVar6 + 0x44))();
                    puStack_1b8 = (uint *)0x702161;
                    cVar3 = FUN_0040b360();
                    if (cVar3 == '\0') {
                      puStack_1b8 = (uint *)0x702172;
                      (**(code **)(*piVar6 + 0x44))();
                      puStack_1b8 = (uint *)0x70217c;
                      cVar3 = FUN_0040b360();
                      if (cVar3 == '\0') {
                        puStack_1b8 = (uint *)0x70218d;
                        (**(code **)(*piVar6 + 0x44))();
                        puStack_1b8 = (uint *)0x702197;
                        cVar3 = FUN_0040b360();
                        if (cVar3 != '\0') {
                          local_e4 = *(undefined4 *)(local_64 + 0x3bc);
                          puStack_1b8 = (uint *)0x7021c1;
                          puStack_1c0 = (uint *)FUN_00540520();
                          puStack_1b8 = (uint *)0xffffffff;
                          puStack_1bc = (uint *)0x0;
                          _local_8 = CONCAT31(uStack_7,0x4f);
                          uStack_1c4 = 0x7021d4;
                          FUN_00408ed0();
                          goto LAB_00702861;
                        }
                        puStack_1b8 = (uint *)0x7021e2;
                        (**(code **)(*piVar6 + 0x44))();
                        puStack_1b8 = (uint *)0x7021ec;
                        cVar3 = FUN_0040b360();
                        if (cVar3 == '\0') {
                          puStack_1b8 = (uint *)0x7021fd;
                          (**(code **)(*piVar6 + 0x44))();
                          puStack_1b8 = (uint *)0x702207;
                          cVar3 = FUN_0040b360();
                          if (cVar3 == '\0') {
                            puStack_1b8 = (uint *)0x702218;
                            (**(code **)(*piVar6 + 0x44))();
                            puStack_1b8 = (uint *)0x702222;
                            cVar3 = FUN_0040b360();
                            if (cVar3 == '\0') {
                              puStack_1b8 = (uint *)0x70229c;
                              (**(code **)(*piVar6 + 0x44))();
                              puStack_1b8 = (uint *)0x7022a6;
                              cVar3 = FUN_0040b360();
                              if (cVar3 == '\0') {
                                puStack_1b8 = (uint *)0x70232c;
                                (**(code **)(*piVar6 + 0x44))();
                                puStack_1b8 = (uint *)0x702336;
                                cVar3 = FUN_0040b360();
                                if (cVar3 == '\0') {
                                  puStack_1b8 = (uint *)0x7023bc;
                                  (**(code **)(*piVar6 + 0x44))();
                                  puStack_1b8 = (uint *)0x7023c6;
                                  cVar3 = FUN_0040b360();
                                  uVar2 = local_8;
                                  if (cVar3 == '\0') goto LAB_00702869;
                                  puStack_1b8 = (uint *)0x7023db;
                                  FUN_009885d0();
                                  puStack_1bc = (uint *)local_40;
                                  local_8 = 0x61;
                                  puStack_1c0 = (uint *)0x7023eb;
                                  puStack_1b8 = local_2c;
                                  FUN_009a8ee0();
                                  local_8 = 0x62;
                                  puStack_1b8 = (uint *)0x7023f6;
                                  FUN_00475500();
                                  puStack_1b8 = (uint *)0x702403;
                                  puVar11 = (undefined8 *)FUN_0040b440();
                                  uStack_1c4 = (undefined4)*puVar11;
                                  puStack_1c0 = (uint *)((ulonglong)*puVar11 >> 0x20);
                                  puStack_1bc = (uint *)puVar11[1];
                                  puStack_1b8 = (uint *)((ulonglong)puVar11[1] >> 0x20);
                                  uStack_1c8 = 0x702424;
                                  puStack_1c0 = (uint *)FUN_009a9880();
                                  puStack_1b8 = (uint *)0xffffffff;
                                  puStack_1bc = (uint *)0x0;
                                  local_8 = 99;
                                  uStack_1c4 = 0x702437;
                                  FUN_00408ed0();
                                  puStack_1b8 = (uint *)0x70243e;
                                  FUN_00408ad0();
                                  _local_8 = CONCAT31(uStack_7,0x61);
                                }
                                else {
                                  puStack_1b8 = (uint *)0x702347;
                                  FUN_009885d0();
                                  puStack_1bc = (uint *)local_40;
                                  local_8 = 0x5e;
                                  puStack_1c0 = (uint *)0x702357;
                                  puStack_1b8 = local_2c;
                                  FUN_009a8ee0();
                                  local_8 = 0x5f;
                                  puStack_1b8 = (uint *)0x702362;
                                  FUN_00475500();
                                  puStack_1b8 = (uint *)0x70236f;
                                  puVar11 = (undefined8 *)FUN_0040b440();
                                  uStack_1c4 = (undefined4)*puVar11;
                                  puStack_1c0 = (uint *)((ulonglong)*puVar11 >> 0x20);
                                  puStack_1bc = (uint *)puVar11[1];
                                  puStack_1b8 = (uint *)((ulonglong)puVar11[1] >> 0x20);
                                  uStack_1c8 = 0x702390;
                                  puStack_1c0 = (uint *)FUN_009a9880();
                                  puStack_1b8 = (uint *)0xffffffff;
                                  puStack_1bc = (uint *)0x0;
                                  local_8 = 0x60;
                                  uStack_1c4 = 0x7023a3;
                                  FUN_00408ed0();
                                  puStack_1b8 = (uint *)0x7023aa;
                                  FUN_00408ad0();
                                  _local_8 = CONCAT31(uStack_7,0x5e);
                                }
                              }
                              else {
                                puStack_1b8 = (uint *)0x7022b7;
                                FUN_009885d0();
                                puStack_1bc = (uint *)local_40;
                                local_8 = 0x5b;
                                puStack_1c0 = (uint *)0x7022c7;
                                puStack_1b8 = local_2c;
                                FUN_009a8ee0();
                                local_8 = 0x5c;
                                puStack_1b8 = (uint *)0x7022d2;
                                FUN_00475500();
                                puStack_1b8 = (uint *)0x7022df;
                                puVar11 = (undefined8 *)FUN_0040b440();
                                uStack_1c4 = (undefined4)*puVar11;
                                puStack_1c0 = (uint *)((ulonglong)*puVar11 >> 0x20);
                                puStack_1bc = (uint *)puVar11[1];
                                puStack_1b8 = (uint *)((ulonglong)puVar11[1] >> 0x20);
                                uStack_1c8 = 0x702300;
                                puStack_1c0 = (uint *)FUN_009a9880();
                                puStack_1b8 = (uint *)0xffffffff;
                                puStack_1bc = (uint *)0x0;
                                local_8 = 0x5d;
                                uStack_1c4 = 0x702313;
                                FUN_00408ed0();
                                puStack_1b8 = (uint *)0x70231a;
                                FUN_00408ad0();
                                _local_8 = CONCAT31(uStack_7,0x5b);
                              }
                            }
                            else {
                              puStack_1b8 = (uint *)0x702233;
                              FUN_009885d0();
                              puStack_1bc = (uint *)local_40;
                              local_8 = 0x58;
                              puStack_1c0 = (uint *)0x702243;
                              puStack_1b8 = local_2c;
                              FUN_009a8ee0();
                              local_8 = 0x59;
                              puStack_1b8 = (uint *)0x70224e;
                              iVar4 = FUN_00475500();
                              uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
                              puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >>
                                                    0x20);
                              puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
                              puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >>
                                                    0x20);
                              uStack_1c8 = 0x702270;
                              puStack_1c0 = (uint *)FUN_009a9880();
                              puStack_1b8 = (uint *)0xffffffff;
                              puStack_1bc = (uint *)0x0;
                              local_8 = 0x5a;
                              uStack_1c4 = 0x702283;
                              FUN_00408ed0();
                              puStack_1b8 = (uint *)0x70228a;
                              FUN_00408ad0();
                              _local_8 = CONCAT31(uStack_7,0x58);
                            }
                            goto LAB_00702859;
                          }
                        }
                        puStack_1b8 = (uint *)0x70244c;
                        iVar4 = FUN_006e21a0();
                        if (iVar4 < 1) {
                          if (DAT_0131bb34 == 0) {
                            puStack_1b8 = (uint *)0x188;
                            puStack_1bc = (uint *)0x702504;
                            param_2 = (int *)FUN_00aae9af();
                            local_8 = 0x54;
                            if (param_2 == (int *)0x0) {
                              puStack_1b8 = (uint *)0x0;
                            }
                            else {
                              puStack_1b8 = (uint *)0x702519;
                              puStack_1b8 = (uint *)FUN_0041a160();
                            }
                            local_8 = 0;
                            puStack_1bc = (uint *)0x702526;
                            FUN_00423700();
                          }
                          if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <
                              *(int *)(DAT_0131bb34 + 0x180)) {
                            puStack_1b8 = (uint *)0x702543;
                            puStack_1bc = (uint *)FUN_0096bb70();
                          }
                          else {
                            puStack_1bc = *(uint **)(*(int *)(DAT_0131bb34 + 0xc) +
                                                    *(int *)(DAT_0131bb34 + 0x180) * 4);
                          }
                          puStack_1b8 = local_5c;
                          puStack_1c0 = (uint *)0x702555;
                          puStack_1b8 = (uint *)FUN_0096d650();
                          puStack_1bc = local_2c;
                          local_8 = 0x56;
                          puStack_1c0 = (uint *)0x70256d;
                          puStack_1c0 = (uint *)FUN_0042c180();
                          puStack_1b8 = (uint *)0xffffffff;
                          puStack_1bc = (uint *)0x0;
                          _local_8 = CONCAT31(uStack_7,0x57);
                          uStack_1c4 = 0x702583;
                          FUN_00408ed0();
                          puStack_1b8 = (uint *)0x70258b;
                          FUN_00408ad0();
                        }
                        else {
                          if (DAT_0131bb34 == 0) {
                            puStack_1b8 = (uint *)0x188;
                            puStack_1bc = (uint *)0x702467;
                            param_2 = (int *)FUN_00aae9af();
                            local_8 = 0x50;
                            if (param_2 == (int *)0x0) {
                              puStack_1b8 = (uint *)0x0;
                            }
                            else {
                              puStack_1b8 = (uint *)0x70247c;
                              puStack_1b8 = (uint *)FUN_0041a160();
                            }
                            local_8 = 0;
                            puStack_1bc = (uint *)0x702489;
                            FUN_00423700();
                          }
                          if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <
                              *(int *)(DAT_0131bb34 + 0x180)) {
                            puStack_1b8 = (uint *)0x7024a6;
                            puStack_1bc = (uint *)FUN_0096bb70();
                          }
                          else {
                            puStack_1bc = *(uint **)(*(int *)(DAT_0131bb34 + 0xc) +
                                                    *(int *)(DAT_0131bb34 + 0x180) * 4);
                          }
                          puStack_1b8 = local_5c;
                          puStack_1c0 = (uint *)0x7024b8;
                          puStack_1b8 = (uint *)FUN_0096d650();
                          puStack_1bc = local_2c;
                          local_8 = 0x52;
                          puStack_1c0 = (uint *)0x7024d0;
                          puStack_1c0 = (uint *)FUN_0042c180();
                          puStack_1b8 = (uint *)0xffffffff;
                          puStack_1bc = (uint *)0x0;
                          _local_8 = CONCAT31(uStack_7,0x53);
                          uStack_1c4 = 0x7024e6;
                          FUN_00408ed0();
                          puStack_1b8 = (uint *)0x7024ee;
                          FUN_00408ad0();
                        }
                        goto LAB_00702861;
                      }
                    }
                    puStack_1b8 = (uint *)0x7025a0;
                    FUN_009885d0();
                    puStack_1bc = (uint *)local_40;
                    local_8 = 0x4c;
                    puStack_1c0 = (uint *)0x7025b0;
                    puStack_1b8 = local_2c;
                    FUN_009a8ee0();
                    local_8 = 0x4d;
                    puStack_1b8 = (uint *)0x7025bb;
                    iVar4 = FUN_00475500();
                    uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
                    puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
                    puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
                    puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
                    uStack_1c8 = 0x7025dd;
                    puStack_1c0 = (uint *)FUN_009a9880();
                    puStack_1b8 = (uint *)0xffffffff;
                    puStack_1bc = (uint *)0x0;
                    local_8 = 0x4e;
                    uStack_1c4 = 0x7025f0;
                    FUN_00408ed0();
                    puStack_1b8 = (uint *)0x7025f7;
                    FUN_00408ad0();
                    _local_8 = CONCAT31(uStack_7,0x4c);
                    goto LAB_00702859;
                  }
                }
                puStack_1b8 = (uint *)0x702611;
                FUN_009885d0();
                puStack_1bc = (uint *)local_40;
                local_8 = 0x41;
                puStack_1c0 = (uint *)0x702621;
                puStack_1b8 = local_2c;
                FUN_009a8ee0();
                local_8 = 0x42;
                puStack_1b8 = (uint *)0x70262c;
                iVar4 = FUN_00475500();
                uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
                puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
                puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
                puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
                uStack_1c8 = 0x70264e;
                puStack_1c0 = (uint *)FUN_009a9880();
                puStack_1b8 = (uint *)0xffffffff;
                puStack_1bc = (uint *)0x0;
                local_8 = 0x43;
                uStack_1c4 = 0x702661;
                FUN_00408ed0();
                puStack_1b8 = (uint *)0x702668;
                FUN_00408ad0();
                puStack_1b8 = (uint *)local_40;
                local_8 = 0x41;
                puStack_1bc = (uint *)0x702675;
                FUN_009a9740();
                local_8 = 0;
                puStack_1b8 = (uint *)0x702680;
                FUN_00408ad0();
                local_e4 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
                if ((*(char *)(iVar4 + 0x31) != '\0') &&
                   (uVar2 = local_8, *(char *)(iVar4 + 0xb20) != '\0')) goto LAB_00702869;
                puStack_1b8 = (uint *)0x7026c1;
                FUN_009885d0();
                local_8 = 0x44;
                puStack_1b8 = (uint *)0x7026d2;
                FUN_009885d0();
                puStack_1b8 = local_5c;
                puStack_1c0 = (uint *)local_40;
                local_8 = 0x45;
                uStack_1c4 = 0x7026e6;
                puStack_1bc = local_2c;
                param_2 = (int *)FUN_009a8ee0();
                local_8 = 0x46;
                puStack_1bc = (uint *)0x7026f2;
                iVar9 = FUN_00475500();
                uStack_1c8 = (undefined4)*(undefined8 *)(iVar9 + 0x6c);
                uStack_1c4 = (undefined4)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20);
                puStack_1c0 = (uint *)*(undefined8 *)(iVar9 + 0x74);
                puStack_1bc = (uint *)((ulonglong)*(undefined8 *)(iVar9 + 0x74) >> 0x20);
                uStack_1cc = 0x702718;
                puStack_1bc = (uint *)FUN_009a9880();
                param_2 = (int *)auStack_1d8;
                local_8 = 0x47;
                FUN_009885d0();
                param_2 = (int *)CONCAT31(param_2._1_3_,*(undefined1 *)(iVar4 + 0x31));
                FUN_009c98f0(local_130,param_2);
                local_8 = 0x48;
                puStack_1c0 = (uint *)0x702759;
                FUN_00988f20();
                local_8 = 0x49;
                puStack_1bc = (uint *)0x702767;
                FUN_00988f20();
                local_8 = 0x4a;
                puStack_1b8 = (uint *)0x702776;
                FUN_00989020();
                puStack_1b8 = (uint *)0x70277e;
                FUN_00408ad0();
                puStack_1b8 = (uint *)0x702789;
                FUN_00408ad0();
                puStack_1b8 = (uint *)0x702794;
                FUN_00408ad0();
                puStack_1b8 = (uint *)0x70279f;
                FUN_00408ad0();
                puStack_1b8 = (uint *)local_40;
                local_8 = 0x45;
                puStack_1bc = (uint *)0x7027ac;
                FUN_009a9740();
                puStack_1b8 = (uint *)0x7027b4;
                FUN_00408ad0();
                local_8 = 0;
                puStack_1b8 = (uint *)0x7027bf;
                FUN_00408ad0();
                puStack_1b8 = (uint *)0xc;
                puStack_1bc = (uint *)local_114;
                puStack_1c0 = (uint *)0x7027d9;
                (**(code **)(*(int *)(iVar4 + 0xaa8) + 0x20))();
                _local_8 = CONCAT31(uStack_7,0x4b);
                puStack_1b8 = (uint *)0x7027e2;
                FUN_00989020();
                goto LAB_00702861;
              }
            }
            puStack_1b8 = (uint *)0x7027f7;
            FUN_009885d0();
            puStack_1bc = (uint *)local_40;
            local_8 = 0x3e;
            puStack_1c0 = (uint *)0x702807;
            puStack_1b8 = local_2c;
            FUN_009a8ee0();
            local_8 = 0x3f;
            puStack_1b8 = (uint *)0x702812;
            iVar4 = FUN_00475500();
            uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
            puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
            puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
            puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
            uStack_1c8 = 0x702837;
            puStack_1c0 = (uint *)FUN_009a9880();
            puStack_1b8 = (uint *)0xffffffff;
            puStack_1bc = (uint *)0x0;
            local_8 = 0x40;
            uStack_1c4 = 0x70284a;
            FUN_00408ed0();
            puStack_1b8 = (uint *)0x702851;
            FUN_00408ad0();
            _local_8 = CONCAT31(uStack_7,0x3e);
          }
          else {
            puStack_1b8 = (uint *)0x70202c;
            FUN_009885d0();
            puStack_1bc = (uint *)local_40;
            local_8 = 0x3b;
            puStack_1c0 = (uint *)0x70203c;
            puStack_1b8 = local_2c;
            FUN_009a8ee0();
            local_8 = 0x3c;
            puStack_1b8 = (uint *)0x702047;
            iVar4 = FUN_00475500();
            uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
            puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
            puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
            puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
            uStack_1c8 = 0x702069;
            puStack_1c0 = (uint *)FUN_009a9880();
            puStack_1b8 = (uint *)0xffffffff;
            puStack_1bc = (uint *)0x0;
            local_8 = 0x3d;
            uStack_1c4 = 0x70207c;
            FUN_00408ed0();
            puStack_1b8 = (uint *)0x702083;
            FUN_00408ad0();
            _local_8 = CONCAT31(uStack_7,0x3b);
          }
        }
        else {
          puStack_1b8 = (uint *)0x701f86;
          FUN_009885d0();
          puStack_1bc = (uint *)local_40;
          local_8 = 0x37;
          puStack_1c0 = (uint *)0x701f96;
          puStack_1b8 = local_2c;
          FUN_009a8ee0();
          local_8 = 0x38;
          puStack_1b8 = (uint *)0x701fa1;
          iVar4 = FUN_00475500();
          uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
          puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
          puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
          puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
          uStack_1c8 = 0x701fc3;
          puStack_1c0 = (uint *)FUN_009a9880();
          puStack_1b8 = (uint *)0xffffffff;
          puStack_1bc = (uint *)0x0;
          local_8 = 0x39;
          uStack_1c4 = 0x701fd6;
          FUN_00408ed0();
          puStack_1b8 = (uint *)0x701fdd;
          FUN_00408ad0();
          _local_8 = CONCAT31(uStack_7,0x37);
        }
      }
      else {
        puStack_1b8 = (uint *)0x701ee0;
        FUN_009885d0();
        puStack_1bc = (uint *)local_40;
        local_8 = 0x33;
        puStack_1c0 = (uint *)0x701ef0;
        puStack_1b8 = local_2c;
        FUN_009a8ee0();
        local_8 = 0x34;
        puStack_1b8 = (uint *)0x701efb;
        iVar4 = FUN_00475500();
        uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
        puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
        puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
        puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
        uStack_1c8 = 0x701f1d;
        puStack_1c0 = (uint *)FUN_009a9880();
        puStack_1b8 = (uint *)0xffffffff;
        puStack_1bc = (uint *)0x0;
        local_8 = 0x35;
        uStack_1c4 = 0x701f30;
        FUN_00408ed0();
        puStack_1b8 = (uint *)0x701f37;
        FUN_00408ad0();
        _local_8 = CONCAT31(uStack_7,0x33);
      }
      goto LAB_00702859;
    }
    if ((uint)piVar6[10] < 0x10) {
      piVar6 = piVar6 + 5;
    }
    else {
      piVar6 = (int *)piVar6[5];
    }
    if (DAT_0131bb34 == 0) {
      puStack_1b8 = (uint *)0x188;
      puStack_1bc = (uint *)0x701dbc;
      param_2 = (int *)FUN_00aae9af();
      local_8 = 0x2d;
      if (param_2 == (int *)0x0) {
        puStack_1b8 = (uint *)0x0;
      }
      else {
        puStack_1b8 = (uint *)0x701dd1;
        puStack_1b8 = (uint *)FUN_0041a160();
      }
      local_8 = 0;
      puStack_1bc = (uint *)0x701dde;
      FUN_00423700();
    }
    iVar4 = DAT_0131bb34;
    puStack_1bc = (uint *)0x701dea;
    puStack_1b8 = (uint *)piVar6;
    iVar9 = FUN_00aaf0c5();
    if (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2 < iVar9) {
      puStack_1b8 = (uint *)0x701dff;
      puStack_1bc = (uint *)FUN_0096bb70();
    }
    else {
      puStack_1bc = *(uint **)(*(int *)(iVar4 + 0xc) + iVar9 * 4);
    }
    puStack_1b8 = local_5c;
    if (*(char *)((int)puStack_1bc + 0x3da) == '\0') {
      puStack_1c0 = (uint *)0x701e5c;
      puStack_1b8 = (uint *)FUN_0096d650();
      puStack_1bc = local_2c;
      local_8 = 0x30;
      puStack_1c0 = (uint *)0x701e74;
      puStack_1c0 = (uint *)FUN_0042c180();
      puStack_1b8 = (uint *)0xffffffff;
      puStack_1bc = (uint *)0x0;
      _local_8 = CONCAT31(uStack_7,0x31);
      uStack_1c4 = 0x701e8a;
      FUN_00408ed0();
      puStack_1b8 = (uint *)0x701e92;
      FUN_00408ad0();
    }
    else {
      puStack_1c0 = (uint *)0x701e19;
      puStack_1b8 = (uint *)FUN_0096d650();
      puStack_1bc = local_2c;
      local_8 = 0x2e;
      puStack_1c0 = (uint *)0x701e31;
      puStack_1c0 = (uint *)FUN_0042c180();
      puStack_1b8 = (uint *)0xffffffff;
      puStack_1bc = (uint *)0x0;
      _local_8 = CONCAT31(uStack_7,0x2f);
      uStack_1c4 = 0x701e47;
      FUN_00408ed0();
      puStack_1b8 = (uint *)0x701e4f;
      FUN_00408ad0();
    }
  }
  else {
    puStack_1b8 = (uint *)0x701c0d;
    FUN_009885d0();
    puStack_1bc = (uint *)local_40;
    local_8 = 0x24;
    puStack_1c0 = (uint *)0x701c1d;
    puStack_1b8 = local_2c;
    FUN_009a8ee0();
    local_8 = 0x25;
    puStack_1b8 = (uint *)0x701c28;
    iVar4 = FUN_00475500();
    uStack_1c4 = (undefined4)*(undefined8 *)(iVar4 + 0x6c);
    puStack_1c0 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x6c) >> 0x20);
    puStack_1bc = (uint *)*(undefined8 *)(iVar4 + 0x74);
    puStack_1b8 = (uint *)((ulonglong)*(undefined8 *)(iVar4 + 0x74) >> 0x20);
    uStack_1c8 = 0x701c4a;
    puStack_1c0 = (uint *)FUN_009a9880();
    puStack_1b8 = (uint *)0xffffffff;
    puStack_1bc = (uint *)0x0;
    local_8 = 0x26;
    uStack_1c4 = 0x701c5d;
    FUN_00408ed0();
    puStack_1b8 = (uint *)0x701c64;
    FUN_00408ad0();
    _local_8 = CONCAT31(uStack_7,0x24);
LAB_00702859:
    puStack_1b8 = (uint *)local_40;
    puStack_1bc = (uint *)0x70285e;
    FUN_009a9740();
  }
LAB_00702861:
  local_8 = 0;
  puStack_1b8 = (uint *)0x702869;
  FUN_00408ad0();
  uVar2 = local_8;
  goto LAB_00702869;
}

