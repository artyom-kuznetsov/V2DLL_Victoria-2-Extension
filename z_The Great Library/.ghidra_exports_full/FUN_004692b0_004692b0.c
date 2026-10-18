// FUN_004692b0 @ 004692b0 body=[[004692b0, 00469466] [0046946a, 00469560] [00469564, 0046965a] [0046965e, 00469751] [00469755, 00469779] [0046977d, 004697ac] [004697b0, 0046983c] [00469840, 00469880]]


int FUN_004692b0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int *in_ECX;
  int iVar6;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  uint *puStack_ac;
  undefined4 uStack_a8;
  undefined1 *puStack_a4;
  uint uStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51d1b;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  iVar2 = FUN_00467240();
  local_20 = 0x2d2d2d;
  iStack_94 = in_ECX[0x4a];
  iStack_98 = 1;
  uStack_a0 = 0x46930b;
  iStack_9c = iVar2 + 0x24;
  FUN_00465e90();
  uStack_a8 = param_2[1];
  puStack_ac = (uint *)*param_2;
  uStack_a0 = 0;
  local_20 = 0x2d2d2d;
  puStack_a4 = (undefined1 *)0x2d2d2d;
  iStack_b0 = 0;
  uStack_b8 = 0x46932a;
  iStack_b4 = iVar2 + 0x24;
  FUN_00465e90();
  iVar3 = in_ECX[0x52];
  iVar6 = 0;
  if (0 < (int)(in_ECX[0x53] - iVar3 & 0xfffffff8U)) {
    local_20 = 0x2d2d2d;
    do {
      iStack_94 = *(undefined4 *)(iVar3 + iVar6 * 8);
      iStack_9c = iVar2 + 0x24;
      uStack_a0 = 0x469372;
      iStack_98 = iVar6;
      FUN_00465e90();
      iVar3 = in_ECX[0x52];
      iVar6 = iVar6 + 1;
    } while (iVar6 < in_ECX[0x53] - iVar3 >> 3);
  }
  iStack_94 = 0x4693aa;
  FUN_00466050();
  iStack_94 = 0x4693c7;
  FUN_00466050();
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_00aae9af();
    local_8 = 0;
    local_18 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 0x1ff;
      *puVar4 = 0;
      pvVar5 = (void *)FUN_00aad56b();
      puVar4[2] = pvVar5;
      iStack_94 = 0x469425;
      _memset(pvVar5,0,puVar4[1] * 4);
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
    }
    local_8 = 1;
    local_1c = (undefined4 *)0x0;
    if ((puVar4 != DAT_0125ce80) && (local_18 = DAT_0125ce80, DAT_0125ce80 != (undefined4 *)0x0)) {
      FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    DAT_0125ce80 = puVar4;
  }
  iStack_94 = 0x4694bd;
  FUN_00466050();
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_00aae9af();
    local_8 = 2;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 0x1ff;
      *puVar4 = 0;
      local_1c = puVar4;
      pvVar5 = (void *)FUN_00aad56b();
      puVar4[2] = pvVar5;
      iStack_94 = 0x46951f;
      _memset(pvVar5,0,puVar4[1] * 4);
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
    }
    local_8 = 3;
    local_1c = (undefined4 *)0x0;
    if ((puVar4 != DAT_0125ce80) && (local_18 = DAT_0125ce80, DAT_0125ce80 != (undefined4 *)0x0)) {
      FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    DAT_0125ce80 = puVar4;
  }
  iStack_94 = 0x4695b7;
  FUN_00466050();
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_00aae9af();
    local_8 = 4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = 0x1ff;
      *puVar4 = 0;
      local_1c = puVar4;
      pvVar5 = (void *)FUN_00aad56b();
      puVar4[2] = pvVar5;
      iStack_94 = 0x469619;
      _memset(pvVar5,0,puVar4[1] * 4);
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
    }
    local_8 = 5;
    local_1c = (undefined4 *)0x0;
    if ((puVar4 != DAT_0125ce80) && (local_18 = DAT_0125ce80, DAT_0125ce80 != (undefined4 *)0x0)) {
      FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    DAT_0125ce80 = puVar4;
  }
  iStack_94 = 0x4696b1;
  FUN_00466050();
  iStack_94 = 0x4696bf;
  FUN_00466050();
  if ((int *)in_ECX[0x5b] == (int *)0x0) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 7;
    puStack_ac = local_3c;
    local_14 = 2;
  }
  else {
    puStack_ac = (uint *)(**(code **)(*(int *)in_ECX[0x5b] + 0x2c))();
    local_8 = 6;
    local_14 = 1;
  }
  puStack_a4 = (undefined1 *)0xffffffff;
  uStack_a8 = 0;
  uStack_a0 = uStack_a0 & 0xffffff00;
  iStack_b0 = 0x46972d;
  FUN_00408ed0();
  puStack_a4 = (undefined1 *)0x1;
  uStack_a8 = 0;
  iStack_b0 = 0x469739;
  puStack_ac = (uint *)iVar2;
  FUN_00464b30();
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if (((local_14 & 1) != 0) && (0xf < local_64)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_a4 = (undefined1 *)&uStack_a0;
  uStack_a8 = 0x46978f;
  (**(code **)(*in_ECX + 0x1c))();
  uStack_a8 = 0;
  puStack_ac = (uint *)0x0;
  iStack_b4 = 0x46979a;
  iStack_b0 = iVar2;
  FUN_00464b30();
  piVar1 = (int *)in_ECX[0x57];
  param_2 = (undefined4 *)0x0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      iStack_94 = 0x46986c;
      FUN_00464bd0();
      ExceptionList = local_10;
      return iVar2;
    }
    iStack_94 = *piVar1;
    piVar1 = (int *)piVar1[2];
    iStack_94 = iStack_94 + 0x18;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    iStack_98 = 0x4697cd;
    FUN_00408ed0();
    local_8 = 8;
    uStack_a8 = 0;
    iStack_94 = 0;
    puStack_ac = (uint *)&DAT_00ded94d;
    puStack_a4 = (undefined1 *)((uint)puStack_a4 & 0xffffff00);
    iStack_b0 = 0x4697ef;
    local_1c = &puStack_a4;
    FUN_00409350();
    local_18 = (undefined4 *)auStack_c0;
    local_8._0_1_ = 9;
    puStack_ac = (uint *)0xf;
    iStack_b0 = 0;
    auStack_c0[0] = 0;
    FUN_00408ed0(local_5c,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_004661f0(1,param_2);
    local_8 = 0xffffffff;
    if (0xf < local_48) break;
    param_2 = (undefined4 *)((int)param_2 + 1);
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

