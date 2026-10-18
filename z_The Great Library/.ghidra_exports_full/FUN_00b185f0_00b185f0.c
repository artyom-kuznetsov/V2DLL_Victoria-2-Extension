// FUN_00b185f0 @ 00b185f0 body=[[00b185f0, 00b18679]]


void FUN_00b185f0(float *param_1,float *param_2,float *param_3)

{
  param_1[3] = ((param_3[3] * param_2[3] - *param_2 * *param_3) - param_3[1] * param_2[1]) -
               param_3[2] * param_2[2];
  *param_1 = (param_3[2] * param_2[1] + *param_3 * param_2[3] + *param_2 * param_3[3]) -
             param_3[1] * param_2[2];
  param_1[1] = (param_2[2] * *param_3 + param_3[1] * param_2[3] + param_2[1] * param_3[3]) -
               param_3[2] * *param_2;
  param_1[2] = (param_3[1] * *param_2 + param_3[2] * param_2[3] + param_2[2] * param_3[3]) -
               param_2[1] * *param_3;
  return;
}

