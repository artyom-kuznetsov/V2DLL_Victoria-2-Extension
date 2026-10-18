// FUN_00804e20 @ 00804e20 body=[[00804e20, 00804e2c] [00804e30, 00804e68]]


void FUN_00804e20(undefined8 *param_1)

{
  undefined8 *in_EAX;
  undefined8 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = (undefined8 *)((int)param_1 + 0x24)) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(param_1 + 4);
    in_EAX = (undefined8 *)((int)in_EAX + 0x24);
  }
  return;
}

