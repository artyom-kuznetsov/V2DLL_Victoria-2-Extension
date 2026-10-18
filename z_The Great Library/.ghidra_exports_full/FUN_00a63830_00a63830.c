// FUN_00a63830 @ 00a63830 body=[[00a63830, 00a639ee]]


undefined4 *
FUN_00a63830(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *_Dst;
  int iVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48413;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00a5ff00(param_1,param_2);
  *param_1 = &PTR_FUN_00e427c8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  param_1[0x2c] = 0xf;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x38] = 0xf;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x3e] = 0;
  local_8._0_1_ = 5;
  param_1[0x3f] = &PTR_FUN_00e427b0;
  _Dst = tbb::internal::NFS_Allocate(1,0x220,(void *)0x0);
  param_1[0x40] = _Dst;
  _memset(_Dst,0,0x220);
  *(undefined4 *)(param_1[0x40] + 0x104) = 4;
  *(undefined4 *)(param_1[0x40] + 0x100) = 0x20;
  param_1[0x3f] = &PTR_FUN_00e4279c;
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined4 *)(param_1[7] + 0x40) = param_3;
  param_1[0x3d] = param_3;
  param_1[5] = param_4;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined1 *)((int)param_1 + 0xc5) = 0;
  iVar1 = FUN_00a8a820(0,0xff,param_5,param_6);
  param_1[6] = iVar1;
  *(undefined4 *)(iVar1 + 0x17cc) = 1;
  param_1[0x3a] = 0;
  param_1[0x42] = 1;
  piVar2 = DAT_00f20c18;
  param_1[8] = 0x23;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00aae9af(4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
      DAT_00f20c18 = piVar2;
    }
    else {
      *piVar2 = (int)&PTR_FUN_00e38b28;
      DAT_00f20c18 = piVar2;
    }
  }
  piVar2 = (int *)(**(code **)(*piVar2 + 4))();
  param_1[0x2f] = piVar2;
  (**(code **)(*piVar2 + 8))();
  ExceptionList = local_10;
  return param_1;
}

