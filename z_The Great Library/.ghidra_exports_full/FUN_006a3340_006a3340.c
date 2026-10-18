// FUN_006a3340 @ 006a3340 body=[[006a3340, 006a33ce]]


undefined4 * FUN_006a3340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int iVar2;
  
  while( true ) {
    if (param_1 == in_ECX) {
      iVar2 = (int)in_EAX - (int)param_2 >> 2;
      FID_conflict__memcpy(param_3 + -iVar2,param_2,iVar2 * 4);
      return param_3 + -iVar2;
    }
    if (param_2 == in_EAX) break;
    cVar1 = FUN_00698910(in_EAX[-1],in_ECX[-1]);
    param_3 = param_3 + -1;
    if (cVar1 == '\0') {
      *param_3 = in_EAX[-1];
      in_EAX = in_EAX + -1;
    }
    else {
      *param_3 = in_ECX[-1];
      in_ECX = in_ECX + -1;
    }
  }
  iVar2 = (int)in_ECX - (int)param_1 >> 2;
  FID_conflict__memcpy(param_3 + -iVar2,param_1,iVar2 * 4);
  return param_3 + -iVar2;
}

