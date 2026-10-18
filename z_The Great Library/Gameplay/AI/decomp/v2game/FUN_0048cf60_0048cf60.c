// FUN_0048cf60 @ 0048cf60 body=[[0048cf60, 0048cf6c] [0048cf70, 0048cf90]]


void FUN_0048cf60(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 4) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
      in_EAX[2] = param_1[2];
    }
    in_EAX = in_EAX + 4;
  }
  return;
}

