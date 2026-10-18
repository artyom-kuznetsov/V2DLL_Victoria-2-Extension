// FUN_00988850 @ 00988850 body=[[00988850, 009888c3] [009888c7, 009888d5] [009888d9, 009888ec]]


undefined1 * FUN_00988850(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 local_48;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a4c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffff0000;
  local_18 = 7;
  FUN_0098a390(in_EDX,in_ECX);
  local_8._0_1_ = 1;
  uVar1 = FUN_00988550(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00447470(uVar1);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

