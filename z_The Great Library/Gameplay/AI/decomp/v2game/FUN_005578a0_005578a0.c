// FUN_005578a0 @ 005578a0 body=[[005578a0, 005578ac] [005578b0, 005578de]]


void FUN_005578a0(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 6) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX[4] = param_1[4];
    in_EAX[5] = param_1[5];
    in_EAX = in_EAX + 6;
  }
  return;
}

