// FUN_00564220 @ 00564220 body=[[00564220, 00564378] [0056437c, 00564397] [005643a0, 00564765]]


undefined1 * FUN_00564220(undefined1 *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba6aa6;
  local_10 = ExceptionList;
  iVar2 = 0;
  if (*(int *)(param_3 + 0x164) != 0) {
    iVar2 = **(int **)(param_3 + 0x15c);
  }
  ExceptionList = &local_10;
  if ((*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + param_2[1] * 0x10) +
               *(int *)(iVar2 + 0x6c) * 4) == in_ECX) ||
     (ExceptionList = &local_10, cVar1 = FUN_00563fb0(in_ECX,param_3), cVar1 == '\0')) {
    if (*(int *)(param_3 + 0x164) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(param_3 + 0x15c);
    }
    if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + param_2[1] * 0x10) +
                *(int *)(iVar2 + 0x6c) * 4) == in_ECX) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350("FOCUS_ALLREADY_SELECTED",0x17);
      local_8 = 0;
      FUN_009a8ee0(local_30,local_4c);
      local_8._0_1_ = 1;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_009adb70();
      if (local_2c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      if ((*(char *)(in_ECX + 0xe5) == '\0') ||
         (local_1c = *param_2,
         *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4) + 0x31) != '\0')) {
        if ((*(char *)(in_ECX + 0xe4) == '\0') || (*(int *)(param_3 + 300) == 0)) {
          if ((*(char *)(in_ECX + 0xe6) != '\0') && (cVar1 = FUN_004bbd60(), cVar1 == '\0')) {
            FUN_004bc0f0();
            ExceptionList = local_10;
            return param_1;
          }
          if ((*(char *)(in_ECX + 0xe9) != '\0') &&
             ((cVar1 = (**(code **)(**(int **)(param_3 + 0x188) + 0x24))(), cVar1 == '\0' ||
              (*(char *)(*(int *)(param_3 + 0x188) + 0x27c) == '\0')))) {
            FUN_009885d0();
            local_8 = 7;
            FUN_009a8ee0(local_30,local_4c);
            local_8._0_1_ = 8;
            iVar2 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
            local_8 = CONCAT31(local_8._1_3_,7);
            FUN_009a9740();
            FUN_00408ad0();
            ExceptionList = local_10;
            return param_1;
          }
          if ((bool)*(char *)(in_ECX + 0xe8) == (*(int *)(param_3 + 300) == param_2[1])) {
            iVar2 = FUN_004b8a80();
            if (*(int *)(iVar2 + 0x70) < 4) {
              if (*(int *)(in_ECX + 0x54) < 1) {
                FUN_009885d0();
                local_8 = 0xf;
                cVar1 = FUN_00416db0();
                local_8 = 0xffffffff;
                FUN_00408ad0();
                if ((cVar1 == '\0') && (piVar3 = (int *)FUN_00973bd0(), piVar3 != (int *)0x0)) {
                  (**(code **)(*piVar3 + 0x18))();
                  local_8 = 0x10;
                  FUN_0042c180();
                  FUN_00408ad0();
                  ExceptionList = local_10;
                  return param_1;
                }
                if ((*(int *)(in_ECX + 0x6c) - *(int *)(in_ECX + 0x68) & 0xfffffffcU) != 0) {
                  FUN_008a8650();
                  local_90 = *param_2;
                  local_8c = param_2[1];
                  local_88 = *(undefined4 *)(param_3 + 0x58);
                  (**(code **)(*(int *)(in_ECX + 0x60) + 0x2c))(param_1,local_98,0,0,1);
                  ExceptionList = local_10;
                  return param_1;
                }
                FUN_009885d0();
                ExceptionList = local_10;
                return param_1;
              }
              FUN_009885d0();
              local_8 = 0xd;
              FUN_009a8ee0(local_30,local_4c);
              local_8._0_1_ = 0xe;
              iVar2 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
              local_8 = CONCAT31(local_8._1_3_,0xd);
            }
            else {
              FUN_009885d0();
              local_8 = 0xb;
              FUN_009a8ee0(local_30,local_4c);
              local_8._0_1_ = 0xc;
              iVar2 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
              local_8 = CONCAT31(local_8._1_3_,0xb);
            }
          }
          else {
            FUN_009885d0();
            local_8 = 9;
            FUN_009a8ee0(local_30,local_4c);
            local_8._0_1_ = 10;
            iVar2 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
            local_8 = CONCAT31(local_8._1_3_,9);
          }
        }
        else {
          FUN_009885d0();
          local_8 = 5;
          FUN_009a8ee0(local_30,local_4c);
          local_8._0_1_ = 6;
          iVar2 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
          local_8 = CONCAT31(local_8._1_3_,5);
        }
      }
      else {
        FUN_009885d0();
        local_8 = 3;
        FUN_009a8ee0(local_30,local_4c);
        local_8._0_1_ = 4;
        iVar2 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
        local_8 = CONCAT31(local_8._1_3_,3);
      }
      FUN_009a9740();
      FUN_00408ad0();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  ExceptionList = local_10;
  return param_1;
}

