// FUN_0095bdf0 @ 0095bdf0 body=[[0095bdf0, 0095be9a] [0095be9e, 0095befc] [0095bf00, 0095bf1f] [0095bf23, 0095bf69] [0095bf6d, 0095bf8b] [0095bf8f, 0095c070] [0095c074, 0095c08b] [0095c08f, 0095c0a4]]


undefined4 FUN_0095bdf0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined1 local_d0 [76];
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  undefined1 local_68 [4];
  int local_64;
  int *local_54;
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
  puStack_c = &LAB_00ba2d1d;
  local_10 = ExceptionList;
  local_34 = 0;
  ExceptionList = &local_10;
  FUN_008a8800();
  iVar2 = FUN_0095a780();
  local_54 = (int *)FUN_0095b0d0(in_ECX,local_d0);
  if ((iVar2 < 1) || (cVar1 = (**(code **)(*local_54 + 0x18))(), cVar1 == '\0')) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("NO_PROMOTION",0xc);
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
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350("POP_PROMOTION",0xd);
    local_8 = 1;
    FUN_009a8ee0(local_68,local_84);
    local_8._0_1_ = 3;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    FUN_00409350(&DAT_00df7e7c,3);
    local_8._0_1_ = 4;
    FUN_0095a780();
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
    local_8._0_1_ = 6;
    FUN_0096d650(local_54,local_50);
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
    if (local_64 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

