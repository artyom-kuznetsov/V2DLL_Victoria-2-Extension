// FUN_008ea860 @ 008ea860 body=[[008ea860, 008ea918] [008ea91c, 008ea93d] [008ea941, 008ea9e6] [008ea9ea, 008eaa0b] [008eaa0f, 008eaa33] [008eaa37, 008eaa50]]


/* WARNING: Removing unreachable block (ram,0x008ea960) */

undefined4 FUN_008ea860(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_a8;
  undefined1 local_a4;
  uint local_94;
  undefined4 local_90;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_54;
  undefined1 local_50 [16];
  uint uStack_40;
  uint uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b65ba6;
  pvStack_14 = ExceptionList;
  local_a8 = 0;
  if (param_3 == '\0') {
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = 0;
    ExceptionList = &pvStack_14;
    FUN_00409350(&DAT_00dee2cc,1);
    local_c = 3;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))(local_34);
    puStack_10._0_1_ = 4;
    FUN_0042c180(auStack_70,uVar1);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
    FUN_00988f20(&local_a8);
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_70[0]);
    }
    uStack_5c = 0xf;
    uStack_60 = 0;
    auStack_70[0] = auStack_70[0] & 0xffffff00;
    if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_38);
    }
    uStack_38 = uStack_38 & 0xffffff00;
    if (0xf < local_94) {
      uStack_24 = 0xf;
      uStack_28 = 0;
      uStack_5c = 0xf;
      uStack_60 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a8);
    }
  }
  else {
    ExceptionList = &pvStack_14;
    FUN_00409350(&DAT_00dee2cc,1);
    local_c = 0;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))(local_50);
    puStack_10._0_1_ = 1;
    FUN_0042c180(auStack_8c,uVar1);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
    FUN_00988f20(&stack0xffffff38);
    if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_8c[0]);
    }
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_54);
    }
  }
  ExceptionList = pvStack_18;
  return param_1;
}

