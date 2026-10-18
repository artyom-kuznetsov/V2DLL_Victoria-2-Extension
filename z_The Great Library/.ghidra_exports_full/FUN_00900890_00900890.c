// FUN_00900890 @ 00900890 body=[[00900890, 00900995] [00900999, 009009b9] [009009bd, 009009e5] [009009e9, 00900a44] [00900a48, 00900a60]]


undefined4 FUN_00900890(undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  undefined1 local_a4 [4];
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  undefined1 local_74 [20];
  uint local_60;
  undefined4 local_58;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  char local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b654ce;
  local_14 = ExceptionList;
  local_58 = 0;
  local_7c = 0xf;
  local_80 = 0;
  local_90 = local_90 & 0xffffff00;
  local_c = 0;
  ExceptionList = &local_14;
  pcVar2 = __itoa(*(int *)(in_ECX + 0x1c),local_38,10);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  local_c = 1;
  uVar3 = FUN_00988fa0();
  local_c._0_1_ = 2;
  FUN_009a8ee0(local_a4,uVar3);
  local_c._0_1_ = 3;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_c._0_1_ = 6;
  FUN_009adb70();
  if (local_a0 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  local_c = CONCAT31(local_c._1_3_,8);
  if (local_7c < 0x10) {
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    if (param_3 == '\0') {
      FUN_0042c180(param_1,local_74);
    }
    else {
      FUN_0042c180(param_1,local_74);
    }
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

