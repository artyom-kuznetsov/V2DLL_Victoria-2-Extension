// FUN_0052dd70 @ 0052dd70 body=[[0052dd70, 0052ddac] [0052ddb0, 0052de86] [0052de8a, 0052debd] [0052dec1, 0052df55] [0052df59, 0052df8c] [0052df90, 0052dfa9] [0052dfad, 0052e040] [0052e044, 0052e05d] [0052e061, 0052e07a] [0052e07e, 0052e117] [0052e11b, 0052e1ad] [0052e1b1, 0052e1ce] [0052e1d2, 0052e1ec] [0052e1f0, 0052e20d] [0052e211, 0052e24a] [0052e24e, 0052e2ee] [0052e2f2, 0052e322] [0052e326, 0052e33f] [0052e343, 0052e3c0] [0052e3c4, 0052e3f4] [0052e3f8, 0052e490] [0052e494, 0052e533] [0052e537, 0052e561] [0052e565, 0052e59f] [0052e5a3, 0052e5b7]]


/* WARNING: Removing unreachable block (ram,0x0052e035) */
/* WARNING: Removing unreachable block (ram,0x0052e1a2) */

undefined1 * FUN_0052dd70(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint local_74;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b73f17;
  local_10 = ExceptionList;
  iVar5 = *(int *)(param_3 + 0x60);
  for (; param_4 != 0; param_4 = param_4 + -1) {
    iVar5 = *(int *)(iVar5 + 0x224);
  }
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  if (((*(int *)(iVar5 + 0x20) < 1) || (10 < *(int *)(iVar5 + 0x184))) ||
     (*(char *)(iVar5 + 0x188) != '\0')) {
    cVar4 = FUN_0052dcd0();
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    if (cVar4 == '\0') {
      FUN_00409350();
      local_8 = 5;
      iVar5 = FUN_009a8ee0();
      local_8._0_1_ = 6;
      FUN_00475500();
      FUN_009a9880();
      local_8._0_1_ = 7;
      FUN_00448aa0();
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 8;
      FUN_009adb70();
      if (local_3c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      FUN_00409350();
      local_8 = 1;
      iVar5 = FUN_009a8ee0();
      local_8._0_1_ = 2;
      FUN_00475500();
      FUN_009a9880();
      local_8._0_1_ = 3;
      FUN_00448aa0();
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 4;
      FUN_009adb70();
      if (local_3c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    if ((*(int *)(param_3 + 0x5c) != *(int *)(param_1 + 0x20)) &&
       (*(char *)(param_1 + 0xb30) == '\0')) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      FUN_00409350();
      local_8 = 9;
      (**(code **)(*(int *)(param_1 + 0xaa8) + 0x20))();
      local_8._0_1_ = 10;
      FUN_00988f20();
      local_8._0_1_ = 0xb;
      FUN_00448aa0();
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_38 = 0;
    FUN_004dab20();
    uVar1 = *(uint *)(param_1 + 0xe78);
    iVar2 = *(int *)(param_1 + 0xe7c);
    FUN_00409350(&DAT_00dedc20,2);
    if ((iVar5 < iVar2) || ((iVar5 <= iVar2 && (local_6c <= uVar1)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    FUN_009c98f0(local_64,!bVar3);
    local_8 = 0xc;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350();
    local_8 = 0xd;
    FUN_00988bb0();
    local_8._0_1_ = 0xe;
    FUN_00988f20();
    local_8._0_1_ = 0xf;
    FUN_0042c180();
    local_8._0_1_ = 0x10;
    FUN_00448aa0();
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    (**(code **)(*(int *)(param_1 + 0xaa8) + 0x20))();
    local_8 = 0x11;
    FUN_00448aa0();
    uVar1 = local_50;
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    if (*(int *)(param_3 + 0x5c) == *(int *)(param_1 + 0x20)) {
      if (*(char *)(param_1 + 0xad8) == '\0') {
        FUN_00409350();
        local_8 = 0x1d;
        FUN_009a8ee0();
        local_8._0_1_ = 0x1e;
        FUN_00475500();
        FUN_009a9880();
        local_8._0_1_ = 0x1f;
        FUN_00448aa0();
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_50 = 0xf;
        local_54 = 0;
        local_64[0] = local_64[0] & 0xffffff00;
        local_8._0_1_ = 0x1d;
        FUN_009a9740();
      }
      else {
        FUN_00409350();
        local_8 = 0x1a;
        FUN_009a8ee0();
        local_8._0_1_ = 0x1b;
        FUN_00475500();
        FUN_009a9880();
        local_8._0_1_ = 0x1c;
        FUN_00448aa0();
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_50 = 0xf;
        local_54 = 0;
        local_64[0] = local_64[0] & 0xffffff00;
        local_8._0_1_ = 0x1a;
        FUN_009a9740();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_18 < 0x10) {
        (**(code **)(*(int *)(param_1 + 0xaa8) + 0x20))();
        local_8 = 0x20;
        FUN_00448aa0();
        if (local_50 < 0x10) {
          ExceptionList = local_10;
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00409350();
    local_8 = 0x12;
    FUN_009a8ee0();
    local_8._0_1_ = 0x13;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0x14;
    FUN_00448aa0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8._0_1_ = 0x15;
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350();
    local_8 = 0x16;
    FUN_009a8ee0();
    local_8._0_1_ = 0x17;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0x18;
    FUN_00448aa0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x19);
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    uVar1 = local_18;
  }
  if (uVar1 < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

