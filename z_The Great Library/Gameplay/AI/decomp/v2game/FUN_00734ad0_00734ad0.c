// FUN_00734ad0 @ 00734ad0 body=[[00734ad0, 00734c76]]


void FUN_00734ad0(float param_1)

{
  float fVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)(in_EAX + 0x4f) == '\0') {
    uVar5 = 0;
    uVar4 = 1;
    FUN_00401000(((float)*(int *)(in_EAX + 0x234) / 1000.0 + 0.0005) * 1000.0);
    uVar2 = FUN_00b31c00();
    (**(code **)(*(int *)(in_EAX + 0x54) + 0x1c))(uVar2,uVar4,uVar5);
    return;
  }
  fVar3 = (float10)(**(code **)(*(int *)(in_EAX + 0x54) + 0x10))();
  fVar1 = (float)*(int *)(in_EAX + 0x238) / 1000.0;
  if (0.0 < fVar1) {
    if (fVar1 < ((float)*(int *)(in_EAX + 0x23c) / 1000.0) * param_1 * -1.0 + (float)fVar3) {
      FUN_00401000((fVar1 + 0.0005) * 1000.0,extraout_ECX,1,0);
      uVar2 = FUN_00b31c00();
      (**(code **)(*(int *)(in_EAX + 0x54) + 0x1c))(uVar2);
      return;
    }
    FUN_009cc710(in_EAX);
  }
  return;
}

