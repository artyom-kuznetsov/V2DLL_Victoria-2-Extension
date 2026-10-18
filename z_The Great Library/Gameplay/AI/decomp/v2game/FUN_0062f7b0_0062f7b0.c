// FUN_0062f7b0 @ 0062f7b0 body=[[0062f7b0, 0062f9b4]]


undefined4 * FUN_0062f7b0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45761;
  local_10 = ExceptionList;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  iVar2 = *(int *)(&DAT_00f095b8 + param_3 * 8);
  if (iVar2 == 0x38d) {
    if (*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(param_1 + 0x38c) * 4) + 0x34) == 0) {
      uVar4 = 0x38d;
    }
    else {
      uVar4 = *(undefined4 *)(&DAT_00f095bc + param_3 * 8);
    }
    ExceptionList = &local_10;
    piVar5 = (int *)FUN_0090e850(uVar4);
    local_8 = 1;
    (**(code **)(*piVar5 + 0x4c))(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
    (**(code **)(*piVar5 + 0x48))(*(undefined4 *)(param_1 + 0x388),*(undefined4 *)(param_1 + 0x38c))
    ;
    piVar5[6] = *(int *)(DAT_012588e8 + 0xb0c);
    *param_2 = piVar5;
    ExceptionList = local_10;
    return param_2;
  }
  ExceptionList = &local_10;
  piVar5 = (int *)FUN_0090e850(iVar2);
  local_8 = 2;
  (**(code **)(*piVar5 + 0x4c))(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
  (**(code **)(*piVar5 + 0x48))(*(undefined4 *)(param_1 + 0x388),*(undefined4 *)(param_1 + 0x38c));
  piVar5[6] = *(int *)(DAT_012588e8 + 0xb0c);
  cVar3 = FUN_00911760(1);
  if ((cVar3 == '\0') &&
     (*(int *)(&DAT_00f095bc + param_3 * 8) != *(int *)(&DAT_00f095b8 + param_3 * 8))) {
    piVar6 = (int *)FUN_0090e850(*(int *)(&DAT_00f095bc + param_3 * 8));
    local_8._0_1_ = 3;
    (**(code **)(*piVar6 + 0x4c))(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x20));
    (**(code **)(*piVar6 + 0x48))(*(undefined4 *)(param_1 + 0x388),*(undefined4 *)(param_1 + 0x38c))
    ;
    piVar6[6] = *(int *)(DAT_012588e8 + 0xb0c);
    cVar3 = FUN_00911760(1);
    if (cVar3 != '\0') {
      local_8 = (uint)local_8._1_3_ << 8;
      *param_2 = piVar6;
      (**(code **)*piVar5)();
      ExceptionList = local_10;
      return param_2;
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)*piVar6)(1);
  }
  *param_2 = piVar5;
  ExceptionList = local_10;
  return param_2;
}

