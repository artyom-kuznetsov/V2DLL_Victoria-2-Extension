// FUN_0078af70 @ 0078af70 body=[[0078af70, 0078b135]]


void FUN_0078af70(float param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(char *)(*(int *)(in_ECX + 0x2c) + 0x4f) == '\0') {
    iVar1 = *(int *)(in_ECX + 0x2c);
    uVar6 = 0;
    uVar5 = 1;
    FUN_00401000(((float)*(int *)(iVar1 + 0x234) / 1000.0 + 0.0005) * 1000.0);
    uVar3 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar3,uVar5,uVar6);
    return;
  }
  fVar4 = (float10)(**(code **)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x54) + 0x10))();
  iVar1 = *(int *)(in_ECX + 0x2c);
  fVar2 = (float)*(int *)(iVar1 + 0x238) / 1000.0;
  if (0.0 < fVar2) {
    if (fVar2 < ((float)*(int *)(iVar1 + 0x23c) / 1000.0) * param_1 * -1.0 + (float)fVar4) {
      FUN_00401000((fVar2 + 0.0005) * 1000.0,extraout_ECX,1,0);
      uVar3 = FUN_00b31c00();
      (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar3);
      FUN_0078b140();
      return;
    }
    FUN_009cc710(iVar1);
  }
  FUN_0078b140();
  return;
}

