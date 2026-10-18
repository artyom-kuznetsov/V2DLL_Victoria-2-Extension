// FUN_005e5ce0 @ 005e5ce0 body=[[005e5ce0, 005e5d21]]


void FUN_005e5ce0(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  for (; in_ECX != param_1; in_ECX = in_ECX + 10) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    FUN_00408ed0(in_ECX + 3,0,0xffffffff);
    in_EAX = in_EAX + 10;
  }
  return;
}

