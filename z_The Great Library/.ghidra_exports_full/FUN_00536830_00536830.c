// FUN_00536830 @ 00536830 body=[[00536830, 00536899] [0053689d, 00536960] [00536964, 00536984] [00536988, 00536a1e] [00536a22, 00536a40] [00536a44, 00536b0c] [00536b10, 00536b2a] [00536b2e, 00536b54] [00536b58, 00536b6c]]


undefined4 FUN_00536830(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  char local_4c [4];
  uint local_48;
  undefined4 local_38;
  uint local_34;
  int local_28;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b73601;
  local_10 = ExceptionList;
  local_8 = 0;
  local_18 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  iVar2 = *(int *)(param_1 + 0xe54);
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    local_14 = (undefined1 *)*(undefined4 *)(*(int *)(param_1 + 0xe64) + 8);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  FUN_009c9e20();
  local_8._0_1_ = 5;
  local_14 = (undefined1 *)FUN_00aae9af(0x40);
  local_8._0_1_ = 6;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  FUN_009e6810();
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 7;
  local_14 = &stack0xffffff68;
  FUN_00988bb0(local_84,2);
  local_8._0_1_ = 8;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 9;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 8;
  FUN_009e6810();
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
  local_18 = 1;
  FUN_00448740();
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  local_8._0_1_ = 10;
  pcVar3 = __itoa(*(int *)(*(int *)(param_1 + 0xbcc) + 0x280),local_4c,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 0xb;
  FUN_0042c180();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_00448aa0();
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xd;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

