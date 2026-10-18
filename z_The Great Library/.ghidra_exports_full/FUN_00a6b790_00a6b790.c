// FUN_00a6b790 @ 00a6b790 body=[[00a6b790, 00a6b7cb]]


void FUN_00a6b790(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  for (; in_ECX != param_1; in_ECX = in_ECX + 9) {
    *in_EAX = *in_ECX;
    FUN_00408ed0(in_ECX + 1,0,0xffffffff);
    in_EAX[8] = in_ECX[8];
    in_EAX = in_EAX + 9;
  }
  return;
}

