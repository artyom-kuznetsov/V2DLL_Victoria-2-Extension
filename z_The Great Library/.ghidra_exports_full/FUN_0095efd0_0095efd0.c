// FUN_0095efd0 @ 0095efd0 body=[[0095efd0, 0095f25f]]


undefined1 * FUN_0095efd0(int param_1,undefined1 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_cc [104];
  undefined1 local_64 [20];
  undefined1 local_50 [36];
  undefined1 local_2c [20];
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2aff;
  local_10 = ExceptionList;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    if ((*(char *)(*(int *)(param_1 + 0x68) + 0x3d9) == '\0') &&
       (local_18 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x128),
       *(int *)(param_1 + 0x6c) !=
       *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 100) + 300) * 4) +
               0xe64))) {
      ExceptionList = &local_10;
      FUN_008a8800();
      local_14 = FUN_0095ad40(param_1,local_cc);
      if (local_14 < 1) {
        FUN_009885d0();
        local_8 = 10;
        FUN_009a8ee0(local_2c,local_50);
        local_8._0_1_ = 0xb;
        iVar3 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
        local_8 = CONCAT31(local_8._1_3_,10);
      }
      else {
        piVar2 = (int *)FUN_0095f3d0();
        cVar1 = (**(code **)(*piVar2 + 0x20))();
        if (cVar1 != '\0') {
          FUN_009885d0();
          local_8 = 3;
          FUN_009a8ee0(local_64,local_50);
          local_8._0_1_ = 5;
          FUN_00408ad0();
          FUN_009885d0();
          local_8._0_1_ = 6;
          FUN_009888f0();
          local_8._0_1_ = 7;
          FUN_009a9980();
          FUN_00408ad0();
          local_8._0_1_ = 5;
          FUN_00408ad0();
          FUN_009885d0();
          local_8._0_1_ = 8;
          FUN_00974c50();
          local_8._0_1_ = 9;
          FUN_009a9980();
          FUN_00408ad0();
          local_8._0_1_ = 5;
          FUN_00408ad0();
          iVar3 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_009a9740();
          ExceptionList = local_10;
          return param_2;
        }
        FUN_009885d0();
        local_8 = 1;
        FUN_009a8ee0(local_2c,local_50);
        local_8._0_1_ = 2;
        iVar3 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
        local_8 = CONCAT31(local_8._1_3_,1);
      }
      FUN_009a9740();
      FUN_00408ad0();
    }
    else {
      ExceptionList = &local_10;
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00409350(&DAT_00ded94d,0);
    }
  }
  else {
    ExceptionList = &local_10;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  ExceptionList = local_10;
  return param_2;
}

