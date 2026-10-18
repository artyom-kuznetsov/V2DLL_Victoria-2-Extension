// FUN_00753540 @ 00753540 body=[[00753540, 007535b2] [007535b6, 00753649] [0075364d, 0075366b] [0075366f, 007536c4] [007536c8, 007536db]]


/* WARNING: Removing unreachable block (ram,0x00753663) */

undefined4 FUN_00753540(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *in_EDX;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6d9ce;
  local_10 = ExceptionList;
  local_18 = 0;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  local_8 = 1;
  FUN_009a8ee0(local_2c,local_64);
  local_8._0_1_ = 3;
  if (local_50 < 0x10) {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 4;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("VALUE",5);
    local_8._0_1_ = 5;
    local_14 = FUN_00aae9af();
    local_8._0_1_ = 6;
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    FUN_009e6810(local_48,&local_14);
    if (local_34 < 0x10) {
      local_8 = CONCAT31(local_8._1_3_,3);
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      iVar3 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
      local_18 = 1;
      local_8 = 7;
      FUN_009adb70();
      if (local_28 == 0) {
        ExceptionList = local_10;
        return param_1;
      }
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

