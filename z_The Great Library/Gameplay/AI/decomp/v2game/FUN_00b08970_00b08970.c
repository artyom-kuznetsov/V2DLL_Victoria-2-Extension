// FUN_00b08970 @ 00b08970 body=[[00b08970, 00b089db]]


void FUN_00b08970(int param_1)

{
  void *_Dst;
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (in_ECX[1] != 0) {
    do {
      iVar1 = *(int *)(*in_ECX + uVar2 * 4);
      if (*(int *)(iVar1 + 0x8c) == param_1) {
        if (iVar1 != 0) {
          FUN_00b08610();
          (*(code *)PTR__free_00f01b10)(iVar1);
        }
        if ((1 < (uint)in_ECX[1]) && (iVar1 = (in_ECX[1] - uVar2) + -1, iVar1 != 0)) {
          _Dst = (void *)(*in_ECX + uVar2 * 4);
          FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar1 * 4);
        }
        in_ECX[1] = in_ECX[1] + -1;
      }
      else {
        uVar2 = uVar2 + 1;
      }
    } while (uVar2 < (uint)in_ECX[1]);
  }
  return;
}

