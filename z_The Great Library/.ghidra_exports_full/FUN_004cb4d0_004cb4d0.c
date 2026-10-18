// FUN_004cb4d0 @ 004cb4d0 body=[[004cb4d0, 004cb55f] [004cb563, 004cb622] [004cb626, 004cb648] [004cb64c, 004cb677] [004cb680, 004cb7be] [004cb7c2, 004cb7e3] [004cb7e7, 004cb890] [004cb894, 004cb8af] [004cb8b3, 004cb8c8]]


undefined4 FUN_004cb4d0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 local_34 [4];
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b75ada;
  local_10 = ExceptionList;
  local_20 = 0;
  iVar1 = 0;
  piVar4 = (int *)((int)param_1 + 0x98);
  do {
    if (*piVar4 == *(int *)(param_3 + 4)) {
      local_18 = *(int *)((int)param_1 + 0x9c + iVar1 * 0x1c);
      goto LAB_004cb518;
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 7;
  } while (iVar1 < 4);
  local_18 = 0;
LAB_004cb518:
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("PV_COLONY_PROG",0xe);
  local_8 = 1;
  FUN_009a8ee0(local_34,local_6c);
  local_8._0_1_ = 3;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e90,3);
  local_8._0_1_ = 4;
  FUN_00988d00(local_88,1);
  local_8._0_1_ = 5;
  local_1c = FUN_00aae9af();
  local_8._0_1_ = 6;
  if (local_1c == 0) {
    local_1c = 0;
  }
  else {
    local_1c = FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  FUN_009e6810(local_50,&local_1c);
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar4 = *(int **)((int)param_1 + 8);
  local_11 = '\0';
  fVar5 = DAT_00f092fc;
  if (piVar4 != (int *)0x0) {
    do {
      piVar2 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4) + 0xec);
      if (piVar2 != (int *)0x0) {
        do {
          if (*(int *)(*piVar2 + 0xc4) == *(int *)(param_3 + 4)) {
            local_11 = '\x01';
            break;
          }
          piVar2 = (int *)piVar2[2];
        } while (piVar2 != (int *)0x0);
      }
      piVar4 = (int *)piVar4[2];
    } while (piVar4 != (int *)0x0);
    if (local_11 != '\0') {
      fVar5 = DAT_00f092b0;
    }
  }
  param_1 = (undefined4 *)
            (*(int *)(DAT_012588e8 + 0xb0c) + (int)((float)(0x4b0 - local_18) / fVar5) * 0x18);
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfd4fc,4);
  local_8._0_1_ = 7;
  FUN_0043acd0(&param_1,local_88);
  local_8._0_1_ = 8;
  puVar3 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 9;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_00e38ecc;
    puVar3[1] = local_34;
    puVar3[7] = 0xf;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    param_1 = puVar3;
    FUN_00408ed0();
    local_8._0_1_ = 10;
    *puVar3 = &PTR_FUN_00e38ef4;
    puVar3[0xe] = 0xf;
    puVar3[0xd] = 0;
    *(undefined1 *)(puVar3 + 9) = 0;
    FUN_00408ed0();
  }
  local_8._0_1_ = 8;
  param_1 = puVar3;
  FUN_009e6810(local_50,&param_1);
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar3 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0xb;
    if (param_1 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_00475150();
    }
    local_8._0_1_ = 0xc;
    param_1 = (undefined4 *)0x0;
    if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar3;
  local_8._0_1_ = 3;
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
  local_20 = 1;
  local_8 = 0xd;
  FUN_009adb70();
  if (local_30 == (undefined1 *)0x0) {
    ExceptionList = local_10;
    return param_2;
  }
  while( true ) {
    if (local_30 == local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < *(uint *)(local_30 + 0x14)) break;
    *(undefined4 *)(local_30 + 0x14) = 0xf;
    *(undefined4 *)(local_30 + 0x10) = 0;
    *local_30 = 0;
    local_30 = local_30 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

