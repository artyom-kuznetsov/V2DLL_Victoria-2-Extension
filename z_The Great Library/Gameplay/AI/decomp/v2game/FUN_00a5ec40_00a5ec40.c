// FUN_00a5ec40 @ 00a5ec40 body=[[00a5ec40, 00a5ecb0]]


float * FUN_00a5ec40(float *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = FUN_00a5eef0();
  param_1[1] = (float)*(int *)(iVar1 + 4) - *(float *)(in_ECX + 200);
  piVar2 = (int *)FUN_00a5eef0();
  *param_1 = (float)*piVar2 + *(float *)(in_ECX + 0xc4);
  return param_1;
}

