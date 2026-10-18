// FUN_008268d0 @ 008268d0 body=[[008268d0, 00826a9b]]


undefined1 FUN_008268d0(int param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *local_2c;
  int *local_28;
  int local_24;
  undefined1 local_20;
  int *local_1c;
  undefined1 local_15;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b4ae23;
  local_10 = ExceptionList;
  if ((((param_2 != (undefined4 *)0x0) && (*(int *)(*(int *)(param_1 + 0xdc) + 0x58) != 0)) &&
      (*(int *)(*(int *)(param_1 + 0xdc) + 0x10c) == 0)) && (*(char *)(param_1 + 0x104) == '\0')) {
    piVar5 = (int *)0x0;
    local_15 = 0;
    local_2c = (int *)0x0;
    local_28 = (int *)0x0;
    local_24 = 0;
    local_20 = 0;
    local_8 = 0;
    ExceptionList = &local_10;
    cVar2 = FUN_005cc3e0();
    if (cVar2 == '\0') {
      piVar5 = (int *)FUN_00aae9af(0x10);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = param_1;
        piVar5[1] = 0;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      local_24 = 1;
      local_2c = piVar5;
      local_28 = piVar5;
    }
    param_2 = (undefined4 *)*param_2;
    while (param_2 != (undefined4 *)0x0) {
      piVar1 = (int *)*param_2;
      param_2 = (undefined4 *)param_2[2];
      local_1c = piVar1;
      if (((piVar1 != (int *)param_1) && (piVar1[0x37] == *(int *)(param_1 + 0xdc))) &&
         (cVar2 = FUN_005cc3e0(), cVar2 == '\0')) {
        FUN_004a81b0();
        local_1c = piVar5;
        local_28 = (int *)FUN_00aae9af(0x10);
        if (local_28 == (int *)0x0) {
          local_28 = (int *)0x0;
        }
        else {
          *local_28 = (int)piVar1;
          local_28[1] = (int)piVar5;
          local_28[2] = 0;
          *(undefined1 *)(local_28 + 3) = 0;
        }
        piVar5 = local_28;
        if (local_24 != 0) {
          local_1c[2] = (int)local_28;
          piVar5 = local_2c;
        }
        local_2c = piVar5;
        local_15 = 1;
        piVar5 = local_28;
        local_24 = local_24 + 1;
      }
    }
    uVar4 = 0;
    if (((param_3 == '\0') || ((1 < local_24 && (cVar2 = FUN_00513d50(), cVar2 != '\0')))) &&
       (1 < local_24)) {
      iVar3 = FUN_00aae9af(0x4c);
      local_8._0_1_ = 1;
      if (iVar3 != 0) {
        uVar4 = FUN_005e13b0(iVar3,&local_2c);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar4);
      FUN_009a63f0();
      ExceptionList = local_10;
      return local_15;
    }
    FUN_009a63f0();
  }
  ExceptionList = local_10;
  return 0;
}

