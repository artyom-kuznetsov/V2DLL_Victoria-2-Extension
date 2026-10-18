// FUN_0098f500 @ 0098f500 body=[[0098f500, 0098f58b]]


int * FUN_0098f500(int *param_1,int *param_2,int *param_3)

{
  int *in_EAX;
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  while ((in_EAX != in_ECX && (param_1 != param_2))) {
    iVar1 = *param_1;
    if (*(float *)(*(int *)(iVar1 + 0x13c) + 0x98) <= *(float *)(*(int *)(*in_EAX + 0x13c) + 0x98))
    {
      iVar1 = *in_EAX;
      in_EAX = in_EAX + 1;
    }
    else {
      param_1 = param_1 + 1;
    }
    *param_3 = iVar1;
    param_3 = param_3 + 1;
  }
  iVar2 = (int)in_ECX - (int)in_EAX >> 2;
  FID_conflict__memcpy(param_3,in_EAX,iVar2 * 4);
  iVar1 = (int)param_2 - (int)param_1 >> 2;
  FID_conflict__memcpy(param_3 + iVar2,param_1,iVar1 * 4);
  return param_3 + iVar2 + iVar1;
}

