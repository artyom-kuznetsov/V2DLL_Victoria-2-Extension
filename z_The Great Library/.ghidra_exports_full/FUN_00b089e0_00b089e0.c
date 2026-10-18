// FUN_00b089e0 @ 00b089e0 body=[[00b089e0, 00b08a32]]


void FUN_00b089e0(int param_1)

{
  void *_Dst;
  int iVar1;
  int *in_ECX;
  
  iVar1 = *(int *)(*in_ECX + param_1 * 4);
  if (iVar1 != 0) {
    FUN_00b08610();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  if ((1 < (uint)in_ECX[1]) && (iVar1 = (in_ECX[1] - param_1) + -1, iVar1 != 0)) {
    _Dst = (void *)(*in_ECX + param_1 * 4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar1 * 4);
  }
  in_ECX[1] = in_ECX[1] + -1;
  return;
}

