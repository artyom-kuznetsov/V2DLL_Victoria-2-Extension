// FUN_007766c0 @ 007766c0 body=[[007766c0, 00776792] [00776796, 007767cc] [007767d0, 00776898] [0077689c, 00776977] [0077697b, 007769c5] [007769c9, 00776af2] [00776af6, 00776b19] [00776b1d, 00776c5b] [00776c5f, 00776c88] [00776c8c, 00776caf] [00776cb3, 00776da8] [00776dac, 00776dcb] [00776dcf, 00776dfd] [00776e01, 00776e1d] [00776e21, 00776e6d] [00776e71, 00776e90] [00776e94, 00776eaa]]


/* WARNING: Removing unreachable block (ram,0x00776ae9) */
/* WARNING: Removing unreachable block (ram,0x0077688f) */
/* WARNING: Removing unreachable block (ram,0x00776d9f) */

void FUN_007766c0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined1 *puStack_f4;
  uint uStack_d4;
  int iStack_d0;
  int *piStack_cc;
  uint auStack_c8 [2];
  int *piStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  uint uStack_70;
  undefined1 local_68;
  undefined4 uStack_60;
  uint auStack_5c [4];
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  uint uStack_3c;
  undefined1 local_34 [8];
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 local_24;
  undefined3 uStack_23;
  undefined4 local_20;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6c9fe;
  pvStack_14 = ExceptionList;
  puStack_f4 = (undefined1 *)0x10;
  auStack_5c[2] = 0xf;
  auStack_5c[1] = 0;
  local_68 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  puStack_f4 = (undefined1 *)0xb;
  local_20 = 0xf;
  local_24 = 0;
  uStack_23 = 0;
  local_34[0] = 0;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,1);
  puStack_f4 = local_34;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x26c) + 0x6c))();
  piStack_c0 = (int *)(**(code **)(*piVar2 + 0x7c))();
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_28 = 0xf;
  uStack_2c = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  if (0xf < auStack_5c[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  auStack_5c[0] = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  piVar2 = (int *)(**(code **)(*piStack_c0 + 0x2c))();
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    while (puVar3 = (undefined4 *)*piVar2, puVar3[0x11] != *(int *)(param_1 + 0x1c)) {
      piVar2 = (int *)piVar2[2];
      if (piVar2 == (int *)0x0) {
        ExceptionList = pvStack_1c;
        return;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(*piStack_c0 + 0x20))(puVar3,1);
      (**(code **)*puVar3)();
      puStack_f4 = (undefined1 *)((uint)puStack_f4 & 0xffffff00);
      FUN_00409350();
      local_20 = 2;
      FUN_009a8ee0();
      local_20._0_1_ = 4;
      puStack_f4 = (undefined1 *)((uint)puStack_f4 & 0xffffff00);
      uStack_98 = 0xf;
      uStack_9c = 0;
      uStack_ac = uStack_ac & 0xffffff00;
      FUN_00409350();
      local_20._0_1_ = 5;
      puVar3 = (undefined4 *)FUN_00aae9af(0x40);
      local_20._0_1_ = 6;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &PTR_FUN_00e38ecc;
        puVar3[1] = auStack_5c;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        FUN_00408ed0(&uStack_ac,0,0xffffffff);
        local_20._0_1_ = 7;
        *puVar3 = &PTR_FUN_00e38ef4;
        puVar3[0xe] = 0xf;
        puVar3[0xd] = 0;
        *(undefined1 *)(puVar3 + 9) = 0;
        FUN_00408ed0(param_1,0,0xffffffff);
      }
      local_20._0_1_ = 5;
      FUN_009e6810();
      local_20._0_1_ = 4;
      if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_ac);
      }
      uStack_98 = 0xf;
      uStack_9c = 0;
      uStack_ac = uStack_ac & 0xffffff00;
      FUN_00409350();
      local_20._0_1_ = 8;
      FUN_009a8ee0();
      local_20._0_1_ = 10;
      if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_ac);
      }
      uStack_98 = 0xf;
      uStack_9c = 0;
      uStack_ac = uStack_ac & 0xffffff00;
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      auStack_c8[0] = auStack_c8[0] & 0xffffff00;
      FUN_00409350();
      local_20._0_1_ = 0xb;
      iVar4 = (**(code **)(*piStack_cc + 0x2c))();
      puStack_f4 = (undefined1 *)((uint)puStack_f4 & 0xffffff00);
      local_20._0_1_ = 0xc;
      pcVar5 = __itoa(*(int *)(iVar4 + 8),(char *)&puStack_7c,10);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_20._0_1_ = 0xd;
      puVar3 = (undefined4 *)FUN_00aae9af(0x40);
      local_20._0_1_ = 0xe;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &PTR_FUN_00e38ecc;
        puVar3[1] = auStack_90;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        FUN_00408ed0(auStack_c8,0,0xffffffff);
        local_20._0_1_ = 0xf;
        *puVar3 = &PTR_FUN_00e38ef4;
        puVar3[0xe] = 0xf;
        puVar3[0xd] = 0;
        *(undefined1 *)(puVar3 + 9) = 0;
        FUN_00408ed0(&puStack_f4,0,0xffffffff);
      }
      local_20._0_1_ = 0xd;
      FUN_009e6810();
      local_20._0_1_ = 10;
      puStack_f4 = (undefined1 *)((uint)puStack_f4 & 0xffffff00);
      if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_c8[0]);
      }
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      auStack_c8[0] = auStack_c8[0] & 0xffffff00;
      FUN_00409350();
      local_20._0_1_ = 0x10;
      puStack_f4 = (undefined1 *)((uint)puStack_f4 & 0xffffff00);
      FUN_00409350();
      local_20 = CONCAT31(local_20._1_3_,0x11);
      piVar2 = (int *)(**(code **)(**(int **)(iStack_d0 + 0x26c) + 0x6c))(&puStack_f4);
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        iVar4 = FUN_00aae9af();
        local_24 = 0x12;
        if (iVar4 == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_00475150();
        }
        local_24 = 0x13;
        if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)();
        }
        local_24 = 0x11;
        DAT_0125b5e0 = puVar3;
      }
      uVar6 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d)
                          );
      _local_24 = CONCAT31(uStack_23,0x14);
      (**(code **)(*piVar2 + 0x3c))();
      FUN_00408ed0();
      FUN_00a5ecc0(uVar6,0);
      if (0xf < auStack_5c[0]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      auStack_5c[0] = 0xf;
      uStack_60 = 0;
      uStack_70 = uStack_70 & 0xffffff00;
      if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pvStack_14._0_1_ = 10;
      if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puVar3 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        iVar4 = FUN_00aae9af();
        pvStack_14._0_1_ = 0x15;
        if (iVar4 == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_00475150();
        }
        pvStack_14._0_1_ = 0x16;
        if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)();
        }
      }
      DAT_0125b5e0 = puVar3;
      pvStack_14._0_1_ = 10;
      FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
      pvStack_14._0_1_ = 0x17;
      FUN_00408ed0();
      pvStack_14._0_1_ = 0x18;
      FUN_00771510();
      if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x19);
      FUN_009adb70();
      if (puStack_80 != (undefined1 *)0x0) {
        while( true ) {
          if (puStack_80 == puStack_7c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (0xf < *(uint *)(puStack_80 + 0x14)) break;
          *(undefined4 *)(puStack_80 + 0x14) = 0xf;
          *(undefined4 *)(puStack_80 + 0x10) = 0;
          *puStack_80 = 0;
          puStack_80 = puStack_80 + 0x20;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puStack_80 = (undefined1 *)0x0;
      puStack_7c = (undefined1 *)0x0;
      uStack_78 = 0;
      pvStack_14 = (void *)0x1a;
      FUN_009adb70();
      if (puStack_4c != (undefined1 *)0x0) {
        while( true ) {
          if (puStack_4c == puStack_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (0xf < *(uint *)(puStack_4c + 0x14)) break;
          *(undefined4 *)(puStack_4c + 0x14) = 0xf;
          *(undefined4 *)(puStack_4c + 0x10) = 0;
          *puStack_4c = 0;
          puStack_4c = puStack_4c + 0x20;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

