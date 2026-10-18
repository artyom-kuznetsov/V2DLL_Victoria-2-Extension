// FUN_006105d0 @ 006105d0 body=[[006105d0, 006105dc] [006105e0, 00610600]]


void FUN_006105d0(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 4) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[2] = param_1[2];
      in_EAX[3] = param_1[3];
    }
    in_EAX = in_EAX + 4;
  }
  return;
}

