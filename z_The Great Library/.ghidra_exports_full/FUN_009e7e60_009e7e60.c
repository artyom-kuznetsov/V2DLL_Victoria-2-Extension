// FUN_009e7e60 @ 009e7e60 body=[[009e7e60, 009e7f7e]]


int * FUN_009e7e60(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3a753;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  local_8 = 0;
  FUN_00b134d0(0,0,0);
  FUN_00ad3820();
  puVar2 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(4,0x25b,4,0,0,0xffffffff);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00e3c5a4;
  }
  FUN_00ad3ae0(puVar2,1);
  iVar3 = (*(code *)PTR_FUN_00f01b08)(8,0x25c,4,0,0,0xffffffff);
  local_8._0_1_ = 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00ad4530();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00ad3aa0(uVar4,1);
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  piVar5 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
  piVar1 = (int *)*param_1;
  if ((piVar5 != piVar1) && (piVar1 != (int *)0x0)) {
    (**(code **)*piVar1)(1);
  }
  *param_1 = (int)piVar5;
  (**(code **)(*piVar5 + 4))();
  fVar6 = (float10)(**(code **)(*(int *)*param_1 + 0x14))();
  param_1[1] = (int)(float)fVar6;
  ExceptionList = local_10;
  return param_1;
}

