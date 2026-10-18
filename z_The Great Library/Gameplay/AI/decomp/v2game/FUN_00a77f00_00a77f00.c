// FUN_00a77f00 @ 00a77f00 body=[[00a77f00, 00a78095]]


void FUN_00a77f00(int param_1)

{
  undefined4 uVar1;
  int in_EAX;
  uint uVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  float local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float fStack_c;
  undefined4 local_8;
  
  _memset(&local_44,0,0x34);
  FUN_00ab047b();
  uVar2 = FUN_009b7610();
  dVar5 = 4.656612873077393e-10;
  dVar4 = 0.30000001192092896;
  fVar6 = ((float)(uVar2 & 0x7fffffff) * 4.656613e-10 - 0.3) * 2.2;
  uVar2 = FUN_009b7610();
  fStack_c = (float)(((double)(float)((double)(uVar2 & 0x7fffffff) * dVar5) - dVar4) * dVar4);
  local_10 = fVar6;
  uVar2 = FUN_009b7610();
  uVar1 = DAT_00f092fc;
  local_2c = (float)(((double)(float)((double)(uVar2 & 0x7fffffff) * dVar5) - 0.5) * dVar4);
  local_34 = CONCAT44(fStack_c,local_10);
  local_8 = 0;
  local_10 = 0.0;
  fStack_c = 0.0;
  local_44 = 0;
  local_3c = 0;
  local_1c = DAT_00f092fc;
  if (-1 < in_EAX) {
    puVar3 = (undefined8 *)(in_EAX * 0x34 + *(int *)(param_1 + 400));
    *puVar3 = 0;
    *(undefined8 *)((int)puVar3 + 0x1c) = local_28;
    puVar3[2] = local_34;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(float *)(puVar3 + 3) = local_2c;
    *(undefined4 *)((int)puVar3 + 0x2c) = local_18;
    *(undefined4 *)((int)puVar3 + 0xc) = local_38;
    *(undefined4 *)((int)puVar3 + 0x24) = local_20;
    *(undefined4 *)(puVar3 + 5) = uVar1;
    *(undefined4 *)(puVar3 + 6) = local_14;
    return;
  }
  FUN_00a44850(param_1 + 400);
  return;
}

