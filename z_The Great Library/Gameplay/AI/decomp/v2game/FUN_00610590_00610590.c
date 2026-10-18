// FUN_00610590 @ 00610590 body=[[00610590, 0061059c] [006105a0, 006105cc]]


void FUN_00610590(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 6) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[2] = param_1[2];
      in_EAX[3] = param_1[3];
      in_EAX[4] = param_1[4];
      in_EAX[5] = param_1[5];
    }
    in_EAX = in_EAX + 6;
  }
  return;
}

