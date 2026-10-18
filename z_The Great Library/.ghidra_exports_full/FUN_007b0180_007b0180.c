// FUN_007b0180 @ 007b0180 body=[[007b0180, 007b01bd]]


void FUN_007b0180(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  for (; in_ECX != param_1; in_ECX = in_ECX + 9) {
    *in_EAX = *in_ECX;
    FUN_009beeb0(in_ECX + 1);
    FUN_009beeb0(in_ECX + 5);
    in_EAX = in_EAX + 9;
  }
  return;
}

