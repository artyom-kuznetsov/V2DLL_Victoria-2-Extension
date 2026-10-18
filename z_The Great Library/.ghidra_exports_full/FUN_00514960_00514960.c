// FUN_00514960 @ 00514960 body=[[00514960, 00514a4a] [00514a4e, 00514cac] [00514cb0, 00514cd5] [00514cd9, 00514cfe] [00514d02, 00514d27] [00514d2b, 00514d50] [00514d54, 00514d79] [00514d7d, 00514da2] [00514da6, 00514dcb] [00514dcf, 00514df4] [00514df8, 00514e17] [00514e1b, 00514e31] [00514e35, 00514e51] [00514e55, 00514e7a] [00514e7e, 00514e93]]


undefined4 FUN_00514960(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined8 uVar5;
  undefined1 local_1b4 [20];
  uint local_1a0;
  uint local_198;
  undefined4 local_188;
  uint local_184;
  uint local_17c [4];
  undefined4 local_16c;
  uint local_168;
  uint local_160 [4];
  undefined4 local_150;
  uint local_14c;
  uint local_144;
  undefined4 local_134;
  uint local_130;
  uint local_128;
  undefined4 local_118;
  uint local_114;
  uint local_10c [4];
  undefined4 local_fc;
  uint local_f8;
  uint local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  char local_48 [4];
  uint local_44;
  undefined4 local_34;
  uint local_30;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b74a07;
  local_10 = ExceptionList;
  local_1c = (undefined1 *)0x0;
  ExceptionList = &local_10;
  local_1c = (undefined1 *)FUN_00514ea0();
  local_18 = FUN_005db9b0();
  local_20 = *(int *)(*(int *)(in_ECX + 0xa60) + 0x360);
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  FUN_00409350();
  local_8 = 0;
  local_14 = (undefined1 *)FUN_004a2f70();
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)DAT_0131be94;
  }
  piVar2 = *(int **)(in_ECX + 0x84c);
  if (*(int *)((int)local_14 + 0x5c) == 1) {
    cVar1 = (**(code **)(*piVar2 + 0x20))();
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_00974850();
    }
    else {
      piVar2 = *(int **)(piVar2[0x16] + *(int *)((int)local_14 + 0x50) * 4);
    }
  }
  else {
    piVar2 = (int *)FUN_00974850();
  }
  (**(code **)(*piVar2 + 0x18))();
  local_8._0_1_ = 2;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4 = local_d4 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 3;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  local_6c = 0xf;
  local_70 = 0;
  local_80 = local_80 & 0xffffff00;
  FUN_00409350();
  local_14 = &stack0xfffffe34;
  local_8._0_1_ = 5;
  FUN_00401000(0x47c35040);
  local_14 = (undefined1 *)FUN_00b31c00();
  local_24 = local_20 >> 0x1f;
  local_28 = local_20;
  uVar5 = __allmul(local_14,(int)local_14 >> 0x1f,local_20,local_24);
  __alldiv(uVar5,1000,0);
  FUN_00988a50(local_17c);
  local_8._0_1_ = 6;
  local_20 = FUN_00988f20();
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  local_8._0_1_ = 8;
  pcVar3 = __itoa(local_18,local_48,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 9;
  local_18 = FUN_0043ec10(local_10c,&DAT_00dfd18c,local_b8);
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  local_8._0_1_ = 0xb;
  pcVar3 = __itoa((int)local_1c,local_48,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_1c = &stack0xfffffe34;
  local_8._0_1_ = 0xc;
  uVar5 = __allmul(local_14,(int)local_14 >> 0x1f,local_28,local_24);
  __alldiv(uVar5,1000,0);
  FUN_00988a50(local_160);
  local_8._0_1_ = 0xd;
  uVar4 = FUN_00988f20();
  local_8._0_1_ = 0xe;
  FUN_0043e9a0(local_f0,"IMPACT",uVar4,"POLICY",local_1b4);
  local_8._0_1_ = 0xf;
  FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x10);
  FUN_00988f20();
  if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_114 = 0xf;
  local_118 = 0;
  local_128 = local_128 & 0xffffff00;
  if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_dc = 0xf;
  local_e0 = 0;
  local_f0[0] = local_f0[0] & 0xffffff00;
  if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_184 = 0xf;
  local_188 = 0;
  local_198 = local_198 & 0xffffff00;
  if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_14c = 0xf;
  local_150 = 0;
  local_160[0] = local_160[0] & 0xffffff00;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f8 = 0xf;
  local_fc = 0;
  local_10c[0] = local_10c[0] & 0xffffff00;
  if (local_a4 < 0x10) {
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_130 = 0xf;
    local_134 = 0;
    local_144 = local_144 & 0xffffff00;
    if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_168 = 0xf;
    local_16c = 0;
    local_17c[0] = local_17c[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (local_50 < 0x10) {
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c0 = 0xf;
      local_c4 = 0;
      local_d4 = local_d4 & 0xffffff00;
      if (local_1a0 < 0x10) {
        ExceptionList = local_10;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

