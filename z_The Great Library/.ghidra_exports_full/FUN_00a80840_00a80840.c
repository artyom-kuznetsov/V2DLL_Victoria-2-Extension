// FUN_00a80840 @ 00a80840 body=[[00a80840, 00a8086f]]


void FUN_00a80840(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 3) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
      in_EAX[2] = param_1[2];
    }
    in_EAX = in_EAX + 3;
  }
  return;
}

