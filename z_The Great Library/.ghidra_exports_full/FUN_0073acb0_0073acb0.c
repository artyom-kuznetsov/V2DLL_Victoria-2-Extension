// FUN_0073acb0 @ 0073acb0 body=[[0073acb0, 0073aceb]]


void FUN_0073acb0(undefined8 *param_1)

{
  undefined8 *in_EAX;
  undefined8 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 3) {
    if (in_EAX != (undefined8 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
      in_EAX[2] = param_1[2];
    }
    in_EAX = in_EAX + 3;
  }
  return;
}

