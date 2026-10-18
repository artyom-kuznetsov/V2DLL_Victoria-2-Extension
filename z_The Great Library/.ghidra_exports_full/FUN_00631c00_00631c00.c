// FUN_00631c00 @ 00631c00 body=[[00631c00, 00631c2d]]


void FUN_00631c00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
    }
    in_EAX = in_EAX + 2;
  }
  return;
}

