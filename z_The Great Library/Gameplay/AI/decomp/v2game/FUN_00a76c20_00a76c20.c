// FUN_00a76c20 @ 00a76c20 body=[[00a76c20, 00a76c2c] [00a76c30, 00a76c6c]]


void FUN_00a76c20(undefined8 *param_1)

{
  undefined8 *in_EAX;
  undefined8 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = (undefined8 *)((int)param_1 + 0x24)) {
    if (in_EAX != (undefined8 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
      in_EAX[2] = param_1[2];
      in_EAX[3] = param_1[3];
      *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(param_1 + 4);
    }
    in_EAX = (undefined8 *)((int)in_EAX + 0x24);
  }
  return;
}

