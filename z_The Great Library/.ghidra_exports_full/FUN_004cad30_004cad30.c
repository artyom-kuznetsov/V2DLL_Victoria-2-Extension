// FUN_004cad30 @ 004cad30 body=[[004cad30, 004cadb6] [004cadba, 004cae20] [004cae24, 004cae3e] [004cae42, 004cae97] [004cae9d, 004caecb]]


undefined1 * FUN_004cad30(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  int local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b75b33;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  cVar1 = FUN_00416db0();
  if ((cVar1 == '\0') || (*(int *)(in_ECX + 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0(in_ECX + 0x34,0,0xffffffff);
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    FUN_00409350();
    local_8 = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_44);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    (**(code **)(**(int **)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(in_ECX + 8) * 4) + 0x1c))
              (local_7c);
    local_8._0_1_ = 5;
    FUN_009a9980();
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_14 = 1;
    local_8 = 6;
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

