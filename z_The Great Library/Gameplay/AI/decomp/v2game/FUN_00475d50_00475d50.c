// FUN_00475d50 @ 00475d50 body=[[00475d50, 00475e02] [00475e06, 00475e1d] [00475e21, 00475e33]]


undefined4 FUN_00475d50(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *in_ECX;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b75283;
  local_10 = ExceptionList;
  local_14 = 0;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  local_30 = 0xf;
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  local_8 = 1;
  FUN_009a8ee0(local_28,local_44);
  local_8._0_1_ = 2;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_14 = 1;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

