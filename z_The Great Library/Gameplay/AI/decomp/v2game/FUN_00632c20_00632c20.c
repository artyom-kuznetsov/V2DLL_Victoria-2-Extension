// FUN_00632c20 @ 00632c20 body=[[00632c20, 00632d2d] [00632d31, 00632d61] [00632d65, 00632dd3] [00632dd7, 00632df1] [00632df5, 00632e4d] [00632e51, 00632f9b] [00632f9f, 00632fd0] [00632fd4, 00632fef] [00632ff3, 006330b0] [006330b4, 006330d3] [006330d7, 0063319e] [006331a2, 006331c0] [006331c4, 0063325e] [00633262, 00633285] [00633289, 006332a8] [006332ac, 006332d2]]


undefined1 * FUN_00632c20(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 local_c4 [20];
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  undefined1 local_68 [4];
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_54;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b8c6ec;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined2 *)(param_2 + 0x54) = 0;
  *(undefined2 *)(param_2 + 0x56) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  piVar4 = (int *)param_1[1];
  local_18 = 1;
  do {
    if (piVar4 == (int *)0x0) {
      ExceptionList = local_10;
      return param_2;
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    local_1c = piVar4;
    FUN_00409350("diplomessageicon_button",0x17);
    local_8 = 1;
    local_18 = local_18 | 2;
    iVar2 = (**(code **)(**(int **)*piVar4 + 0x34))();
    iVar1 = param_3;
    if (iVar2 == param_3) {
LAB_00632d11:
      param_1 = (undefined4 *)CONCAT13(1,param_1._0_3_);
    }
    else {
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      FUN_00409350(&DAT_00dedbb4,4);
      local_8 = 2;
      local_18 = local_18 | 4;
      iVar2 = (**(code **)(**(int **)*piVar4 + 0x3c))();
      param_1 = (undefined4 *)((uint)param_1 & 0xffffff);
      if (iVar2 == iVar1) goto LAB_00632d11;
    }
    if ((local_18 & 4) != 0) {
      local_18 = local_18 & 0xfffffffb;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
    }
    local_8 = 0;
    if (((local_18 & 2) != 0) && (local_18 = local_18 & 0xfffffffd, 0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (param_1._3_1_ != '\0') {
      local_8c = *(undefined4 *)(*piVar4 + 0xc);
      local_88 = *(undefined4 *)(*piVar4 + 0x10);
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      FUN_00409350(&DAT_00e075f8,3);
      local_8 = 3;
      FUN_00632170();
      local_8._0_1_ = 4;
      FUN_00988f20();
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      local_8._0_1_ = 7;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = local_a8[0] & 0xffffff00;
      FUN_00409350("DIPLOICON_TIP",0xd);
      local_8._0_1_ = 8;
      FUN_009a8ee0(local_68,local_a8);
      local_8._0_1_ = 10;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = local_a8[0] & 0xffffff00;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350(&DAT_00df7e80,4);
      local_8._0_1_ = 0xb;
      FUN_009a8ee0(local_4c,local_c4);
      local_8._0_1_ = 0xc;
      puVar3 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        param_1 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 0xd;
        if (param_1 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_00475150();
        }
        local_8._0_1_ = 0xe;
        param_1 = (undefined4 *)0x0;
        if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)();
        }
      }
      DAT_0125b5e0 = puVar3;
      local_8._0_1_ = 0xc;
      FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
      local_8._0_1_ = 0xf;
      puVar3 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x10;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = local_68;
        *puVar3 = &PTR_FUN_00e38ecc;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        param_1 = puVar3;
        FUN_00408ed0();
        local_8._0_1_ = 0x11;
        *puVar3 = &PTR_FUN_00e38ef4;
        puVar3[0xe] = 0xf;
        puVar3[0xd] = 0;
        *(undefined1 *)(puVar3 + 9) = 0;
        FUN_00408ed0();
      }
      local_8._0_1_ = 0xf;
      param_1 = puVar3;
      FUN_009e6810(local_38,&param_1);
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      local_8._0_1_ = 0x12;
      FUN_009adb70();
      if (local_48 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 10;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("NATION",6);
      local_8._0_1_ = 0x13;
      FUN_0055dd40();
      local_8._0_1_ = 0x14;
      puVar3 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x15;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &PTR_FUN_00e38ecc;
        puVar3[1] = local_68;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        param_1 = puVar3;
        FUN_00408ed0();
        local_8._0_1_ = 0x16;
        *puVar3 = &PTR_FUN_00e38ef4;
        puVar3[0xe] = 0xf;
        puVar3[0xd] = 0;
        *(undefined1 *)(puVar3 + 9) = 0;
        FUN_00408ed0();
      }
      local_8._0_1_ = 0x14;
      param_1 = puVar3;
      FUN_009e6810(local_38,&param_1);
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 10;
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfa9f8,4);
      local_8._0_1_ = 0x17;
      param_1 = *(undefined4 **)(*local_1c + 0x3c);
      FUN_0043b700(&param_1,local_84);
      local_8._0_1_ = 0x18;
      puVar3 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x19;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &PTR_FUN_00e38ecc;
        puVar3[1] = local_68;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        param_1 = puVar3;
        FUN_00408ed0();
        local_8._0_1_ = 0x1a;
        *puVar3 = &PTR_FUN_00e38ef4;
        puVar3[0xe] = 0xf;
        puVar3[0xd] = 0;
        *(undefined1 *)(puVar3 + 9) = 0;
        FUN_00408ed0();
      }
      local_8._0_1_ = 0x18;
      param_1 = puVar3;
      FUN_009e6810(local_38,&param_1);
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 10;
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puVar3 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        param_1 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 0x1b;
        if (param_1 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_00475150();
        }
        local_8._0_1_ = 0x1c;
        param_1 = (undefined4 *)0x0;
        if ((puVar3 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)();
        }
      }
      DAT_0125b5e0 = puVar3;
      local_8._0_1_ = 10;
      FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
      local_8._0_1_ = 0x1d;
      FUN_00408ed0();
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x1e;
      FUN_009adb70();
      if (local_64 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      piVar4 = local_1c;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    piVar4 = (int *)piVar4[2];
  } while( true );
}

