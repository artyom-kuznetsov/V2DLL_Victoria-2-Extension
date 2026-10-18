// FUN_005b6570 @ 005b6570 body=[[005b6570, 005b65cb] [005b65cf, 005b65fa] [005b65fe, 005b6624] [005b6628, 005b664e] [005b6652, 005b6687] [005b668b, 005b66aa]]


void FUN_005b6570(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5a9fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CLeader::vftable;
  local_8 = 5;
  if (param_1[0x22] != 0) {
    uVar1 = FUN_005b6140();
    FUN_005cbcc0(uVar1);
  }
  if (0xf < (uint)param_1[0x4c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x47]);
  }
  param_1[0x4c] = 0xf;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  if (0xf < (uint)param_1[0x3f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3a]);
  }
  param_1[0x3f] = 0xf;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  if (0xf < (uint)param_1[0x32]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2d]);
  }
  param_1[0x32] = 0xf;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if (0xf < (uint)param_1[0x2a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x25]);
  }
  param_1[0x2a] = 0xf;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_005b6500();
  *param_1 = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}

