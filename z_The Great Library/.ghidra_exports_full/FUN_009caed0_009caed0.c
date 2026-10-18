// FUN_009caed0 @ 009caed0 body=[[009caed0, 009cafe4]]


float * FUN_009caed0(float *param_1,float param_2)

{
  float fVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined1 local_18 [16];
  float local_8;
  
  piVar2 = (int *)(**(code **)(*(int *)(in_EAX + 0x54) + 0x18))(local_18);
  fVar1 = (float)*piVar2 / 1000.0;
  iVar3 = (**(code **)(*(int *)(in_EAX + 0x54) + 0x18))(local_18);
  fVar4 = (float)*(int *)(iVar3 + 4) / 1000.0;
  local_8 = fVar4;
  if (*(short *)(in_EAX + 0x244) == 0) {
    FUN_009cae00();
    *param_1 = *(float *)(in_EAX + 0xa4);
    param_1[1] = fVar4 * ((param_2 - fVar1) / (local_8 - fVar1));
    return param_1;
  }
  FUN_009cad90();
  param_1[1] = *(float *)(in_EAX + 0xa8);
  *param_1 = fVar4 * ((param_2 - fVar1) / (local_8 - fVar1));
  return param_1;
}

