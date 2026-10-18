// FUN_00adc9c0 @ 00adc9c0 body=[[00adc9c0, 00adca31]]


void FUN_00adc9c0(float param_1,float param_2,float param_3)

{
  float fVar1;
  undefined2 *in_ECX;
  
  fVar1 = param_2;
  param_2._0_2_ = (short)(int)ROUND(1.0 / (param_3 - param_2));
  param_2._0_2_ = (short)(int)ROUND((float)(ushort)-param_2._0_2_ * (param_1 - fVar1));
  *in_ECX = param_2._0_2_;
  return;
}

