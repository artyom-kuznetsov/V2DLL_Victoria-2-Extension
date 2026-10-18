// FUN_005623d0 @ 005623d0 body=[[005623d0, 0056240b] [0056240f, 00562442] [00562446, 0056247a] [0056247e, 005624a1]]


void FUN_005623d0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b3fe03;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CInvention::vftable;
  local_8 = 1;
  if (param_1[0x108] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x108]);
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  if (param_1[0x102] != 0) {
    FUN_004651b0(param_1[0x103]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x102]);
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  FUN_0056a060(param_1 + 0x1c);
  local_8 = local_8 & 0xffffff00;
  FUN_008b32d0();
  if (0xf < (uint)param_1[0x11]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xc]);
  }
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_0044be00();
  ExceptionList = local_10;
  return;
}

