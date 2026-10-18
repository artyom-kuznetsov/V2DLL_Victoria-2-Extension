// FUN_008a3480 @ 008a3480 body=[[008a3480, 008a34eb] [008a34ef, 008a35b3] [008a35b7, 008a35d8] [008a35dc, 008a3604] [008a3608, 008a3682] [008a3686, 008a36c6] [008a36ca, 008a3700] [008a3704, 008a371b] [008a371f, 008a3733]]


/* WARNING: Removing unreachable block (ram,0x008a35fc) */

undefined4 FUN_008a3480(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  uint in_stack_00000020;
  uint local_a0;
  uint local_84;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_4c [4];
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b67f76;
  local_10 = ExceptionList;
  local_2c = 0;
  local_8 = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("ENABLE_CANAL",0xc);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_28,local_48);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  pcVar2 = __itoa(*(int *)(in_ECX + 0x20) / 1000,local_4c,10);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  local_8._0_1_ = 6;
  uVar3 = FUN_00988fa0();
  local_8._0_1_ = 7;
  FUN_009a8ee0(local_60,uVar3);
  local_8._0_1_ = 8;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8._0_1_ = 0xb;
  FUN_009adb70();
  if (local_5c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xd;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfbf14,4);
  local_8._0_1_ = 0xe;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 0xf;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0xe;
  FUN_009e6810(local_48,&local_14);
  local_8._0_1_ = 0xd;
  if (local_34 < 0x10) {
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_2c = 1;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x10);
    FUN_009adb70();
    if (local_24 == 0) {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      if (in_stack_00000020 < 0x10) {
        ExceptionList = local_10;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

