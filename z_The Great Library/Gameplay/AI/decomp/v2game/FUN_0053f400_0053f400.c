// FUN_0053f400 @ 0053f400 body=[[0053f400, 0053f4a5]]


undefined4 FUN_0053f400(int param_1,char param_2)

{
  void *_Src;
  undefined4 *puVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int unaff_ESI;
  int *piVar4;
  
  iVar2 = *(int *)(unaff_ESI + 0x1574) - *(int *)(unaff_ESI + 0x1570) >> 2;
  iVar3 = 0;
  if (0 < iVar2) {
    piVar4 = *(int **)(unaff_ESI + 0x1570);
    do {
      if ((*(int *)(*piVar4 + 8) == param_1) && (*(char *)(*piVar4 + 0x20) == param_2)) {
        FUN_00471640();
        puVar1 = *(undefined4 **)(iVar3 * 4 + *(int *)(unaff_ESI + 0x1570));
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        _Dst = (void *)(*(int *)(unaff_ESI + 0x1570) + iVar3 * 4);
        _Src = (void *)((int)_Dst + 4);
        FID_conflict__memcpy(_Dst,_Src,(*(int *)(unaff_ESI + 0x1574) - (int)_Src >> 2) * 4);
        *(int *)(unaff_ESI + 0x1574) = *(int *)(unaff_ESI + 0x1574) + -4;
        FUN_0053f980(unaff_ESI);
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar2);
  }
  return 0;
}

