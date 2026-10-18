// FUN_006bea70 @ 006bea70 body=[[006bea70, 006bec01] [006bec05, 006bec17]]


void FUN_006bea70(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  float local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3fe98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int *)param_1[0x2ad] != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)param_1[0x2ad] + 0x38))();
    uVar2 = (**(code **)(*(int *)param_1[0x2ad] + 0x44))();
    FUN_009962f0(uVar2);
    param_1[0x2ad] = 0;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("building_factory",0x10);
  local_8 = 0;
  iVar3 = *(int *)(param_2 + 0x5c);
  local_1c[0] = *(float *)(iVar3 + 0x1d4) - (float)*(int *)(iVar3 + 0x74);
  local_1c[1] = 0.0;
  local_1c[2] = *(float *)(iVar3 + 0x1d8) - (float)*(int *)(iVar3 + 0x78);
  iVar3 = (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))();
  piVar4 = (int *)FUN_005c2ad0(local_38);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x48))();
  (**(code **)(*(int *)(iVar3 + 0x14d4) + 0x10))(piVar4);
  param_1[0x2ad] = (int)piVar4;
  (**(code **)(*piVar4 + 0x34))();
  (**(code **)(*(int *)param_1[0x2ad] + 0x84))(local_1c);
  (**(code **)(*(int *)param_1[0x2ad] + 0x94))(*(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x1dc));
  iVar3 = *(int *)(param_2 + 0x58);
  iVar1 = param_1[0x2ad];
  iVar5 = (**(code **)(*param_1 + 0x38))();
  if (*(int *)(*(int *)(iVar5 + 0x20d8) + iVar3 * 4) != 0) {
    FUN_00644a70(iVar5,iVar1,1);
  }
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  ExceptionList = local_10;
  return;
}

