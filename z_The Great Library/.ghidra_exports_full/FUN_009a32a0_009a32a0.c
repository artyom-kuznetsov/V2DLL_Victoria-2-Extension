// FUN_009a32a0 @ 009a32a0 body=[[009a32a0, 009a332b]]


void FUN_009a32a0(void)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  *(undefined1 *)(in_ECX + 0x239) = 1;
  FUN_0099bed0();
  FUN_0099bf20();
  *(undefined1 *)(in_ECX + 0x9c) = 1;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  piVar3 = *(int **)(in_ECX + 0x5c);
  iVar2 = *(int *)(in_ECX + 0x60) - (int)piVar3 >> 2;
  if (iVar2 != 0) {
    piVar1 = piVar3 + iVar2;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 0x14))(1);
      }
    }
  }
  _Dst = *(void **)(in_ECX + 0x5c);
  if (_Dst != *(void **)(in_ECX + 0x60)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x60),0);
    *(void **)(in_ECX + 0x60) = _Dst;
  }
  *(undefined1 *)(in_ECX + 0x239) = 0;
  return;
}

