// FUN_00aed9c0 @ 00aed9c0 body=[[00aed9c0, 00aedc6b]]


undefined4 FUN_00aed9c0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *local_30;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3829e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00aed6e0(param_1,param_4,DAT_00ef259c ^ (uint)&stack0xffffffc0);
  if (iVar3 == 0) {
    if ((int *)*param_2 != (int *)param_2[1]) {
      (**(code **)(*(int *)param_2[1] + 100))();
      FUN_00b18720(0,0);
      iVar3 = *(int *)param_2[1];
      uVar4 = (**(code **)(*(int *)*param_2 + 0x78))();
      uVar4 = FUN_00b18940(uVar4);
      (**(code **)(iVar3 + 0xc))(uVar4);
      (**(code **)(*(int *)param_2[1] + 0x84))(0);
    }
  }
  else {
    uVar5 = 0;
    local_28 = &PTR_FUN_00ddcc88;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = (void *)0x0;
    local_14 = 0x400;
    local_10 = local_10 & 0xffffff00;
    local_4 = 0;
    local_30 = (int *)0x0;
    if ((int *)*param_2 == (int *)param_2[1]) {
      param_2[1] = (int)&local_28;
      local_30 = (int *)*param_2;
    }
    FUN_00b18960(0x40000);
    FUN_00b18960(0x40000);
    uVar1 = param_1[1];
    if (uVar1 != 0) {
      do {
        cVar2 = FUN_00aed610(*(undefined4 *)(*param_1 + uVar5 * 4),param_4);
        if (cVar2 != '\0') {
          (**(code **)(*(int *)param_2[1] + 100))();
          FUN_00b18720(0,0);
          (**(code **)(*(int *)param_2[1] + 0x84))(0);
          cVar2 = (**(code **)(**(int **)(uVar5 * 4 + *param_1) + 8))(param_2,param_2);
          if (cVar2 == '\0') {
            local_10 = 1;
            FUN_00b18780();
            ExceptionList = local_18;
            return 0;
          }
          iVar3 = (**(code **)(*(int *)param_2[1] + 0x78))();
          if (iVar3 == 0) {
            iVar3 = *(int *)param_2[1];
            uVar4 = (**(code **)(*(int *)*param_2 + 0x78))();
            uVar4 = FUN_00b18940(uVar4);
            (**(code **)(iVar3 + 0xc))(uVar4);
            (**(code **)(*(int *)param_2[1] + 0x84))(0);
          }
          cVar2 = FUN_00aed660(uVar5,param_1,param_4);
          if (cVar2 == '\0') {
            (**(code **)(*(int *)*param_2 + 100))();
            FUN_00b18720(0,0);
            iVar3 = *(int *)*param_2;
            uVar4 = (**(code **)(*(int *)param_2[1] + 0x78))();
            uVar4 = FUN_00b18940(uVar4);
            (**(code **)(iVar3 + 0xc))(uVar4);
            (**(code **)(*(int *)*param_2 + 0x84))(0);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 100))();
      FUN_00b18720(0,0);
      iVar3 = *local_30;
      uVar4 = (**(code **)(*(int *)param_2[1] + 0x78))();
      uVar4 = FUN_00b18940(uVar4);
      (**(code **)(iVar3 + 0xc))(uVar4);
      param_2[1] = (int)local_30;
    }
    (**(code **)(*(int *)param_2[1] + 0x84))(0);
    local_28 = &PTR_FUN_00ddcc88;
    local_4 = 2;
    FUN_00b18780();
  }
  ExceptionList = local_c;
  return 1;
}

