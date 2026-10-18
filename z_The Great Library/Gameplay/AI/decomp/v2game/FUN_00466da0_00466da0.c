// FUN_00466da0 @ 00466da0 body=[[00466da0, 00466dc7]]


void FUN_00466da0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
    }
    in_EAX = in_EAX + 1;
  }
  return;
}

