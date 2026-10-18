// FUN_0091e080 @ 0091e080 body=[[0091e080, 0091e159] [0091e15d, 0091e179] [0091e17f, 0091e1f8]]


undefined1 * FUN_0091e080(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b790aa;
  local_14 = ExceptionList;
  iVar2 = *(int *)(DAT_012587e4 + 4);
  iVar1 = *(int *)(iVar2 + *(int *)(in_ECX + 0xc) * 4);
  if ((*(char *)(iVar1 + 0xcf5) == '\0') && (*(char *)(iVar1 + 0xcf4) == '\0')) {
    if ((*(char *)(*(int *)(iVar2 + *(int *)(in_ECX + 0xc) * 4) + 0x31) == '\0') ||
       ((*(char *)(*(int *)(iVar2 + *(int *)(in_ECX + 0x14) * 4) + 0x31) == '\0' ||
        (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) == 0)))) {
      ExceptionList = &local_14;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00409350(&DAT_00ded94d,0);
    }
    else {
      ExceptionList = &local_14;
      FUN_00475d50();
    }
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("SUBJECT",7);
    local_c = 0;
    FUN_009a8ee0(local_48,local_34);
    local_c._0_1_ = 1;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_009adb70();
    if (local_44 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

