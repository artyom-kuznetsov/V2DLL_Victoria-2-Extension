// FUN_004556c0 @ 004556c0 body=[[004556c0, 0045575a] [0045575e, 004557cc]]


undefined4 * FUN_004556c0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b470bc;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("nf_overwrite_entry",0x12);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  piVar1 = DAT_01258a80;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_2c);
  param_1[8] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CNFOverwriteEntry::vftable;
  param_1[7] = CNFOverwriteEntry::vftable;
  param_1[10] = param_2;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = in_ECX;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00456400(&LAB_00455a60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_004557d0();
  ExceptionList = local_10;
  return param_1;
}

