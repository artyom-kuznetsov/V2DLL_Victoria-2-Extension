// FUN_00849d60 @ 00849d60 body=[[00849d60, 00849d96]]


void FUN_00849d60(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  float in_XMM0_Da;
  
  in_EAX[1] = 4;
  in_EAX[2] = in_ECX;
  *in_EAX = CAIValueRequest::vftable;
  if (in_XMM0_Da < 0.0) {
    in_XMM0_Da = 0.0;
  }
  in_EAX[3] = in_XMM0_Da;
  in_EAX[4] = param_1;
  *in_EAX = CAIArmyRequest::vftable;
  *(undefined1 *)(in_EAX + 5) = 0;
  return;
}

