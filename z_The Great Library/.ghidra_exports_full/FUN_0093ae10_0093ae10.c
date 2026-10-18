// FUN_0093ae10 @ 0093ae10 body=[[0093ae10, 0093af13] [0093af17, 0093af37] [0093af52, 0093b01f] [0093b023, 0093b043] [0093b05e, 0093b599] [0093b5a0, 0093b94a]]


undefined4 FUN_0093ae10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_ec [4];
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  undefined4 local_bc;
  int local_b4;
  int local_b0;
  int local_a8;
  undefined1 local_a4 [56];
  undefined1 local_6c [56];
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bab966;
  local_14 = ExceptionList;
  iVar4 = *(int *)(DAT_012587e4 + 4);
  local_a8 = *(int *)(iVar4 + param_2[1] * 4);
  local_b0 = *(int *)(*(int *)(local_a8 + 0xbe8) + param_3[1] * 4);
  if (param_2[1] == param_3[1]) {
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = (uint)local_d8[0]._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("ACT_NO_SELF",0xb);
    local_c = 0;
    FUN_009a8ee0(local_ec,local_d8);
    local_c._0_1_ = 1;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_009adb70();
    if (local_e8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    if (local_c4 < 0x10) {
      ExceptionList = local_14;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b4 = *(int *)(local_b0 + 0x28);
  if ((local_b4 != 0) &&
     (local_bc = *(undefined4 *)(local_b4 + 8), *(int *)(local_b4 + 0xc) == *(int *)(local_b0 + 0xc)
     )) {
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = (uint)local_d8[0]._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("DECLWAR_GUARANTEE",0x11);
    local_c = 3;
    FUN_009a8ee0(local_ec,local_d8);
    local_c._0_1_ = 4;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_009adb70();
    if (local_e8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    if (local_c4 < 0x10) {
      ExceptionList = local_14;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_bc = *param_3;
  if ((*(char *)(*(int *)(iVar4 + param_3[1] * 4) + 0xcf4) == '\0') || (param_4 == '\0')) {
    local_bc = *param_3;
    iVar4 = *(int *)(iVar4 + param_3[1] * 4);
    if (((*(char *)(iVar4 + 0xcf5) == '\0') && (*(char *)(iVar4 + 0xcf4) == '\0')) ||
       (param_4 == '\0')) {
      ExceptionList = &local_14;
      if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0) {
        ExceptionList = &local_14;
        cVar3 = FUN_0042b220();
        if (cVar3 != '\0') {
          FUN_009885d0();
          local_c = 10;
          FUN_009a8ee0(local_ec,local_d8);
          local_c._0_1_ = 0xb;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_c._0_1_ = 10;
          FUN_009a9740();
          goto LAB_0093b92f;
        }
        cVar3 = FUN_0042b220();
        if (cVar3 != '\0') {
          FUN_009885d0();
          local_c = 0xc;
          FUN_009a8ee0(local_ec,local_d8);
          local_c._0_1_ = 0xd;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_c._0_1_ = 0xc;
          FUN_009a9740();
          goto LAB_0093b92f;
        }
      }
      iVar4 = local_a8;
      local_bc = *(undefined4 *)(local_a8 + 0x1428);
      if (((*(int *)(local_a8 + 0x142c) == param_3[1]) && (*(char *)(local_a8 + 0xcf5) == '\0')) &&
         (*(char *)(local_a8 + 0xcf4) == '\0')) {
        FUN_009885d0();
        local_c = 0xe;
        FUN_009a8ee0(local_ec,local_d8);
        local_c._0_1_ = 0xf;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        local_c._0_1_ = 0xe;
        FUN_009a9740();
      }
      else {
        cVar3 = FUN_00534000();
        if (((cVar3 == '\0') || (*(char *)(iVar4 + 0xcf5) != '\0')) ||
           (*(char *)(iVar4 + 0xcf4) != '\0')) {
          if ((*(int *)(local_b0 + 0x20) == 0) ||
             (((*(char *)(iVar4 + 0xcf5) != '\0' || (*(char *)(iVar4 + 0xcf4) != '\0')) &&
              (local_bc = *(undefined4 *)(iVar4 + 0xcf8), *(int *)(iVar4 + 0xcfc) == param_3[1]))))
          {
            if (*(char *)(*(int *)(*(int *)(iVar4 + 0xbe8) + param_3[1] * 4) + 0x70) == '\0') {
              local_bc = *param_2;
              local_b0 = *(int *)(DAT_012587e4 + 4);
              piVar1 = *(int **)(*(int *)(local_b0 + param_2[1] * 4) + 0x7b4);
              do {
                if (piVar1 == (int *)0x0) {
                  local_bc = *(undefined4 *)(iVar4 + 0x1428);
                  if ((((*(int *)(iVar4 + 0x142c) == 0) || (*(char *)(iVar4 + 0xcf5) != '\0')) ||
                      (*(char *)(iVar4 + 0xcf4) != '\0')) || (cVar3 = FUN_0042bb00(), cVar3 == '\0')
                     ) {
                    FUN_009885d0();
                    local_c = 0x1c;
                    local_b0 = FUN_009a8ee0(local_ec,local_d8);
                    local_c._0_1_ = 0x1d;
                    iVar4 = FUN_00475500();
                    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
                    local_c._0_1_ = 0x1f;
                    FUN_009a9740();
                    local_c._0_1_ = 0x20;
                    FUN_00408ad0();
                    local_bc = *param_2;
                    iVar4 = param_3[1];
                    cVar3 = FUN_0092e270();
                    if (cVar3 != '\0') {
                      local_bc = *param_2;
                      local_b0 = FUN_0043b700(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4)
                                                                        + param_2[1] * 4) + 0xbe8) +
                                                      iVar4 * 4) + 0x6c,local_34);
                      local_c._0_1_ = 0x21;
                      uVar5 = FUN_0055dd40();
                      local_c._0_1_ = 0x22;
                      FUN_0043ec10(local_6c,"COUNTRY",uVar5,&DAT_00dfa9f8,local_b0);
                      local_c._0_1_ = 0x23;
                      FUN_00988fa0();
                      local_c._0_1_ = 0x24;
                      FUN_00448aa0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      FUN_00408ad0();
                      local_c._0_1_ = 0x20;
                      FUN_00408ad0();
                    }
                    if ((param_4 == '\0') || (cVar3 = FUN_0092ede0(), cVar3 != '\0')) {
                      FUN_00401320();
                    }
                    else {
                      FUN_009885d0();
                      local_c._0_1_ = 0x25;
                      FUN_009a8ee0(local_6c,local_a4);
                      local_c._0_1_ = 0x26;
                      iVar4 = FUN_00475500();
                      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
                      local_c._0_1_ = 0x25;
                      FUN_009a9740();
                      FUN_00408ad0();
                    }
                  }
                  else {
                    FUN_009885d0();
                    local_c = 0x1a;
                    FUN_009a8ee0(local_ec,local_d8);
                    local_c._0_1_ = 0x1b;
                    iVar4 = FUN_00475500();
                    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
                    local_c._0_1_ = 0x1a;
                    FUN_009a9740();
                  }
                  goto LAB_0093b92f;
                }
                iVar2 = *piVar1;
                piVar1 = (int *)piVar1[2];
              } while (*(int *)(*(int *)(iVar2 + 0xdc) + 300) != param_3[1]);
              FUN_009885d0();
              local_c = 0x18;
              FUN_009a8ee0(local_ec,local_d8);
              local_c._0_1_ = 0x19;
              iVar4 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
              local_c._0_1_ = 0x18;
              FUN_009a9740();
            }
            else {
              FUN_009885d0();
              local_c = 0x16;
              FUN_009a8ee0(local_ec,local_d8);
              local_c._0_1_ = 0x17;
              iVar4 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
              local_c._0_1_ = 0x16;
              FUN_009a9740();
            }
          }
          else {
            FUN_009885d0();
            local_c = 0x14;
            FUN_009a8ee0(local_ec,local_d8);
            local_c._0_1_ = 0x15;
            iVar4 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
            local_c._0_1_ = 0x14;
            FUN_009a9740();
          }
        }
        else if (*(char *)(iVar4 + 0x31) == '\0') {
          FUN_009885d0();
          local_c = 0x12;
          FUN_009a8ee0(local_ec,local_d8);
          local_c._0_1_ = 0x13;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_c._0_1_ = 0x12;
          FUN_009a9740();
        }
        else {
          FUN_009885d0();
          local_c = 0x10;
          FUN_009a8ee0(local_ec,local_d8);
          local_c._0_1_ = 0x11;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_c._0_1_ = 0x10;
          FUN_009a9740();
        }
      }
    }
    else {
      ExceptionList = &local_14;
      FUN_009885d0();
      local_c = 8;
      FUN_009a8ee0(local_ec,local_d8);
      local_c._0_1_ = 9;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_c._0_1_ = 8;
      FUN_009a9740();
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_009885d0();
    local_c = 6;
    FUN_009a8ee0(local_ec,local_d8);
    local_c._0_1_ = 7;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_c._0_1_ = 6;
    FUN_009a9740();
  }
LAB_0093b92f:
  FUN_00408ad0();
  ExceptionList = local_14;
  return param_1;
}

