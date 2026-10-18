// FUN_009165c0 @ 009165c0 body=[[009165c0, 009166ae] [009166b2, 009166d2] [009166db, 009167f8]]


undefined1 * FUN_009165c0(undefined1 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b790aa;
  local_14 = ExceptionList;
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                                0xbe8) + *(int *)(in_ECX + 0x14) * 4) + 0x34) == 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("DIPL_NOT_AT_WAR",0xf);
    local_c = 0;
    FUN_009a8ee0(local_48,local_34);
    local_c._0_1_ = 1;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_009adb70();
    if (local_44 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_14;
    if ((*(int *)(in_ECX + 0x34) != 0) &&
       (ExceptionList = &local_14, cVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))(),
       cVar1 != '\0')) {
      FUN_0092eec0();
      cVar1 = FUN_00538af0();
      if (cVar1 == '\0') {
        uVar2 = FUN_0092eec0();
        FUN_00538c40(param_1,uVar2);
        ExceptionList = local_14;
        return param_1;
      }
    }
    if ((*(int *)(in_ECX + 0x34) == 0) ||
       (cVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))(), cVar1 == '\0')) {
      FUN_0092ede0();
      cVar1 = FUN_00538af0();
      if (cVar1 == '\0') {
        uVar2 = FUN_0092eec0();
        FUN_00538c40(param_1,uVar2);
        ExceptionList = local_14;
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  ExceptionList = local_14;
  return param_1;
}

