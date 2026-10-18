// FUN_008dda90 @ 008dda90 body=[[008dda90, 008ddb02] [008ddb06, 008ddba3] [008ddba7, 008ddbc4] [008ddbc8, 008ddc5f] [008ddc63, 008ddd00] [008ddd04, 008ddd21] [008ddd25, 008ddd7a] [008ddd7e, 008ddd92]]


undefined4 FUN_008dda90(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined8 local_a4;
  undefined4 local_90;
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b667b9;
  local_10 = ExceptionList;
  local_14 = 0;
  if ((char)param_3 == '\0') {
    local_a4 = 0x1800e2e1cc;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_a4 = CONCAT44(local_74,local_3c);
    local_8 = 8;
    FUN_009a8ee0();
    local_8._0_1_ = 10;
    if (0xf < local_60) {
      local_a4 = CONCAT44(local_74[0],&UNK_008ddc60);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0x500df7f74;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xb;
    param_3 = &local_a4;
    local_a4 = *(undefined8 *)(in_ECX + 0x20);
    uVar1 = FUN_00988b20();
    local_8._0_1_ = 0xc;
    local_a4 = 0x40008ddcb4;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 0xd;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_a4 = CONCAT44(uVar1,local_3c);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0xc;
    local_a4 = CONCAT44(&param_3,local_58);
    FUN_009e6810();
    if (0xf < local_7c) {
      local_a4 = CONCAT44(local_90,&UNK_008ddd01);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    if (0xf < local_44) {
      local_a4 = CONCAT44(local_58[0],&UNK_008ddd22);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = CONCAT44(0x8ddd2a,(undefined4)local_a4);
    iVar2 = FUN_00475500();
    local_a4 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 0xe;
    local_a4 = CONCAT44(0x8ddd63,(undefined4)local_a4);
    FUN_009adb70();
    if (local_38 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_a4 = CONCAT44(0x8ddd72,(undefined4)local_a4);
    FUN_009e6a80();
    local_24 = local_38;
  }
  else {
    local_a4 = 0x1400e2e1b4;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_a4 = CONCAT44(local_58,local_28);
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_44) {
      local_a4 = CONCAT44(local_58[0],&UNK_008ddb03);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0x500df7f74;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    param_3 = &local_a4;
    local_a4 = *(undefined8 *)(in_ECX + 0x20);
    uVar1 = FUN_00988b20();
    local_8._0_1_ = 5;
    local_a4 = 0x40008ddb57;
    param_3 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      local_a4 = CONCAT44(uVar1,local_28);
      param_3 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    local_a4 = CONCAT44(&param_3,local_74);
    FUN_009e6810();
    if (0xf < local_7c) {
      local_a4 = CONCAT44(local_90,&UNK_008ddba4);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    if (0xf < local_60) {
      local_a4 = CONCAT44(local_74[0],&UNK_008ddbc5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = CONCAT44(0x8ddbcd,(undefined4)local_a4);
    iVar2 = FUN_00475500();
    local_a4 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_14 = 1;
    local_8 = 7;
    local_a4 = CONCAT44(0x8ddc06,(undefined4)local_a4);
    FUN_009adb70();
    if (local_24 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_a4 = CONCAT44(0x8ddc19,(undefined4)local_a4);
    FUN_009e6a80();
  }
  local_a4 = CONCAT44(local_24,&UNK_008ddd7b);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

