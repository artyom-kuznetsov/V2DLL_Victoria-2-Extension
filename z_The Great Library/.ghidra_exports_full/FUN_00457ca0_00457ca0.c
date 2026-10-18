// FUN_00457ca0 @ 00457ca0 body=[[00457ca0, 00457d03]]


void FUN_00457ca0(void)

{
  void *_Src;
  undefined4 *puVar1;
  void *_Dst;
  int unaff_ESI;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xc) - *(int *)(unaff_ESI + 8) & 0xfffffffcU)) {
    do {
      puVar1 = *(undefined4 **)(iVar2 * 4 + *(int *)(unaff_ESI + 8));
      if (*(char *)(puVar1 + 0x21) != '\0') {
        (**(code **)*puVar1)(1);
        _Dst = (void *)(*(int *)(unaff_ESI + 8) + iVar2 * 4);
        _Src = (void *)((int)_Dst + 4);
        FID_conflict__memcpy(_Dst,_Src,(*(int *)(unaff_ESI + 0xc) - (int)_Src >> 2) * 4);
        *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + -4;
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_ESI + 0xc) - *(int *)(unaff_ESI + 8) >> 2);
  }
  return;
}

