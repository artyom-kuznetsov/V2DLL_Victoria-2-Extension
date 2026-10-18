// FUN_004730d0 @ 004730d0 body=[[004730d0, 00473102]]


void FUN_004730d0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *in_EAX;
  
  if (((int)param_4 <= (int)param_2) && (((int)param_4 < (int)param_2 || (param_3 < param_1)))) {
    *in_EAX = param_1;
    in_EAX[1] = param_2;
    return;
  }
  *in_EAX = param_3;
  in_EAX[1] = param_4;
  return;
}

