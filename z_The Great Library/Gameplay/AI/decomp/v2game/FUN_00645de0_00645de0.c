// FUN_00645de0 @ 00645de0 body=[[00645de0, 00645ed8] [00645edc, 00645fc3]]


void FUN_00645de0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  float local_28 [3];
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44d98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_00456b90();
  if (*piVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00456b90();
    (**(code **)(*(int *)*puVar3 + 0x38))();
    FUN_009962f0(DAT_012588dc + 0x1948);
    FUN_00646060(&local_1c,&param_2);
    FUN_00445600(local_1c,local_18);
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350("national_focus",0xe);
  iVar1 = DAT_012588dc;
  local_8 = 0;
  piVar2 = (int *)FUN_005c2ad0(local_44);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x48))();
  (**(code **)(*(int *)(iVar1 + 0x1948) + 0x10))(piVar2);
  local_8 = 0xffffffff;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  (**(code **)(*piVar2 + 0x48))(2);
  (**(code **)(*piVar2 + 0x34))();
  (**(code **)(*piVar2 + 0x60))(param_3 + 1);
  iVar1 = *(int *)(param_1 + 8);
  local_28[0] = *(float *)(iVar1 + 0x54) - (float)*(int *)(iVar1 + 0x74);
  local_28[2] = *(float *)(iVar1 + 0x58) - (float)*(int *)(iVar1 + 0x78);
  local_28[1] = 1.25;
  (**(code **)(*piVar2 + 0x84))(local_28);
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  if (*(int *)(*(int *)(DAT_012588dc + 0x20d8) + *(int *)(*(int *)(param_1 + 8) + 0xb4) * 4) != 0) {
    FUN_00644a70(DAT_012588dc,piVar2,1);
  }
  puVar3 = (undefined4 *)FUN_00456b90();
  *puVar3 = piVar2;
  ExceptionList = local_10;
  return;
}

