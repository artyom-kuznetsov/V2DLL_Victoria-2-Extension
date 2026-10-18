// FUN_0095c450 @ 0095c450 body=[[0095c450, 0095c4f7] [0095c4fb, 0095c555] [0095c559, 0095c579] [0095c57d, 0095c5d2] [0095c5d6, 0095c5f4] [0095c5f8, 0095c6d9] [0095c6dd, 0095c6f4] [0095c6f8, 0095c70d]]


undefined4 FUN_0095c450(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_ECX;
  uint *puVar5;
  undefined1 local_c8 [72];
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined1 local_64 [4];
  int local_60;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2c1d;
  local_10 = ExceptionList;
  local_34 = 0;
  ExceptionList = &local_10;
  FUN_008a8800();
  iVar2 = FUN_0095aa30();
  piVar3 = (int *)FUN_0095b740(in_ECX,local_c8);
  if ((iVar2 < 1) || (cVar1 = (**(code **)(*piVar3 + 0x18))(), cVar1 == '\0')) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("NO_DEMOTION",0xb);
    local_8 = 9;
    FUN_009a8ee0(local_28,local_50);
    local_8._0_1_ = 10;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_34 = 1;
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (local_3c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350("POP_DEMOTION",0xc);
    local_8 = 1;
    FUN_009a8ee0(local_64,local_80);
    local_8._0_1_ = 3;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    FUN_00409350(&DAT_00df7e7c,3);
    local_8._0_1_ = 4;
    FUN_0095aa30();
    FUN_009888f0();
    local_8._0_1_ = 5;
    FUN_009a9980();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    FUN_00409350(&DAT_00df7e80,4);
    puVar5 = local_50;
    local_8._0_1_ = 6;
    uVar4 = FUN_0095b740();
    FUN_0096d650(uVar4,puVar5);
    local_8._0_1_ = 7;
    FUN_009a9980();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_34 = 1;
    local_8 = 8;
    FUN_009adb70();
    if (local_60 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

