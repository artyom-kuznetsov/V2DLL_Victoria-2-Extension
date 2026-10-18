// FUN_009748d0 @ 009748d0 body=[[009748d0, 009749d9] [009749dd, 00974a65] [00974a69, 00974aa0] [00974aa4, 00974abb] [00974abf, 00974acd] [00974ad1, 00974ae5]]


undefined4 * FUN_009748d0(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_stack_0000001c;
  undefined3 uStack00000024;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b63ee3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[1] = 0x18d;
  *param_1 = CIssueGroup::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00408ed0();
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  _local_8 = CONCAT31(uStack_7,3);
  param_1[0x14] = _uStack00000024;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  if ((DAT_00f0ec08 == 0) || (piVar3 = (int *)FUN_009e6c10(), piVar3 == (int *)0x0)) {
    iVar5 = 0xc;
  }
  else {
    iVar5 = *piVar3;
  }
  param_1[0x15] = iVar5;
  if (iVar5 == 0xc) {
    uVar4 = FUN_009902d0(&param_2,0);
    param_1[0x15] = uVar4;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00409350("noIssuegroup",0xc);
  local_8 = 4;
  cVar2 = FUN_00416db0();
  _uStack00000024 = CONCAT13(cVar2 == '\0',uStack00000024);
  local_8 = 3;
  uVar1 = local_8;
  local_8 = 3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (cVar2 == '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00408ed0();
    local_8 = 5;
    _uStack00000024 = FUN_009a8ee0(local_24,local_48);
    local_8 = 6;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8 = 7;
    FUN_00408ed0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 8;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar1 = local_8;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = uVar1;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

