// FUN_0067a950 @ 0067a950 body=[[0067a950, 0067ab3e] [0067ab42, 0067ab62] [0067ab66, 0067ab8c] [0067ab90, 0067abc0] [0067abc4, 0067ac4e] [0067ac52, 0067acf6] [0067acfa, 0067ad42] [0067ad46, 0067ad75]]


void FUN_0067a950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  void **ppvVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  float10 fVar10;
  undefined1 local_ec [8];
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_ac;
  uint uStack_a8;
  undefined4 local_a4;
  uint uStack_a0;
  undefined4 local_9c;
  uint uStack_98;
  undefined4 local_94;
  uint uStack_90;
  undefined4 local_8c;
  uint uStack_88;
  undefined4 local_84;
  uint uStack_80;
  double local_7c;
  undefined4 local_74;
  uint uStack_70;
  undefined4 local_6c;
  uint uStack_68;
  undefined4 local_64;
  uint uStack_60;
  undefined4 local_5c;
  uint uStack_58;
  char local_54 [4];
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  double local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b4c616;
  ppvVar5 = &local_10;
  local_10 = ExceptionList;
  while( true ) {
    ExceptionList = ppvVar5;
    if (param_2 == param_3) {
      param_1[1] = param_5;
      *param_1 = param_4;
      ExceptionList = local_10;
      return;
    }
    local_8 = 0xffffffff;
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    FUN_00409350("          ",10);
    local_8 = 0;
    iVar9 = 0;
    if (0 < param_5) {
      do {
        FUN_00448aa0(local_e4,0,0xffffffff);
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_5);
    }
    fVar10 = (float10)FUN_009f49f0();
    local_18 = (double)fVar10;
    iVar9 = param_2[0x15];
    local_7c = 1.0;
    if ((iVar9 != 0) && (*(int *)(iVar9 + 0x10) != 0)) {
      local_8c = DAT_01258ac8;
      uStack_88 = DAT_01258acc & 0x7fffffff;
      uStack_70 = DAT_01258acc & 0x80000000;
      uVar2 = param_2[0xf];
      local_a4 = (undefined4)*(ulonglong *)(param_2 + 0xe);
      local_74 = 0;
      uStack_a0 = uVar2 & 0x7fffffff;
      uStack_a8 = uVar2 & 0x80000000;
      dVar4 = -(double)(longlong)(((ulonglong)DAT_01258acc & 0x80000000) << 0x20) +
              (double)(CONCAT44(DAT_01258acc,DAT_01258ac8) & 0x7fffffffffffffff);
      uVar3 = *(uint *)(iVar9 + 0x34);
      local_6c = *(undefined4 *)(iVar9 + 0x30);
      local_ac = 0;
      uStack_68 = uVar3 & 0x7fffffff;
      uStack_98 = uVar3 & 0x80000000;
      local_9c = 0;
      local_7c = ((-(double)(longlong)(((ulonglong)uVar2 & 0x80000000) << 0x20) +
                  (double)(*(ulonglong *)(param_2 + 0xe) & 0x7fffffffffffffff)) / dVar4) /
                 ((-(double)(longlong)(((ulonglong)uVar3 & 0x80000000) << 0x20) +
                  (double)(*(ulonglong *)(iVar9 + 0x30) & 0x7fffffffffffffff)) / dVar4);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00df9638,2);
    local_8._0_1_ = 1;
    if ((uint)param_2[7] < 0x10) {
      pcVar8 = (char *)(param_2 + 2);
    }
    else {
      pcVar8 = (char *)param_2[2];
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    pcVar6 = pcVar8;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
    local_8._0_1_ = 2;
    uVar7 = FUN_00988f20(local_34);
    local_8._0_1_ = 3;
    FUN_00448aa0(uVar7,0,0xffffffff);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c8);
    }
    local_8._0_1_ = 0;
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    uVar7 = FUN_00988dc0(local_50,3);
    local_8._0_1_ = 4;
    FUN_00448aa0(uVar7,0,0xffffffff);
    local_8._0_1_ = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    FUN_00448740(&DAT_00dfbfa4,2);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8._0_1_ = 5;
    pcVar6 = __itoa((int)(local_7c * 100.0 + 0.5),local_54,10);
    pcVar8 = pcVar6;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
    local_8._0_1_ = 6;
    FUN_00448aa0(local_34,0,0xffffffff);
    local_8._0_1_ = 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    FUN_00448740("%, tot: ",8);
    local_84 = (undefined4)*(ulonglong *)(param_2 + 0xe);
    uVar2 = param_2[0xf];
    uStack_80 = uVar2 & 0x7fffffff;
    uStack_58 = uVar2 & 0x80000000;
    local_5c = 0;
    uStack_90 = DAT_01258acc & 0x7fffffff;
    uStack_60 = DAT_01258acc & 0x80000000;
    local_94 = DAT_01258ac8;
    local_64 = 0;
    local_18 = (-(double)(longlong)(((ulonglong)uVar2 & 0x80000000) << 0x20) +
               (double)(*(ulonglong *)(param_2 + 0xe) & 0x7fffffffffffffff)) /
               (-(double)(longlong)(((ulonglong)DAT_01258acc & 0x80000000) << 0x20) +
               (double)(CONCAT44(DAT_01258acc,DAT_01258ac8) & 0x7fffffffffffffff));
    uVar7 = FUN_00988dc0(local_50,3);
    local_8._0_1_ = 7;
    FUN_00448aa0(uVar7,0,0xffffffff);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    FUN_00448740(&DAT_00dfcd84,2);
    FUN_0067a950(local_ec,*(undefined4 *)param_2[0x12],(undefined4 *)param_2[0x12],param_4,
                 param_5 + 1);
    local_8 = 0xffffffff;
    if (0xf < local_d0) break;
    param_2 = (undefined4 *)*param_2;
    ppvVar5 = ExceptionList;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_e4[0]);
}

