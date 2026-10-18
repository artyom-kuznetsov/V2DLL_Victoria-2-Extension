// FUN_009caff0 @ 009caff0 body=[[009caff0, 009cb2a6]]


void FUN_009caff0(float param_1)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  float in_XMM0_Da;
  float fVar4;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  float local_c [2];
  
  if (*(short *)(in_EAX + 0x244) == 0) {
    FUN_009cae00();
    local_c[0] = in_XMM0_Da;
    piVar1 = (int *)(**(code **)(*(int *)(in_EAX + 0x54) + 0x18))(local_1c);
    iVar3 = *piVar1;
    iVar2 = (**(code **)(*(int *)(in_EAX + 0x54) + 0x18))(local_2c);
    FUN_00401000((((float)(*(int *)(iVar2 + 4) - iVar3) / 1000.0) * (param_1 / local_c[0]) + 0.0005)
                 * 1000.0);
    iVar3 = FUN_00b31c00();
    piVar1 = (int *)(**(code **)(*(int *)(in_EAX + 0x54) + 0x18))(local_2c);
    FUN_00401000(((float)(*piVar1 + iVar3) / 1000.0 + 0.0005) * 1000.0);
    FUN_00b31c00();
    piVar1 = (int *)FUN_00a6b880(local_c);
    fVar4 = (float)*piVar1 / 1000.0;
    if (*(float *)(in_EAX + 0x228) == fVar4) {
      return;
    }
  }
  else {
    FUN_009cad90();
    local_c[0] = in_XMM0_Da;
    piVar1 = (int *)(**(code **)(*(int *)(in_EAX + 0x54) + 0x18))(local_2c);
    iVar3 = *piVar1;
    iVar2 = (**(code **)(*(int *)(in_EAX + 0x54) + 0x18))(local_1c);
    fVar4 = ((float)(*(int *)(iVar2 + 4) - iVar3) / 1000.0) * (param_1 / local_c[0]);
    *(float *)(in_EAX + 0x228) = fVar4;
    FUN_00401000((fVar4 + 0.0005) * 1000.0);
    iVar3 = FUN_00b31c00();
    piVar1 = (int *)(**(code **)(*(int *)(in_EAX + 0x54) + 0x18))(local_2c);
    fVar4 = (float)(*piVar1 + iVar3) / 1000.0;
    *(float *)(in_EAX + 0x228) = fVar4;
    FUN_00401000((fVar4 + 0.0005) * 1000.0);
    FUN_00b31c00();
    piVar1 = (int *)FUN_00a6b880(local_c);
    fVar4 = (float)*piVar1 / 1000.0;
  }
  *(float *)(in_EAX + 0x228) = fVar4;
  FUN_009cc770(0,1,1);
  return;
}

