// FUN_00474640 @ 00474640 body=[[00474640, 0047468c] [00474690, 004746e5] [004746e9, 00474726] [0047472a, 004747fb] [004747ff, 00474836] [0047483a, 00474859] [00474862, 004748cd] [004748d1, 00474908] [0047490c, 00474927] [0047492b, 00474971] [00474975, 004749a9]]


undefined1 * FUN_00474640(undefined1 *param_1)

{
  int iVar1;
  int in_ECX;
  undefined8 uVar2;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c;
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  int local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b77385;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_14 = (char *)(in_ECX + 0x18);
  local_8 = 0;
  local_20 = 1;
  local_1c = 0;
  local_18 = 0;
  do {
    iVar1 = local_18;
    if (*local_14 != '\0') {
      if (*(int *)(param_1 + 0x10) != local_1c) {
        local_28 = 0xf;
        local_2c = 0;
        local_3c = local_3c & 0xffffff00;
        FUN_00409350(&DAT_00dee2cc,1);
        local_8 = 1;
        FUN_00448aa0();
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_1c = *(int *)(param_1 + 0x10);
      FUN_00473e20(*(undefined4 *)(iVar1 + DAT_0125b5d0),local_74);
      local_8 = 2;
      FUN_00448aa0();
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_00448740(&DAT_00df9638,2);
      if (*(char *)(*(int *)(iVar1 + DAT_0125b5d0) + 0x28) == '\0') {
        if (*local_14 == '\0') goto LAB_00474769;
        uVar2 = 0x200df8510;
      }
      else if (*local_14 == '\0') {
        uVar2 = 0x200df8510;
      }
      else {
LAB_00474769:
        uVar2 = 0x200df8518;
      }
      FUN_00448740(uVar2);
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      if (*local_14 == '\0') {
        FUN_00409350(&DAT_00dfb4f8,2);
        local_8 = 7;
        FUN_009a8ee0(local_34,local_58);
        local_8._0_1_ = 8;
        iVar1 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
        local_8._0_1_ = 9;
        FUN_00448aa0();
        if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_60 = 0xf;
        local_64 = 0;
        local_74[0] = local_74[0] & 0xffffff00;
        local_8._0_1_ = 10;
        FUN_009adb70();
        if (local_30 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        FUN_00409350(&DAT_00dfb4f4,3);
        local_8 = 3;
        FUN_009a8ee0(local_34,local_58);
        local_8._0_1_ = 4;
        iVar1 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
        local_8._0_1_ = 5;
        FUN_00448aa0();
        if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_60 = 0xf;
        local_64 = 0;
        local_74[0] = local_74[0] & 0xffffff00;
        local_8._0_1_ = 6;
        FUN_009adb70();
        if (local_30 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_28 = 0;
      local_2c = 0;
      local_30 = 0;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00409350(&DAT_00df8514,2);
      local_8 = 0xb;
      FUN_00448aa0();
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_18 = local_18 + 4;
    local_14 = local_14 + 8;
    if (0x83 < local_18) {
      ExceptionList = local_10;
      return param_1;
    }
  } while( true );
}

