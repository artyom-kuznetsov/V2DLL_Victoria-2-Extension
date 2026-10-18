// FUN_00ae3610 @ 00ae3610 body=[[00ae3610, 00ae368b]]


void FUN_00ae3610(int param_1,char param_2)

{
  void *_Dst;
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + param_1 * 4);
  if (*(int *)(iVar1 + 0x38) != 0) {
    FUN_00b0b060(*(undefined4 *)(iVar1 + 0x3c));
  }
  if (param_2 == '\x01') {
    FUN_00b0a8f0(0);
    iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + param_1 * 4);
    if (iVar1 != 0) {
      FUN_00b0b200();
      (*(code *)PTR__free_00f01b10)(iVar1);
    }
  }
  if ((1 < *(uint *)(in_ECX + 0x14)) &&
     (iVar1 = (*(uint *)(in_ECX + 0x14) - param_1) + -1, iVar1 != 0)) {
    _Dst = (void *)(*(int *)(in_ECX + 0x10) + param_1 * 4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar1 * 4);
  }
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + -1;
  return;
}

