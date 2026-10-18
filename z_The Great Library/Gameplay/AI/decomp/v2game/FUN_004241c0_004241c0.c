// FUN_004241c0 @ 004241c0 body=[[004241c0, 00424313] [00424317, 00424335] [00424339, 00424411] [00424417, 00424438] [0042443c, 004244fc]]


void FUN_004241c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 auStack_dc [16];
  undefined4 uStack_cc;
  char *pcStack_c8;
  uint *puStack_c4;
  undefined1 local_c0 [16];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  char *pcStack_9c;
  undefined4 *puStack_98;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b62d97;
  local_10 = ExceptionList;
  if (param_2[1] != *(int *)(DAT_012588e8 + 0xb60)) {
    local_28 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    local_18 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                       100);
    puStack_98 = (undefined4 *)0x42421b;
    ExceptionList = &local_10;
    iVar3 = FUN_009c2d80();
    local_28 = *puVar1;
    local_14 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + puVar1[1] * 4);
    *(undefined4 *)(iVar3 + 0x2c) = 3;
    puStack_98 = (undefined4 *)0x424242;
    FUN_009c2830();
    puStack_98 = (undefined4 *)0x18;
    pcStack_9c = "FLAG_SUBMENU_INTERESTING";
    *(undefined4 *)(iVar3 + 0x5c) = 0x41d00000;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    uStack_a0 = 0x42426f;
    FUN_00409350();
    puStack_98 = (undefined4 *)0x0;
    pcStack_9c = (char *)0x0;
    uStack_a0 = 1;
    uStack_a4 = 1;
    local_1c = (int *)local_c0;
    local_8 = 0;
    puStack_c4 = (uint *)0x24;
    local_ac = 0xf;
    local_b0 = 0;
    pcStack_c8 = "GFX_country_flag_submenu_interesting";
    local_c0[0] = 0;
    uStack_cc = 0x424295;
    FUN_00409350();
    puStack_c4 = local_6c;
    pcStack_c8 = local_3c;
    local_8._0_1_ = 1;
    uStack_cc = 0x4242a6;
    FUN_009a8ee0();
    local_8._0_1_ = 2;
    puStack_c4 = (uint *)0x4242b1;
    iVar4 = FUN_00475500();
    local_20 = auStack_dc;
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 3;
    local_1c = (int *)FUN_009c28b0();
    local_8 = CONCAT31(local_8._1_3_,4);
    puStack_98 = (undefined4 *)0x4242fa;
    FUN_009adb70();
    if (local_38 != 0) {
      puStack_98 = (undefined4 *)0x42430b;
      FUN_009e6a80();
      puStack_98 = (undefined4 *)local_38;
                    /* WARNING: Subroutine does not return */
      pcStack_9c = &UNK_00424314;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (0xf < local_58) {
      puStack_98 = (undefined4 *)local_6c[0];
                    /* WARNING: Subroutine does not return */
      pcStack_9c = &UNK_00424336;
      FUN_00aae91b();
    }
    puStack_98 = (undefined4 *)0x1b;
    pcStack_9c = "FLAG_SUBMENU_NOTINTERESTING";
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    uStack_a0 = 0x424367;
    FUN_00409350();
    puStack_98 = (undefined4 *)0x0;
    pcStack_9c = (char *)0x0;
    uStack_a0 = 1;
    uStack_a4 = 2;
    local_20 = local_c0;
    local_8 = 5;
    puStack_c4 = (uint *)0x24;
    local_ac = 0xf;
    local_b0 = 0;
    pcStack_c8 = "GFX_country_flag_submenu_interesting";
    local_c0[0] = 0;
    uStack_cc = 0x424391;
    FUN_00409350();
    puStack_c4 = local_88;
    pcStack_c8 = local_50;
    local_8._0_1_ = 6;
    uStack_cc = 0x4243a5;
    FUN_009a8ee0();
    local_8._0_1_ = 7;
    puStack_c4 = (uint *)0x4243b0;
    iVar4 = FUN_00475500();
    local_24 = auStack_dc;
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 8;
    piVar5 = (int *)FUN_009c28b0();
    local_8 = CONCAT31(local_8._1_3_,9);
    puStack_98 = (undefined4 *)0x4243f8;
    FUN_009adb70();
    piVar2 = local_1c;
    if (local_4c != 0) {
      puStack_98 = (undefined4 *)0x424409;
      FUN_009e6a80();
      puStack_98 = (undefined4 *)local_4c;
                    /* WARNING: Subroutine does not return */
      pcStack_9c = &UNK_00424412;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    if (0xf < local_74) {
      puStack_98 = (undefined4 *)local_88[0];
                    /* WARNING: Subroutine does not return */
      pcStack_9c = &UNK_00424439;
      FUN_00aae91b();
    }
    local_78 = 0;
    local_74 = 0xf;
    local_88[0] = local_88[0] & 0xffffff00;
    if ((local_1c != (int *)0x0) && (piVar5 != (int *)0x0)) {
      param_2 = (undefined4 *)param_2[1];
      puStack_98 = &param_2;
      pcStack_9c = (char *)0x424473;
      FUN_00445430();
      if ((local_1c == *(int **)(local_18 + 8)) || ((char)local_1c[4] == '\0')) {
        puStack_98 = (undefined4 *)0x4244a6;
        (**(code **)(*piVar2 + 0xb8))();
        pcVar6 = *(code **)(*piVar5 + 0xbc);
      }
      else {
        puStack_98 = (undefined4 *)0x424490;
        (**(code **)(*piVar2 + 0xbc))();
        pcVar6 = *(code **)(*piVar5 + 0xb8);
      }
      puStack_98 = (undefined4 *)0x4244b2;
      (*pcVar6)();
    }
    if (*(int *)(iVar3 + 0x68) != 0) {
      *(undefined1 *)(*(int *)(iVar3 + 0x68) + 0x54) = 1;
    }
    puStack_98 = (undefined4 *)(int)param_1._2_2_;
    pcStack_9c = (char *)(int)(short)param_1;
    uStack_a0 = 0x4244d4;
    (**(code **)(**(int **)(iVar3 + 0x30) + 0xa8))();
    uStack_a0 = 0x4244de;
    (**(code **)(**(int **)(iVar3 + 0x30) + 0x2c))();
    *(undefined2 *)(iVar3 + 0x54) = 0;
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  ExceptionList = local_10;
  return;
}

