// FUN_00557860 @ 00557860 body=[[00557860, 0055786c] [00557870, 00557896]]


void FUN_00557860(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 4) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
      in_EAX[2] = param_1[2];
      in_EAX[3] = param_1[3];
    }
    in_EAX = in_EAX + 4;
  }
  return;
}

