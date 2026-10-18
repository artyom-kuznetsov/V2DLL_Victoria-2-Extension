// FUN_0059d640 @ 0059d640 body=[[0059d640, 0059d6ab] [0059d6b0, 0059d7bb] [0059d7bf, 0059d815] [0059d819, 0059d838] [0059d83c, 0059d884] [0059d888, 0059d8a7] [0059d8ab, 0059d8f3] [0059d8f7, 0059d915] [0059d919, 0059d976] [0059d97a, 0059d994] [0059d998, 0059d9ca] [0059d9ce, 0059da3e] [0059da42, 0059daa3] [0059daa7, 0059dac6] [0059daca, 0059db12] [0059db16, 0059db34] [0059db38, 0059db97] [0059db9b, 0059dbb5] [0059dbb9, 0059dbed]]


undefined1 * FUN_0059d640(undefined1 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined1 local_90 [4];
  int local_8c;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b7fb94;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  if (param_2[2] != 0) {
    local_54 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    piVar2 = (int *)*param_2;
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)*piVar2;
      local_60 = (int *)piVar2[2];
      cVar3 = (**(code **)(*piVar1 + 0x38))();
      if (cVar3 == '\0') {
        piVar1 = (int *)piVar1[0xe];
        while (piVar2 = local_60, piVar1 != (int *)0x0) {
          piVar2 = (int *)*piVar1;
          piVar1 = (int *)piVar1[2];
          cVar3 = (**(code **)(*piVar2 + 0x28))();
          if (cVar3 != '\0') {
            iVar4 = piVar2[0xe];
            if (*(char *)(iVar4 + 0x3b) == '\0') {
              if (*(char *)(iVar4 + 0x3c) == '\0') {
                local_58 = local_58 + 1;
              }
              else {
                local_5c = local_5c + 1;
              }
            }
            else {
              local_54 = local_54 + 1;
            }
          }
        }
      }
      else {
        FUN_00401000();
        iVar4 = FUN_00b31c00();
        for (piVar2 = (int *)piVar1[0xe]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
          iVar4 = iVar4 + *(int *)(*piVar2 + 0x3c);
        }
        local_4c = local_4c + iVar4;
        local_50 = local_50 + piVar1[0x10];
        piVar2 = local_60;
      }
    }
    cVar3 = (**(code **)(**(int **)*param_2 + 0x3c))();
    if (cVar3 != '\0') {
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      FUN_00409350("UNIT_ATTACK_INFO_NAVY");
      local_8 = 2;
      FUN_009a8ee0(local_90);
      local_8._0_1_ = 4;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      FUN_00409350(&DAT_00dfea88);
      local_8._0_1_ = 5;
      FUN_009888f0();
      local_8._0_1_ = 6;
      FUN_009a9980();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 4;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      FUN_00409350(&DAT_00e01f18);
      local_8._0_1_ = 7;
      FUN_009888f0();
      local_8._0_1_ = 8;
      FUN_009a9980();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 4;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      FUN_00409350(&DAT_00e01f1c);
      local_8._0_1_ = 9;
      FUN_009888f0();
      local_8._0_1_ = 10;
      FUN_009a9980();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 4;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0xb;
      FUN_00988fa0();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_00448aa0();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xd;
      FUN_009adb70();
      if (local_8c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return param_1;
    }
    cVar3 = (**(code **)(**(int **)*param_2 + 0x38))();
    if (cVar3 != '\0') {
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      FUN_00409350("UNIT_ATTACK_INFO_ARMY");
      local_8 = 0xe;
      FUN_009a8ee0(local_90);
      local_8._0_1_ = 0x10;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      FUN_00409350(&DAT_00e01f38);
      local_8._0_1_ = 0x11;
      FUN_005c0800(local_2c);
      local_8._0_1_ = 0x12;
      FUN_009a9980();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x10;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      FUN_00409350(&DAT_00e01f3c);
      local_8._0_1_ = 0x13;
      FUN_009888f0();
      local_8._0_1_ = 0x14;
      FUN_009a9980();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x10;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0x15;
      FUN_00988fa0();
      local_8._0_1_ = 0x16;
      FUN_00448aa0();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_009a9740();
      ExceptionList = local_10;
      return param_1;
    }
  }
  ExceptionList = local_10;
  return param_1;
}

