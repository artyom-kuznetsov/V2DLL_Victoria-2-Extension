// FUN_00774d60 @ 00774d60 body=[[00774d60, 00774e0a] [00774e0e, 00774e35] [00774e39, 00774ebc] [00774ec0, 00774f93] [00774f97, 00775136] [0077513a, 00775169] [0077516d, 00775197] [0077519b, 007751bf] [007751c3, 007751e6] [007751ea, 00775237] [0077523b, 0077527c] [00775280, 007752ae]]


void FUN_00774d60(int param_1,float param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int *unaff_ESI;
  undefined4 *puStack_e4;
  uint uStack_e0;
  undefined1 auStack_dc [4];
  undefined1 local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  uint local_c4 [2];
  undefined1 local_bc [8];
  uint uStack_b4;
  uint uStack_b0;
  int local_ac;
  undefined4 local_a8;
  undefined1 auStack_a4 [4];
  int local_a0;
  uint uStack_90;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_5c;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  void *pvStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6cb81;
  pvStack_14 = ExceptionList;
  local_c4[0] = 0xf;
  local_c8 = 0;
  local_d8 = 0;
  ExceptionList = &pvStack_14;
  local_a0 = in_ECX;
  FUN_00409350("multiplayer_list",0x10);
  local_c = 0;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = 0;
  FUN_00409350("multiplayer",0xb);
  local_c = CONCAT31(local_c._1_3_,1);
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x23c) + 0x6c))(local_bc);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(auStack_dc);
  if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4[0]);
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_b0 = 0xf;
  uStack_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_e0);
  }
  uStack_cc = 0xf;
  uStack_d0 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
  piVar2 = (int *)*puVar3;
  do {
    if (piVar2 == (int *)0x0) {
      ExceptionList = pvStack_1c;
      return;
    }
    if (*(int *)(*piVar2 + 0x44) == param_1) {
      uStack_cc = 0xf;
      uStack_d0 = 0;
      uStack_e0 = uStack_e0 & 0xffffff00;
      FUN_00409350("SAVE_PROG",9);
      pvStack_14 = (void *)0x2;
      FUN_009a8ee0(auStack_a4,&uStack_e0);
      pvStack_14._0_1_ = 4;
      if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_e0);
      }
      param_2 = param_2 * 100.0;
      uStack_cc = 0xf;
      uStack_d0 = 0;
      uStack_e0 = uStack_e0 & 0xffffff00;
      uStack_b0 = 0xf;
      uStack_b4 = 0;
      local_c4[0] = local_c4[0] & 0xffffff00;
      FUN_00409350("VALUE",5);
      pvStack_14._0_1_ = 5;
      puVar3 = (undefined4 *)FUN_00aae9af(0x28);
      pvStack_14._0_1_ = 6;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = auStack_a4;
        *puVar3 = &PTR_FUN_00e38ecc;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        puStack_e4 = puVar3;
        FUN_00408ed0();
        *puVar3 = &PTR_FUN_00e38ee0;
        puVar3[9] = (int)param_2;
      }
      pvStack_14._0_1_ = 5;
      puStack_e4 = puVar3;
      FUN_009e6810(local_c4,&puStack_e4);
      pvStack_14._0_1_ = 4;
      if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c4[0]);
      }
      uStack_7c = 0xf;
      uStack_80 = 0;
      uStack_90 = uStack_90 & 0xffffff00;
      FUN_00409350(&DAT_00df963c,2);
      pvStack_14._0_1_ = 7;
      if (param_3 != '\0') {
        FUN_00409350(&DAT_00df8518,2);
      }
      uStack_b0 = 0xf;
      uStack_b4 = 0;
      local_c4[0] = local_c4[0] & 0xffffff00;
      FUN_00409350("save_progress",0xd);
      pvStack_14._0_1_ = 8;
      piVar1 = *(int **)(*piVar2 + 0x20);
      uStack_cc = 0xf;
      uStack_d0 = 0;
      uStack_e0 = uStack_e0 & 0xffffff00;
      FUN_00409350(&DAT_00df8514,2);
      pvStack_14._0_1_ = 9;
      puVar3 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        puStack_e4 = (undefined4 *)FUN_00aae9af(0x180);
        pvStack_14._0_1_ = 10;
        if (puStack_e4 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_00475150(puStack_e4);
        }
        pvStack_14._0_1_ = 0xb;
        puStack_e4 = (undefined4 *)0x0;
        if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)(1);
        }
      }
      DAT_0125b5e0 = puVar3;
      pvStack_14._0_1_ = 9;
      uVar4 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),DAT_0125b5e0[0x1d],
                           DAT_0125b5e0[0x1e]);
      pvStack_14._0_1_ = 0xc;
      FUN_00988f20(uVar4);
      pvStack_14._0_1_ = 0xd;
      uVar4 = FUN_00988f20(&uStack_e0);
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xe);
      (**(code **)(*piVar1 + 0x3c))(local_c4);
      FUN_00408ed0(uVar4,0,0xffffffff);
      FUN_00a5ecc0();
      if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_5c);
      }
      uStack_48 = 0xf;
      uStack_4c = 0;
      uStack_5c = uStack_5c & 0xffffff00;
      if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_78);
      }
      uStack_64 = 0xf;
      uStack_68 = 0;
      uStack_78 = uStack_78 & 0xffffff00;
      if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_40);
      }
      uStack_2c = 0xf;
      uStack_30 = 0;
      uStack_40 = uStack_40 & 0xffffff00;
      if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puStack_e4);
      }
      uStack_18 = 7;
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      puStack_e4 = (undefined4 *)((uint)puStack_e4 & 0xffffff00);
      if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c8);
      }
      if ((param_3 != '\0') && (iVar5 = *(int *)(*unaff_ESI + 0x60), iVar5 != 0)) {
        *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)(iVar5 + 0x7c);
      }
      iVar5 = (**(code **)(**(int **)(local_ac + -0x38) + 0x44))();
      if (*(char *)(iVar5 + 0x34) != '\0') {
        (**(code **)(**(int **)(*piVar2 + 0x60) + 0x28))();
      }
      if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_90);
      }
      uStack_7c = 0xf;
      uStack_80 = 0;
      uStack_90 = uStack_90 & 0xffffff00;
      pvStack_14 = (void *)0xf;
      FUN_009adb70();
      pvStack_14 = (void *)0xffffffff;
      if (local_a0 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a0);
      }
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

