// FUN_009760a0 @ 009760a0 body=[[009760a0, 0097617b] [0097617f, 009761a3] [009761a7, 009761ca] [009761ce, 0097624e] [00976252, 009762af] [009762b3, 009762d5] [009762d9, 009762f1]]


undefined1 * FUN_009760a0(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *in_ECX;
  uint local_a8;
  undefined1 local_a0 [4];
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  undefined1 local_54 [20];
  uint uStack_40;
  undefined4 local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b63e86;
  pvStack_14 = ExceptionList;
  pcVar2 = &stack0x00000008;
  local_38 = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_14;
  FUN_00409350(&stack0x00000008,(int)pcVar2 - (int)&stack0x00000009);
  local_c = 0;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  FUN_00409350(&DAT_00defd44,1);
  local_c._0_1_ = 1;
  FUN_00988f20();
  local_c._0_1_ = 2;
  FUN_00988f20();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  local_c._0_1_ = 6;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  FUN_009a8ee0(local_a0,local_54);
  local_c._0_1_ = 7;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_c._0_1_ = 10;
  FUN_009adb70();
  local_c = CONCAT31(local_c._1_3_,9);
  if (local_9c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
  }
  else {
    (**(code **)(*in_ECX + 0x2c))();
  }
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_14;
  return param_1;
}

