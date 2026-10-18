// FUN_00b0d330 @ 00b0d330 body=[[00b0d330, 00b0d3ff]]


void FUN_00b0d330(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined2 *in_ECX;
  
  fVar2 = param_2;
  fVar1 = (float)((int)ROUND((1.0 / (param_3 - param_2)) * 65535.0) & 0xffff);
  param_2._0_2_ = (undefined2)(int)ROUND((*param_1 - param_2) * fVar1);
  *in_ECX = param_2._0_2_;
  param_2._0_2_ = (undefined2)(int)ROUND((param_1[1] - fVar2) * fVar1);
  in_ECX[1] = param_2._0_2_;
  param_2._0_2_ = (undefined2)(int)ROUND(fVar1 * (param_1[2] - fVar2));
  in_ECX[2] = param_2._0_2_;
  return;
}

