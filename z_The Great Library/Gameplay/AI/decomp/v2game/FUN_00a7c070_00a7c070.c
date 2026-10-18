// FUN_00a7c070 @ 00a7c070 body=[[00a7c070, 00a7c106]]


void FUN_00a7c070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  int iVar2;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x6c))();
  iVar2 = in_ECX[0x53];
  fVar1 = (float)in_ECX[0x57];
  *(float *)(iVar2 + 0x70) = fVar1;
  if ((((*(float *)(iVar2 + 100) <= 0.999) || (*(float *)(iVar2 + 0x68) <= 0.999)) ||
      (*(float *)(iVar2 + 0x6c) <= 0.999)) || (fVar1 <= 0.999)) {
    *(undefined1 *)(iVar2 + 0x74) = 0;
  }
  else {
    *(undefined1 *)(iVar2 + 0x74) = 1;
  }
  (**(code **)(*(int *)in_ECX[0x53] + 0x20))(param_1,param_2,param_3,0,param_5,param_6);
  return;
}

