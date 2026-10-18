// FUN_00a76ce0 @ 00a76ce0 body=[[00a76ce0, 00a76ed1]]


undefined4 * FUN_00a76ce0(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_ECX;
  float10 fVar2;
  undefined **local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48223;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,in_ECX);
  param_1[0x4f] = DAT_00f092fc;
  *param_1 = &PTR_FUN_00e43570;
  param_1[0x50] = 0;
  param_1[0x52] = 0xc1200000;
  param_1[0x54] = in_ECX;
  param_1[0x55] = param_2;
  param_1[0x59] = param_3;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x62] = 0xf;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  param_1[0x69] = 0;
  param_1[0x6d] = 0;
  iVar1 = FUN_00aae9af(0x14);
  if (iVar1 != 0) {
    param_1[0x6c] = iVar1;
    *(int *)iVar1 = iVar1;
    *(undefined4 *)(param_1[0x6c] + 4) = param_1[0x6c];
    *(undefined4 *)(param_1[0x6c] + 8) = param_1[0x6c];
    *(undefined1 *)(param_1[0x6c] + 0x10) = 1;
    *(undefined1 *)(param_1[0x6c] + 0x11) = 1;
    local_8 = CONCAT31(local_8._1_3_,3);
    DAT_01258b68 = DAT_01258b68 + 1;
    param_1[0x2df] = 0;
    param_1[0x2e0] = 1;
    param_1[0x6a] = 0xbfcccccd;
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar2 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    param_1[0x69] = (float)fVar2;
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar2 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    param_1[0x53] = (float)fVar2;
    FUN_009b7670();
    param_1[0x2df] = 0;
    ExceptionList = local_10;
    return param_1;
  }
  param_2 = (char *)0x0;
  std::exception::exception((exception *)local_1c,&param_2);
  local_1c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_1c,&DAT_00e6fb20);
}

