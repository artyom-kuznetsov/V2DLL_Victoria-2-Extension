// FUN_005ccc00 @ 005ccc00 body=[[005ccc00, 005cccd4]]


void FUN_005ccc00(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  float local_1c [3];
  undefined1 local_10 [12];
  
  if (param_1[0x42] != 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x42] + 0x38))();
    uVar5 = *(undefined4 *)
             (*(int *)(*(int *)(iVar1 + 0x20d8) + *(int *)(param_2 + 0x58) * 4) + 0x10);
    uVar2 = (**(code **)(*(int *)param_1[0x42] + 0x40))(param_3,uVar5);
    piVar3 = (int *)FUN_007e08e0(uVar2,param_3,uVar5);
    (**(code **)(*piVar3 + 0x34))();
    if (*(int *)(*(int *)(iVar1 + 0x20d8) + *(int *)(param_2 + 0x58) * 4) != 0) {
      FUN_00644a70(iVar1,piVar3,0);
    }
    iVar1 = *(int *)(param_2 + 0x5c);
    piVar4 = (int *)(**(code **)(*param_1 + 0x70))(local_10,param_2);
    local_1c[0] = (float)(*piVar4 - *(int *)(iVar1 + 0x74));
    local_1c[1] = 0.0;
    local_1c[2] = (float)(piVar4[1] - *(int *)(iVar1 + 0x78));
    (**(code **)(*piVar3 + 0x84))(local_1c);
  }
  return;
}

