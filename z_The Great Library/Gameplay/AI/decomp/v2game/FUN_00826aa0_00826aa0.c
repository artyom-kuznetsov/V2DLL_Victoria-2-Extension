// FUN_00826aa0 @ 00826aa0  (requested 00826AA0, first bytes: 55 8B EC 83 E4 F8 6A FF)


undefined4 FUN_00826aa0(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *in_EDX;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4ae03;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar1 = FUN_005cc3e0();
  if (cVar1 != '\0') {
    ExceptionList = local_14;
    return 3;
  }
  (**(code **)(*param_2 + 0x38))();
  if (*(int *)(param_2[0x37] + 0x58) != *(int *)(param_3 + 0x58)) {
    if ((char)param_2[0x41] == '\0') {
      if (param_2[0x1d] == 0) {
        if (param_2[0x10] < 1) {
          ExceptionList = local_14;
          return 3;
        }
      }
      else {
        cVar1 = (**(code **)(*(int *)param_2[0x1d] + 0x2c))();
        if (cVar1 == '\0') {
          ExceptionList = local_14;
          return 3;
        }
      }
    }
    cVar1 = FUN_005b8500(param_4,param_2,param_3,in_EDX);
    if (cVar1 == '\0') {
      ExceptionList = local_14;
      return 2;
    }
    for (; in_ECX != 0; in_ECX = in_ECX + -1) {
      FUN_009c2ec0();
    }
    if (in_EDX[2] != 0) {
      iVar2 = *in_EDX;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      iStack_c = 0;
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        FUN_004e9b90();
      }
      iVar2 = FUN_00aae9af(0x90);
      iStack_c._0_1_ = 1;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_005de8e0(iVar2,&uStack_28);
      }
      iStack_c = (uint)iStack_c._1_3_ << 8;
      iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
      FUN_00461f90();
      ExceptionList = pvStack_18;
      return 0;
    }
    FUN_00826d20(param_1);
  }
  ExceptionList = local_14;
  return 1;
}

