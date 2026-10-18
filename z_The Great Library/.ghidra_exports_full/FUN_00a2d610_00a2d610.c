// FUN_00a2d610 @ 00a2d610 body=[[00a2d610, 00a2d73a] [00a2d73e, 00a2d758]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00a2d610(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48d9c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,in_ECX);
  *param_1 = &PTR_FUN_00e3fbf0;
  param_1[0x4f] = in_ECX;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = param_2;
  param_1[0x56] = 0;
  param_1[0x58] = param_3;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x61] = 0xf;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  param_1[0x70] = 0xffffffff;
  param_1[0x72] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x71] = 0;
  param_1[0x73] = 0;
  uVar1 = FUN_009b7610();
  param_1[0x55] = (float)(uVar1 & 0x7fffffff) * 4.656613e-10 * 5.0;
  uVar2 = FUN_00a536c0();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00408ed0(uVar2,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  _DAT_01258b3c = _DAT_01258b3c + 1;
  ExceptionList = local_10;
  return param_1;
}

