// FUN_00b16130 @ 00b16130 body=[[00b16130, 00b1619c] [00b161a0, 00b161b3]]


void FUN_00b16130(int param_1)

{
  void *_Dst;
  int iVar1;
  int *in_ECX;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (in_ECX[1] != 0) {
    do {
      piVar2 = *(int **)(*in_ECX + uVar3 * 4);
      iVar1 = (**(code **)(*piVar2 + 8))();
      if (iVar1 == param_1) {
        (**(code **)*piVar2)(1);
        if ((1 < (uint)in_ECX[1]) && (iVar1 = (in_ECX[1] - uVar3) + -1, iVar1 != 0)) {
          _Dst = (void *)(*in_ECX + uVar3 * 4);
          FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar1 * 4);
        }
        in_ECX[1] = in_ECX[1] + -1;
      }
      else {
        uVar3 = uVar3 + 1;
      }
    } while (uVar3 < (uint)in_ECX[1]);
  }
  iVar1 = in_ECX[1];
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)*in_ECX;
    do {
      uVar3 = uVar3 | *(uint *)(*piVar2 + 4);
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  in_ECX[4] = uVar3;
  return;
}

