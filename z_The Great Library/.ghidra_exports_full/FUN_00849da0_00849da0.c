// FUN_00849da0 @ 00849da0 body=[[00849da0, 00849dd8]]


void FUN_00849da0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  float in_XMM0_Da;
  
  in_EAX[1] = 5;
  in_EAX[2] = in_ECX;
  *in_EAX = CAIValueRequest::vftable;
  if (in_XMM0_Da < 0.0) {
    in_XMM0_Da = 0.0;
  }
  in_EAX[3] = in_XMM0_Da;
  in_EAX[4] = param_2;
  *in_EAX = CAIFleetRequest::vftable;
  in_EAX[5] = param_1;
  return;
}

