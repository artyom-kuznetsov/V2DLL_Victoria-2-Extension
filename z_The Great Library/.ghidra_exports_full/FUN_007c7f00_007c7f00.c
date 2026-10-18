// FUN_007c7f00 @ 007c7f00 body=[[007c7f00, 007c7f28]]


void FUN_007c7f00(uint param_1,uint param_2)

{
  uint *in_EAX;
  uint *in_ECX;
  uint *unaff_EDI;
  bool bVar1;
  
  for (; in_ECX != unaff_EDI; in_ECX = in_ECX + 2) {
    bVar1 = CARRY4(param_1,*in_ECX);
    param_1 = param_1 + *in_ECX;
    param_2 = param_2 + in_ECX[1] + (uint)bVar1;
  }
  in_EAX[1] = param_2;
  *in_EAX = param_1;
  return;
}

