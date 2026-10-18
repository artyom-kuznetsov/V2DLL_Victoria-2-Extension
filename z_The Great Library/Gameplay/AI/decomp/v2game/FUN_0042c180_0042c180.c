// FUN_0042c180 @ 0042c180 body=[[0042c180, 0042c1f0] [0042c1f4, 0042c27a] [0042c27e, 0042c2d3] [0042c2d7, 0042c2ea]]


undefined4 FUN_0042c180(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *in_ECX;
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
  puStack_c = &LAB_00b62d46;
  local_10 = ExceptionList;
  local_18 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  local_8 = 1;
  FUN_009a8ee0(local_2c,local_48);
  local_8._0_1_ = 3;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_50 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
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
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_18 = 1;
  local_8 = 6;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

