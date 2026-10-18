// FUN_00476090 @ 00476090 body=[[00476090, 004760c1]]


void FUN_00476090(undefined8 *param_1)

{
  undefined8 *in_EAX;
  undefined8 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 2) {
    if (in_EAX != (undefined8 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
    }
    in_EAX = in_EAX + 2;
  }
  return;
}

