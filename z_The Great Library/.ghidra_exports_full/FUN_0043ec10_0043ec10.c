// FUN_0043ec10 @ 0043ec10 body=[[0043ec10, 0043ec80] [0043ec84, 0043ed0d] [0043ed11, 0043ed8c] [0043ed90, 0043ede5] [0043ede9, 0043edfc]]


undefined4 FUN_0043ec10(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *in_ECX;
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
  puStack_c = &LAB_00b62af9;
  local_10 = ExceptionList;
  local_18 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  local_8 = 1;
  FUN_009a8ee0(local_2c,local_48);
  local_8._0_1_ = 3;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(param_2,(int)pcVar2 - (int)(param_2 + 1));
  local_8._0_1_ = 4;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 5;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 4;
  FUN_009e6810(local_64,&local_14);
  local_8._0_1_ = 3;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(param_4,(int)pcVar2 - (int)(param_4 + 1));
  local_8._0_1_ = 6;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
  FUN_009e6810(local_64,&local_14);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_18 = 1;
  local_8 = 8;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

