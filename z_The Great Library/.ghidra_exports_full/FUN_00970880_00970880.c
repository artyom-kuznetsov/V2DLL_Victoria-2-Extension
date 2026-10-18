// FUN_00970880 @ 00970880 body=[[00970880, 009708f5] [009708f9, 00970991] [00970995, 009709b7] [009709bb, 00970a08] [00970a0c, 00970a26] [00970a2a, 00970a4f] [00970a53, 00970a6c] [00970a72, 00970aa1] [00970aa5, 00970ab9]]


undefined1 * FUN_00970880(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint in_stack_0000001c;
  char cStack00000024;
  undefined1 local_d4 [16];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 *puStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  undefined4 local_7c;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b6427d;
  local_10 = ExceptionList;
  local_7c = 0;
  local_8 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  if (cStack00000024 != '\0') {
    local_ac = 0x700e36644;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_b4 = CONCAT44(0x9708d0,(undefined4)local_b4);
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 1;
    local_ac = CONCAT44(local_5c,0x9708e3);
    FUN_00988f20();
    local_8 = 3;
    if (0xf < local_48) {
      local_ac = CONCAT44(local_5c[0],&UNK_009708f6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_ac = CONCAT44(0x97090b,(undefined4)local_ac);
    iVar2 = FUN_00475500();
    local_b4 = *(undefined8 *)(iVar2 + 0x6c);
    uStack_b8 = 0;
    _cStack00000024 = local_d4;
    local_ac = *(undefined8 *)(iVar2 + 0x74);
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4[0] = 0;
    FUN_00408ed0(local_78,0,0xffffffff);
    uStack_b8 = FUN_00970880(local_98);
    puStack_bc = local_40;
    local_8 = 4;
    local_c0 = 0x970963;
    FUN_009a8ee0();
    local_8 = 5;
    uStack_b8 = 0x97096e;
    FUN_009a9880();
    local_8 = 8;
    local_ac = CONCAT44(0x97097a,(undefined4)local_ac);
    FUN_009adb70();
    if (local_3c != 0) {
      local_ac = CONCAT44(0x970989,(undefined4)local_ac);
      FUN_009e6a80();
      local_ac = CONCAT44(local_3c,&UNK_00970992);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_8 = 9;
    if (0xf < local_84) {
      local_ac = CONCAT44(local_98[0],&UNK_009709b8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    local_ac = CONCAT44(0x9709da,(undefined4)local_ac);
    cVar1 = FUN_00416db0();
    if (cVar1 == '\0') {
      local_ac = 0xffffffff00000000;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      local_b4 = CONCAT44(local_2c,0x9709fb);
      FUN_00408ed0();
      if (0xf < local_18) {
        local_ac = CONCAT44(local_2c[0],&UNK_00970a09);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_64) {
        local_ac = CONCAT44(local_78[0],&UNK_00970a27);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      goto joined_r0x00970a3a;
    }
    if (0xf < local_18) {
      local_ac = CONCAT44(local_2c[0],&UNK_00970a50);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_64) {
      local_ac = CONCAT44(local_78[0],&UNK_00970a6d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = 0;
  local_ac = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_b4 = CONCAT44(&param_2,0x970a94);
  FUN_00408ed0();
joined_r0x00970a3a:
  if (0xf < in_stack_0000001c) {
    local_ac = CONCAT44(param_2,&UNK_00970aa2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

