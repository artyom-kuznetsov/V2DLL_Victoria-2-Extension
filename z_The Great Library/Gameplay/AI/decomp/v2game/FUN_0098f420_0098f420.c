// FUN_0098f420 @ 0098f420 body=[[0098f420, 0098f493]]


void FUN_0098f420(int param_1,void *param_2,int param_3,undefined4 param_4)

{
  void *pvVar1;
  void *in_EAX;
  int unaff_EDI;
  
  for (; unaff_EDI * 2 <= param_3; param_3 = param_3 + unaff_EDI * -2) {
    pvVar1 = (void *)((int)in_EAX + unaff_EDI * 4);
    in_EAX = (void *)((int)pvVar1 + unaff_EDI * 4);
    param_2 = (void *)FUN_0098f500(pvVar1,in_EAX,param_2,param_4);
  }
  if (unaff_EDI < param_3) {
    FUN_0098f500((void *)((int)in_EAX + unaff_EDI * 4),param_1,param_2,param_4);
    return;
  }
  FID_conflict__memcpy(param_2,in_EAX,(param_1 - (int)in_EAX >> 2) * 4);
  return;
}

