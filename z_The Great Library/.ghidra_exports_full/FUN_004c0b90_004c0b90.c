// FUN_004c0b90 @ 004c0b90 body=[[004c0b90, 004c0b9c] [004c0ba0, 004c0bbe]]


void FUN_004c0b90(undefined8 *param_1)

{
  undefined8 *in_EAX;
  undefined8 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = (undefined8 *)((int)param_1 + 0xc)) {
    if (in_EAX != (undefined8 *)0x0) {
      *in_EAX = *param_1;
      *(undefined4 *)(in_EAX + 1) = *(undefined4 *)(param_1 + 1);
    }
    in_EAX = (undefined8 *)((int)in_EAX + 0xc);
  }
  return;
}

