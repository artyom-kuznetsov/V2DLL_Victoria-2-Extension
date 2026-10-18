// FUN_00a83160 @ 00a83160 body=[[00a83160, 00a831c9]]


void FUN_00a83160(void)

{
  undefined4 *puVar1;
  void *_Dst;
  int unaff_ESI;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0x70) - *(int *)(unaff_ESI + 0x6c) & 0xfffffffcU)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(unaff_ESI + 0x6c) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_ESI + 0x70) - *(int *)(unaff_ESI + 0x6c) >> 2);
  }
  _Dst = *(void **)(unaff_ESI + 0x6c);
  if (_Dst != *(void **)(unaff_ESI + 0x70)) {
    FID_conflict__memcpy(_Dst,*(void **)(unaff_ESI + 0x70),0);
    *(void **)(unaff_ESI + 0x70) = _Dst;
    *(undefined2 *)(unaff_ESI + 0x68) = 0;
    return;
  }
  *(undefined2 *)(unaff_ESI + 0x68) = 0;
  return;
}

