// FUN_0045c400 @ 0045c400 body=[[0045c400, 0045c40c] [0045c410, 0045c438]]


void FUN_0045c400(undefined8 *param_1)

{
  undefined8 *in_EAX;
  undefined8 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = (undefined8 *)((int)param_1 + 0x14)) {
    if (in_EAX != (undefined8 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
      *(undefined4 *)(in_EAX + 2) = *(undefined4 *)(param_1 + 2);
    }
    in_EAX = (undefined8 *)((int)in_EAX + 0x14);
  }
  return;
}

