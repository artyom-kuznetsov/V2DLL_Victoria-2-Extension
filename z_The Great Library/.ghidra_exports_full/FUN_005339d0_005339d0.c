// FUN_005339d0 @ 005339d0 body=[[005339d0, 00533ab0]]


/* WARNING: Removing unreachable block (ram,0x00533a79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_005339d0(longlong *param_1)

{
  uint uVar1;
  int unaff_EDI;
  longlong lVar2;
  
  if ((_DAT_013f1cc8 & 1) == 0) {
    _DAT_013f1cc8 = _DAT_013f1cc8 | 1;
    uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x74);
    _DAT_013f1cc0 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  }
  uVar1 = *(uint *)(*(int *)(unaff_EDI + 0xa60) + 0x3b8);
  lVar2 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  lVar2 = lVar2 + _DAT_013f1cc0 + *(longlong *)(unaff_EDI + 0xe70);
  if (0x7fff < lVar2) {
    *(undefined4 *)param_1 = 0x8000;
    *(undefined4 *)((int)param_1 + 4) = 0;
    return param_1;
  }
  *param_1 = lVar2;
  return param_1;
}

