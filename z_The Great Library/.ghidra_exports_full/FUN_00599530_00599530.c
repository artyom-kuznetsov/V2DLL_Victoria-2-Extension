// FUN_00599530 @ 00599530 body=[[00599530, 0059963a]]


void FUN_00599530(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  if (param_2 == 0x8e1) {
    ExceptionList = &local_14;
    FUN_009a1ce0();
    ExceptionList = local_14;
    return;
  }
  if (param_2 != 0xa03) {
    ExceptionList = &local_14;
    FUN_00593e00(param_1,param_2);
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af(0xac);
  piVar2 = (int *)0x0;
  local_c = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00595f60(iVar1);
  }
  local_c = 0xffffffff;
  (**(code **)(*piVar2 + 0xc))(param_1);
  iVar1 = FUN_00967f50();
  if (piVar2[0x17] != 5) {
    if (iVar1 != 0) {
      iVar1 = FUN_00598ed0(iVar1);
      if (iVar1 == 0) goto LAB_005995fc;
    }
    (**(code **)*piVar2)(1);
    ExceptionList = piVar2;
    return;
  }
LAB_005995fc:
  FUN_0068f390();
  ExceptionList = pvStack_18;
  return;
}

