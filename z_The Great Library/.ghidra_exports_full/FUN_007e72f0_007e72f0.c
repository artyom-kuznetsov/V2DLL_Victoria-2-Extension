// FUN_007e72f0 @ 007e72f0 body=[[007e72f0, 007e72fc] [007e7300, 007e731a]]


void FUN_007e72f0(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 2) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
    }
    in_EAX = in_EAX + 2;
  }
  return;
}

