// FUN_00ad4070 @ 00ad4070 body=[[00ad4070, 00ad40fc]]


void FUN_00ad4070(int param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  void *_Dst;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x10;
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x10) + 4 + iVar4);
  uVar3 = 1;
  if (1 < uVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x10) + iVar4) + uVar3 * 4);
      if (iVar2 != 0) {
        FUN_00ad7d30();
        (*(code *)PTR__free_00f01b10)(iVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x10) + iVar4);
  if (iVar2 != 0) {
    (*(code *)PTR__free_00f01b10)(iVar2);
  }
  if ((1 < *(uint *)(in_ECX + 0x14)) &&
     (iVar2 = (*(uint *)(in_ECX + 0x14) - param_1) + -1, iVar2 != 0)) {
    _Dst = (void *)(*(int *)(in_ECX + 0x10) + iVar4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 0x10),iVar2 * 0x10);
  }
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + -1;
  return;
}

