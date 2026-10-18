// FUN_00977100 @ 00977100 body=[[00977100, 0097717b]]


void FUN_00977100(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 in_EAX;
  uint *unaff_ESI;
  longlong lVar1;
  
  switch(in_EAX) {
  case 0:
    *unaff_ESI = param_1 + param_3;
    unaff_ESI[1] = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
    return;
  case 1:
    *unaff_ESI = param_1 - param_3;
    unaff_ESI[1] = (param_2 - param_4) - (uint)(param_1 < param_3);
    return;
  case 2:
    lVar1 = __allmul(param_1,param_2,param_3,param_4);
    *(longlong *)unaff_ESI = lVar1 >> 0xf;
    return;
  case 3:
    *unaff_ESI = param_3;
    unaff_ESI[1] = param_4;
    return;
  default:
    *unaff_ESI = param_1;
    unaff_ESI[1] = param_2;
    return;
  }
}

