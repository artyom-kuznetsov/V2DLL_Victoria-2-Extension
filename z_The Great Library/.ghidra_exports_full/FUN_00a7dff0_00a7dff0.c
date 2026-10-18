// FUN_00a7dff0 @ 00a7dff0 body=[[00a7dff0, 00a7dffc] [00a7e000, 00a7e02e]]


void FUN_00a7dff0(undefined8 *param_1)

{
  undefined8 *in_EAX;
  undefined8 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = (undefined8 *)((int)param_1 + 0x1c)) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    *(undefined4 *)(in_EAX + 3) = *(undefined4 *)(param_1 + 3);
    in_EAX = (undefined8 *)((int)in_EAX + 0x1c);
  }
  return;
}

