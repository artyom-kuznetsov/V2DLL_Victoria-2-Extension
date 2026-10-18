// FUN_0053f4b0 @ 0053f4b0 body=[[0053f4b0, 0053f5be]]


void FUN_0053f4b0(void)

{
  void *_Src;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  void *_Dst;
  int unaff_ESI;
  undefined4 local_14;
  
  local_14 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0x1574) - *(int *)(unaff_ESI + 0x1570) & 0xfffffffcU)) {
    do {
      iVar5 = local_14 * 4;
      iVar2 = *(int *)(iVar5 + *(int *)(unaff_ESI + 0x1570));
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar2 + 8) * 4);
      cVar1 = *(char *)(iVar2 + 0x20);
      cVar6 = FUN_0051b040(*(undefined4 *)
                            (*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x20) * 4));
      if ((cVar6 == '\0') ||
         ((cVar1 != '\0' && ((*(int *)(iVar3 + 300) == 0 || (*(int *)(iVar3 + 0x158) == 0)))))) {
        FUN_00471640();
        puVar4 = *(undefined4 **)(iVar5 + *(int *)(unaff_ESI + 0x1570));
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        _Dst = (void *)(*(int *)(unaff_ESI + 0x1570) + iVar5);
        _Src = (void *)((int)_Dst + 4);
        FID_conflict__memcpy(_Dst,_Src,(*(int *)(unaff_ESI + 0x1574) - (int)_Src >> 2) * 4);
        *(int *)(unaff_ESI + 0x1574) = *(int *)(unaff_ESI + 0x1574) + -4;
        FUN_0053f980(unaff_ESI);
        local_14 = local_14 + -1;
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(unaff_ESI + 0x1574) - *(int *)(unaff_ESI + 0x1570) >> 2);
  }
  return;
}

