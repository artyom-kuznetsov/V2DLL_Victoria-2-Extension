// FUN_0041bb40 @ 0041bb40 body=[[0041bb40, 0041be44] [0041be48, 0041be5b]]


undefined1 * FUN_0041bb40(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iStack_170;
  int iStack_16c;
  undefined1 *puStack_168;
  undefined4 uStack_164;
  int *piStack_160;
  int iStack_15c;
  char *pcStack_158;
  uint *puStack_154;
  undefined1 local_144 [56];
  int local_10c;
  int *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_84;
  undefined1 local_5c [28];
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_2;
  puStack_c = &LAB_00b9ff35;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  iStack_15c = *param_2;
  local_1c = 1;
  if ((param_2[1] - iStack_15c) / 0x1c < 1) {
    puStack_154 = (uint *)0x19;
    pcStack_158 = "Please specify unit type.";
    *param_1 = 0;
    iStack_15c = 0x41bbb8;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  puStack_154 = (uint *)0xffffffff;
  pcStack_158 = (char *)0x0;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  piStack_160 = (int *)0x41bbea;
  FUN_00408ed0();
  local_8 = 1;
  if (DAT_0125fdd8 == 0) {
    puStack_154 = (uint *)0x1c;
    pcStack_158 = (char *)0x41bc01;
    param_2 = (int *)FUN_00aae9af();
    local_8._0_1_ = 2;
    if (param_2 == (int *)0x0) {
      puStack_154 = (uint *)0x0;
    }
    else {
      puStack_154 = (uint *)0x41bc16;
      puStack_154 = (uint *)FUN_008b0060();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    pcStack_158 = (char *)0x41bc24;
    FUN_005c2810();
  }
  puStack_154 = local_40;
  pcStack_158 = (char *)0x41bc32;
  piVar3 = (int *)FUN_005c2ad0();
  if (piVar3 == (int *)0x0) {
LAB_0041be22:
    puStack_154 = (uint *)0x11;
    *param_1 = 0;
    pcStack_158 = "Unknown unit type";
  }
  else {
    puStack_154 = (uint *)0x41bc43;
    cVar2 = (**(code **)(*piVar3 + 0x24))();
    if (cVar2 == '\0') goto LAB_0041be22;
    iVar4 = *piVar1;
    if (1 < (piVar1[1] - iVar4) / 0x1c) {
      puStack_154 = (uint *)(iVar4 + 0x1c);
      if (0xf < *(uint *)(iVar4 + 0x30)) {
        puStack_154 = (uint *)*puStack_154;
      }
      pcStack_158 = (char *)0x41bc8d;
      iVar4 = FUN_00aaf0c5();
      piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4);
      if (*(char *)(piVar1[0x17] + 0x2a) == '\0') {
        local_18 = *(int *)(DAT_012588e8 + 0xb5c);
        iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
      }
      else {
        local_18 = piVar1[0x4c];
        iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar1[0x4d] * 4);
      }
      puStack_154 = (uint *)0x41bce5;
      FUN_00491620();
      local_8._0_1_ = 3;
      puStack_154 = (uint *)0x41bcf1;
      puStack_154 = (uint *)FUN_009c19f0();
      pcStack_158 = (char *)0x41bcfd;
      FUN_009c1390();
      puStack_154 = (uint *)0x41bd05;
      FUN_009c19f0();
      puStack_154 = (uint *)0x41bd0d;
      FUN_009c19f0();
      local_b4 = local_24;
      local_b0 = local_20;
      local_ac = local_18;
      local_a8 = local_14;
      local_c0 = *(undefined4 *)(iVar4 + 0x1c);
      local_bc = *(undefined4 *)(iVar4 + 0x20);
      puStack_154 = (uint *)0x41bd48;
      FUN_005c1a10();
      puStack_154 = local_40;
      pcStack_158 = (char *)0x41bd51;
      uStack_164 = FUN_005c2ad0();
      puStack_154 = (uint *)&param_2;
      pcStack_158 = (char *)0x0;
      iStack_15c = 0;
      puStack_168 = local_5c;
      param_2 = (int *)0x0;
      iStack_170 = 0x41bd6f;
      iStack_16c = iVar4;
      piStack_160 = piVar1;
      local_84 = uStack_164;
      FUN_004fa8b0();
      local_8._0_1_ = 4;
      puStack_154 = (uint *)0x41bd8a;
      local_c4 = piVar1;
      (**(code **)(local_10c + 0x20))();
      puStack_154 = (uint *)param_2;
      param_2 = &iStack_170;
      FUN_00401320();
      FUN_00491ac0();
      puStack_154 = (uint *)0x41bdb0;
      FUN_00491d50();
      puStack_154 = (uint *)0x41bdb7;
      FUN_00491e80();
      puStack_154 = (uint *)local_144;
      pcStack_158 = (char *)0x41bdc7;
      puStack_154 = (uint *)(**(code **)(*piVar1 + 0x1c))();
      local_8._0_1_ = 5;
      pcStack_158 = (char *)0x41bddc;
      iStack_15c = FUN_00988fa0();
      puStack_154 = (uint *)0xffffffff;
      local_8._0_1_ = 6;
      pcStack_158 = (char *)0x0;
      piStack_160 = (int *)0x41bdf3;
      FUN_00408ed0();
      puStack_154 = (uint *)0x41bdfe;
      FUN_00408ad0();
      puStack_154 = (uint *)0x41be09;
      FUN_00408ad0();
      *param_1 = 1;
      puStack_154 = (uint *)0x41be17;
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,1);
      puStack_154 = (uint *)0x41be20;
      FUN_00491780();
      goto LAB_0041be36;
    }
    puStack_154 = (uint *)0x1b;
    *param_1 = 0;
    pcStack_158 = "Please specify province id.";
  }
  iStack_15c = 0x41be36;
  FUN_00409350();
LAB_0041be36:
  if (0xf < local_2c) {
    puStack_154 = (uint *)local_40[0];
                    /* WARNING: Subroutine does not return */
    pcStack_158 = &UNK_0041be45;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

