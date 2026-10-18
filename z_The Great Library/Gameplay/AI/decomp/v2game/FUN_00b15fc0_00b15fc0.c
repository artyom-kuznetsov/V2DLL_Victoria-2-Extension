// FUN_00b15fc0 @ 00b15fc0 body=[[00b15fc0, 00b16022]]


void FUN_00b15fc0(int param_1)

{
  void *_Dst;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  
  puVar1 = *(undefined4 **)(*in_ECX + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if ((1 < (uint)in_ECX[1]) && (iVar2 = (in_ECX[1] - param_1) + -1, iVar2 != 0)) {
    _Dst = (void *)(*in_ECX + param_1 * 4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar2 * 4);
  }
  in_ECX[1] = in_ECX[1] + -1;
  iVar2 = in_ECX[1];
  uVar3 = 0;
  if (iVar2 != 0) {
    piVar4 = (int *)*in_ECX;
    do {
      uVar3 = uVar3 | *(uint *)(*piVar4 + 4);
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  in_ECX[4] = uVar3;
  return;
}

