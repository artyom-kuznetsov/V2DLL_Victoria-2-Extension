// FUN_0064f170 @ 0064f170 body=[[0064f170, 0064f1fd] [0064f201, 0064f223] [0064f227, 0064f2b3] [0064f2b7, 0064f34d]]


void FUN_0064f170(float param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45558;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("messagelog",10);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("messagelog_window",0x11);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = (int *)(**(code **)(**(int **)((int)param_1 + 0x1630) + 0x6c))(local_2c);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))(local_48);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  iVar2 = (**(code **)(*piVar1 + 0x2c))();
  if (*(int *)((int)param_1 + 0xbac) < *(int *)(iVar2 + 8)) {
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
    puVar3 = *(undefined4 **)*puVar3;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("messagelogbutton",0x10);
    local_8 = 2;
    iVar2 = (**(code **)(*(int *)puVar3[8] + 0x34))(local_64);
    (**(code **)(*(int *)(iVar2 + 0x54) + 8))((int)param_1 + 0x90);
    local_8 = 0xffffffff;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (piVar1[0x41] == 0) {
      param_1 = DAT_00f092dc;
    }
    else {
      fVar5 = (float10)(**(code **)(*(int *)(piVar1[0x41] + 0x54) + 0x10))();
      param_1 = (float)fVar5;
    }
    (**(code **)(*piVar1 + 0x20))(puVar3,1);
    iVar2 = piVar1[0x54];
    iVar4 = (**(code **)(*piVar1 + 0x2c))();
    if ((int)param_1 + iVar2 == *(int *)(iVar4 + 8)) {
      (**(code **)(*piVar1 + 0x78))();
    }
    else {
      FUN_00452c70();
    }
    (**(code **)*puVar3)(1);
  }
  ExceptionList = local_10;
  return;
}

