// FUN_0086c880 @ 0086c880 body=[[0086c880, 0086c91d]]


void FUN_0086c880(void *param_1,size_t param_2)

{
  undefined4 in_EAX;
  void *_Dst;
  void *pvVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = in_EAX;
  if ((param_2 != 0) && (((byte)in_EAX & 6) != 6)) {
    _Dst = (void *)FUN_00408fd0(param_2);
    FID_conflict__memcpy(_Dst,param_1,param_2);
    *(void **)(unaff_ESI + 0x3c) = (void *)((int)_Dst + param_2);
    if ((*(byte *)(unaff_ESI + 0x40) & 4) == 0) {
      **(undefined4 **)(unaff_ESI + 0x10) = _Dst;
      **(undefined4 **)(unaff_ESI + 0x20) = _Dst;
      **(size_t **)(unaff_ESI + 0x30) = param_2;
    }
    if ((*(uint *)(unaff_ESI + 0x40) & 2) == 0) {
      pvVar1 = (void *)((int)_Dst + param_2);
      if ((*(uint *)(unaff_ESI + 0x40) & 0x10) == 0) {
        pvVar1 = _Dst;
      }
      **(undefined4 **)(unaff_ESI + 0x14) = _Dst;
      **(undefined4 **)(unaff_ESI + 0x24) = pvVar1;
      **(int **)(unaff_ESI + 0x34) = (int)_Dst + (param_2 - (int)pvVar1);
      if (**(int **)(unaff_ESI + 0x20) == 0) {
        **(undefined4 **)(unaff_ESI + 0x10) = _Dst;
        **(undefined4 **)(unaff_ESI + 0x20) = 0;
        **(undefined4 **)(unaff_ESI + 0x30) = _Dst;
      }
    }
    *(uint *)(unaff_ESI + 0x40) = *(uint *)(unaff_ESI + 0x40) | 1;
  }
  return;
}

