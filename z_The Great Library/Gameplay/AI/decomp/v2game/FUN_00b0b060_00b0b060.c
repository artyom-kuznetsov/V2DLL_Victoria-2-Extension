// FUN_00b0b060 @ 00b0b060 body=[[00b0b060, 00b0b0b6]]


void FUN_00b0b060(int param_1)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar3 = *(int **)(in_ECX + 0x10);
    while (*(int *)(*piVar3 + 0x3c) != param_1) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      if (uVar1 <= uVar2) {
        return;
      }
    }
    if ((1 < uVar1) && (iVar4 = (uVar1 - uVar2) + -1, iVar4 != 0)) {
      _Dst = (void *)(*(int *)(in_ECX + 0x10) + uVar2 * 4);
      FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar4 * 4);
    }
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + -1;
  }
  return;
}

