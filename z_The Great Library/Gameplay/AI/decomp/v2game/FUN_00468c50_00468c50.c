// FUN_00468c50 @ 00468c50 body=[[00468c50, 00468e85] [00468e89, 00468f87] [00468f8b, 00469089] [0046908d, 0046917b] [0046917f, 004691a3] [004691a7, 00469261] [00469265, 004692a5]]


int FUN_00468c50(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *in_ECX;
  int iVar4;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  uint *puStack_b4;
  int iStack_b0;
  undefined1 *puStack_ac;
  uint uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51dab;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  local_18 = FUN_00467240();
  local_24 = 0x2d2d2d;
  iVar2 = local_18 + 0x24;
  iStack_9c = in_ECX[0x4a];
  iStack_a0 = 2;
  uStack_a8 = 0x468cab;
  iStack_a4 = iVar2;
  FUN_00465e90();
  iStack_b0 = in_ECX[0x4d];
  puStack_b4 = (uint *)in_ECX[0x4c];
  uStack_a8 = 0;
  local_24 = 0x2d2d2d;
  puStack_ac = (undefined1 *)0x2d2d2d;
  iStack_b8 = 1;
  uStack_c0 = 0x468ccf;
  iStack_bc = iVar2;
  FUN_00465e90();
  uStack_c8 = param_2[1];
  uStack_c0 = 0;
  local_24 = 0x2d2d2d;
  uStack_c4 = 0x2d2d2d;
  FUN_00465e90(iVar2,0,*param_2);
  iVar2 = in_ECX[0x52];
  iVar4 = 0;
  if (0 < (int)(in_ECX[0x53] - iVar2 & 0xfffffff8U)) {
    local_24 = 0x2d2d2d;
    do {
      iStack_9c = *(undefined4 *)(iVar2 + iVar4 * 8);
      iStack_a4 = local_18 + 0x24;
      uStack_a8 = 0x468d32;
      iStack_a0 = iVar4;
      FUN_00465e90();
      iVar2 = in_ECX[0x52];
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[0x53] - iVar2 >> 3);
  }
  local_24 = in_ECX[0x4a];
  iStack_9c = 0x468d83;
  FUN_00466050();
  iStack_9c = 0x468da0;
  FUN_00466050();
  iStack_9c = 0x468dbc;
  FUN_00466050();
  iStack_9c = 0x468dd9;
  FUN_00466050();
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_00aae9af();
    local_8 = 0;
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      *param_2 = 0;
      param_2[1] = 0x1ff;
      pvVar3 = (void *)FUN_00aad56b();
      param_2[2] = pvVar3;
      iStack_9c = 0x468e3c;
      _memset(pvVar3,0,param_2[1] * 4);
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
    }
    local_8 = 1;
    local_20 = (undefined1 *)0x0;
    if ((param_2 != DAT_0125ce80) && (local_1c = DAT_0125ce80, DAT_0125ce80 != (undefined4 *)0x0)) {
      FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    DAT_0125ce80 = param_2;
    local_8 = 0xffffffff;
  }
  iStack_9c = 0x468ed7;
  FUN_00466050();
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_00aae9af();
    local_8 = 2;
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      *param_2 = 0;
      param_2[1] = 0x1ff;
      pvVar3 = (void *)FUN_00aad56b();
      param_2[2] = pvVar3;
      iStack_9c = 0x468f3e;
      _memset(pvVar3,0,param_2[1] * 4);
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
    }
    local_8 = 3;
    local_20 = (undefined1 *)0x0;
    if ((param_2 != DAT_0125ce80) && (local_1c = DAT_0125ce80, DAT_0125ce80 != (undefined4 *)0x0)) {
      FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    DAT_0125ce80 = param_2;
    local_8 = 0xffffffff;
  }
  iStack_9c = 0x468fd9;
  FUN_00466050();
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_00aae9af();
    local_8 = 4;
    if (param_2 == (undefined4 *)0x0) {
      param_2 = (undefined4 *)0x0;
    }
    else {
      *param_2 = 0;
      param_2[1] = 0x1ff;
      pvVar3 = (void *)FUN_00aad56b();
      param_2[2] = pvVar3;
      iStack_9c = 0x469040;
      _memset(pvVar3,0,param_2[1] * 4);
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
    }
    local_8 = 5;
    local_20 = (undefined1 *)0x0;
    if ((param_2 != DAT_0125ce80) && (local_1c = DAT_0125ce80, DAT_0125ce80 != (undefined4 *)0x0)) {
      FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    DAT_0125ce80 = param_2;
    local_8 = 0xffffffff;
  }
  iStack_9c = 0x4690db;
  FUN_00466050();
  iStack_9c = 0x4690e9;
  FUN_00466050();
  if ((int *)in_ECX[0x5b] == (int *)0x0) {
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 7;
    puStack_b4 = local_40;
    local_14 = 2;
  }
  else {
    puStack_b4 = (uint *)(**(code **)(*(int *)in_ECX[0x5b] + 0x2c))();
    local_8 = 6;
    local_14 = 1;
  }
  puStack_ac = (undefined1 *)0xffffffff;
  iStack_b0 = 0;
  uStack_a8 = uStack_a8 & 0xffffff00;
  iStack_b8 = 0x469157;
  FUN_00408ed0();
  puStack_ac = (undefined1 *)0x1;
  iStack_b0 = 0;
  puStack_b4 = (uint *)local_18;
  iStack_b8 = 0x469163;
  FUN_00464b30();
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if (((local_14 & 1) != 0) && (0xf < local_6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_ac = (undefined1 *)&uStack_a8;
  iStack_b0 = 0x4691b9;
  (**(code **)(*in_ECX + 0x1c))();
  iStack_b0 = 0;
  puStack_b4 = (uint *)0x0;
  iStack_b8 = local_18;
  iStack_bc = 0x4691c4;
  FUN_00464b30();
  piVar1 = (int *)in_ECX[0x57];
  param_1 = 0;
  iVar2 = local_18;
  while( true ) {
    local_18 = iVar2;
    if (piVar1 == (int *)0x0) {
      iStack_9c = 0x469291;
      FUN_00464bd0();
      ExceptionList = local_10;
      return iVar2;
    }
    iStack_9c = *piVar1;
    piVar1 = (int *)piVar1[2];
    iStack_9c = iStack_9c + 0x18;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    iStack_a0 = 0x4691f2;
    FUN_00408ed0();
    local_8 = 8;
    iStack_b0 = 0;
    iStack_9c = 0;
    puStack_b4 = (uint *)&DAT_00ded94d;
    puStack_ac = (undefined1 *)((uint)puStack_ac & 0xffffff00);
    iStack_b8 = 0x469214;
    FUN_00409350();
    local_20 = (undefined1 *)&uStack_c8;
    local_8._0_1_ = 9;
    puStack_b4 = (uint *)0xf;
    iStack_b8 = 0;
    uStack_c8 = uStack_c8 & 0xffffff00;
    FUN_00408ed0(local_64,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_004661f0(1,param_1);
    local_8 = 0xffffffff;
    if (0xf < local_50) break;
    param_1 = param_1 + 1;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    iVar2 = local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

