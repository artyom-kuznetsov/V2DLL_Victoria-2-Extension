// FUN_00401d80 @ 00401d80 body=[[00401d80, 00401dfd]]


void FUN_00401d80(int *param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  int iVar3;
  
  iVar1 = *(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x20) >> 2;
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)(unaff_ESI + 0x20);
    while ((int *)*piVar2 != param_1) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
      if (iVar1 <= iVar3) {
        return;
      }
    }
    (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x14))(param_1);
    _Dst = (void *)(*(int *)(unaff_ESI + 0x20) + iVar3 * 4);
    _Src = (void *)((int)_Dst + 4);
    FID_conflict__memcpy(_Dst,_Src,(*(int *)(unaff_ESI + 0x24) - (int)_Src >> 2) * 4);
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + -4;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x24))(1);
    }
    *(undefined1 *)(unaff_ESI + 0x21c) = 1;
  }
  return;
}

