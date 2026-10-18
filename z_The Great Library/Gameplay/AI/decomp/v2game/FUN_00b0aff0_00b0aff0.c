// FUN_00b0aff0 @ 00b0aff0 body=[[00b0aff0, 00b0b05a]]


void FUN_00b0aff0(int param_1)

{
  void *_Dst;
  int *piVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (in_ECX[1] != 0) {
    piVar1 = (int *)*in_ECX;
    while (param_1 != *piVar1) {
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 1;
      if ((uint)in_ECX[1] <= uVar3) {
        return;
      }
    }
    if (param_1 != 0) {
      FUN_00b13650();
      (*(code *)PTR__free_00f01b10)(param_1);
    }
    if ((1 < (uint)in_ECX[1]) && (iVar2 = (in_ECX[1] - uVar3) + -1, iVar2 != 0)) {
      _Dst = (void *)(*in_ECX + uVar3 * 4);
      FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar2 * 4);
    }
    in_ECX[1] = in_ECX[1] + -1;
  }
  return;
}

