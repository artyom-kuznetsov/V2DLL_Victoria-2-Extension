// FUN_007c7a80 @ 007c7a80 body=[[007c7a80, 007c7c3b]]


void FUN_007c7a80(float param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(in_ECX + 0x18c);
  if (*(char *)(iVar1 + 0x4f) == '\0') {
    uVar6 = 0;
    uVar5 = 1;
    FUN_00401000(((float)*(int *)(iVar1 + 0x234) / 1000.0 + 0.0005) * 1000.0);
    uVar3 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar3,uVar5,uVar6);
    return;
  }
  fVar4 = (float10)(**(code **)(*(int *)(iVar1 + 0x54) + 0x10))();
  iVar1 = *(int *)(in_ECX + 0x18c);
  fVar2 = (float)*(int *)(iVar1 + 0x238) / 1000.0;
  if (0.0 < fVar2) {
    if (((float)*(int *)(iVar1 + 0x23c) / 1000.0) * param_1 * -1.0 + (float)fVar4 <= fVar2) {
      FUN_009cc710(iVar1);
    }
    else {
      FUN_00401000((fVar2 + 0.0005) * 1000.0,extraout_ECX,1,0);
      uVar3 = FUN_00b31c00();
      (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar3);
    }
  }
  *(undefined1 *)(in_ECX + 0x16c) = 1;
  FUN_007c6d40(in_ECX);
  return;
}

