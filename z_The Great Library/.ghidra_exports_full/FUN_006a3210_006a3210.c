// FUN_006a3210 @ 006a3210 body=[[006a3210, 006a32a9]]


void FUN_006a3210(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  void *pvVar1;
  void *in_EAX;
  void *in_ECX;
  
  if (param_2 * 2 <= param_3) {
    do {
      pvVar1 = (void *)((int)in_ECX + param_2 * 4);
      in_ECX = (void *)((int)pvVar1 + param_2 * 4);
      in_EAX = (void *)FUN_006a32b0(pvVar1,pvVar1,in_ECX,param_4,param_5);
      param_3 = param_3 + param_2 * -2;
    } while (param_2 * 2 <= param_3);
  }
  if (param_3 <= param_2) {
    FID_conflict__memcpy(in_EAX,in_ECX,(param_1 - (int)in_ECX >> 2) * 4);
    return;
  }
  pvVar1 = (void *)((int)in_ECX + param_2 * 4);
  FUN_006a32b0(pvVar1,pvVar1,param_1,param_4,param_5);
  return;
}

