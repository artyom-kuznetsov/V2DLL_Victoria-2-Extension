// FUN_00822300 @ 00822300 body=[[00822300, 00822391]]


void FUN_00822300(void)

{
  void *_Dst;
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 uVar3;
  
  _Dst = *(void **)(in_EAX + 0x88);
  if (_Dst != *(void **)(in_EAX + 0x8c)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_EAX + 0x8c),0);
    *(void **)(in_EAX + 0x8c) = _Dst;
  }
  iVar1 = *(int *)(DAT_012587e4 + 4);
  if (0 < *(int *)(*(int *)(iVar1 + *(int *)(in_EAX + 0x38) * 4) + 0xdd4)) {
    uVar2 = *(undefined4 *)(iVar1 + *(int *)(in_EAX + 0x38) * 4);
    uVar3 = FUN_00539190(*(undefined4 *)(iVar1 + *(int *)(in_EAX + 0x38) * 4));
    FUN_00504c10(uVar2,in_EAX + 0x88,uVar3);
  }
  return;
}

