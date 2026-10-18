// FUN_00896a10 @ 00896a10 body=[[00896a10, 00896afd] [00896b01, 00896b1a] [00896b1e, 00896b2b] [00896b2f, 00896b43]]


undefined4 FUN_00896a10(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  uint in_stack_00000020;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68b48;
  local_10 = ExceptionList;
  local_8 = 0;
  local_18 = 0x8000;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &local_10;
  FUN_008a5830();
  local_8._0_1_ = 1;
  FUN_0052b610();
  uVar1 = __alldiv(*(int *)(in_ECX + 0x20) << 0x1e);
  __allmul(uVar1);
  uVar1 = FUN_009c8700(local_44);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0042c180(param_1,uVar1);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

