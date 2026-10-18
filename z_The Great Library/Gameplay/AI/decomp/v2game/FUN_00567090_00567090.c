// FUN_00567090 @ 00567090 body=[[00567090, 0056713a] [0056713e, 005671c6] [005671ca, 00567201] [00567205, 0056721c] [00567220, 0056722e] [00567232, 00567246]]


undefined4 * FUN_00567090(undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
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
  
  puStack_c = &LAB_00b72500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00408ed0();
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  local_8 = 3;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  param_1[0x12] = in_stack_00000024;
  local_18 = 0xf;
  FUN_00409350(&DAT_00dfbe10,4);
  local_8 = 4;
  cVar2 = FUN_00416db0();
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
    FUN_009a8ee0(local_24,local_48);
    local_8 = 6;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
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

