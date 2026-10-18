// FUN_006a32b0 @ 006a32b0 body=[[006a32b0, 006a3332]]


undefined4 * FUN_006a32b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *in_EAX;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  while ((in_ECX != param_1 && (param_2 != param_3))) {
    cVar2 = FUN_00698910(*param_2,*in_ECX);
    if (cVar2 == '\0') {
      *in_EAX = *in_ECX;
      in_ECX = in_ECX + 1;
    }
    else {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *in_EAX = uVar1;
    }
    in_EAX = in_EAX + 1;
  }
  iVar4 = (int)param_1 - (int)in_ECX >> 2;
  FID_conflict__memcpy(in_EAX,in_ECX,iVar4 * 4);
  iVar3 = (int)param_3 - (int)param_2 >> 2;
  FID_conflict__memcpy(in_EAX + iVar4,param_2,iVar3 * 4);
  return in_EAX + iVar4 + iVar3;
}

