// FUN_00568460 @ 00568460 body=[[00568460, 005684ee] [005684f2, 00568601] [00568605, 0056862a] [00568630, 00568675]]


void FUN_00568460(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *_Dst;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b462d6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(unaff_EDI + 0x30c) = 0;
  iVar5 = 0;
  if (0 < *(int *)(unaff_EDI + 0x2e0) - *(int *)(unaff_EDI + 0x2dc)) {
    do {
      local_8 = 0xffffffff;
      puVar6 = (undefined4 *)0x0;
      puVar3 = DAT_0125fdd8;
      if (DAT_0125fdd8 == (undefined4 *)0x0) {
        iVar2 = FUN_00aae9af(0x1c);
        local_8 = 0;
        if (iVar2 != 0) {
          puVar6 = (undefined4 *)FUN_008b0060();
        }
        puVar1 = DAT_0125fdd8;
        local_8 = 1;
        puVar3 = puVar6;
        if ((puVar6 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
          FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar1);
        }
      }
      DAT_0125fdd8 = puVar3;
      if (*(char *)(*(int *)(DAT_0125fdd8[3] + iVar5 * 4) + 0x4c) == '\0') {
        *(undefined1 *)(iVar5 + *(int *)(unaff_EDI + 0x2dc)) = 1;
      }
      else {
        *(undefined1 *)(iVar5 + *(int *)(unaff_EDI + 0x2dc)) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_EDI + 0x2e0) - *(int *)(unaff_EDI + 0x2dc));
  }
  local_8 = 0xffffffff;
  iVar5 = 0;
  if (*(int *)(unaff_EDI + 0x300) != *(int *)(unaff_EDI + 0x2fc) &&
      -1 < *(int *)(unaff_EDI + 0x300) - *(int *)(unaff_EDI + 0x2fc)) {
    do {
      *(undefined1 *)(iVar5 + *(int *)(unaff_EDI + 0x2fc)) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(unaff_EDI + 0x300) - *(int *)(unaff_EDI + 0x2fc));
  }
  puVar3 = DAT_0125fdd8;
  if (DAT_0125fdd8 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_00aae9af(0x1c);
    local_8 = 2;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 0x1ff;
      *puVar3 = 0;
      _Dst = (void *)FUN_00aad56b(0x7fc);
      puVar3[2] = _Dst;
      _memset(_Dst,0,puVar3[1] * 4);
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    puVar6 = DAT_0125fdd8;
    local_8 = 3;
    if ((puVar3 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
      FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar6);
    }
  }
  DAT_0125fdd8 = puVar3;
  puVar3 = DAT_0125fdd8;
  local_8 = 0xffffffff;
  piVar4 = DAT_0125fdd8 + 3;
  iVar5 = 0;
  if (0 < (int)(DAT_0125fdd8[4] - DAT_0125fdd8[3] & 0xfffffffc)) {
    do {
      FUN_005bd130();
      iVar5 = iVar5 + 1;
    } while (iVar5 < puVar3[4] - *piVar4 >> 2);
  }
  FUN_0056c480(unaff_EDI);
  *(undefined4 *)(unaff_EDI + 0x280) = 1;
  ExceptionList = local_10;
  return;
}

