// FUN_00855000 @ 00855000 body=[[00855000, 0085500c] [00855010, 00855030]]


void FUN_00855000(undefined4 *param_1)

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

