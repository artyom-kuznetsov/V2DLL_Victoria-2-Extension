// FUN_0082ece0 @ 0082ece0 body=[[0082ece0, 0082edd8]]


/* WARNING: Removing unreachable block (ram,0x0082ed09) */
/* WARNING: Removing unreachable block (ram,0x0082eda2) */

void FUN_0082ece0(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  int unaff_ESI;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = CONCAT44(param_5,param_4);
  lVar2 = FUN_00b31c36();
  if (*(longlong *)(unaff_ESI + 0x20) < lVar2) {
    *param_1 = param_4;
    param_1[1] = param_5;
    return;
  }
  lVar3 = __allmul();
  lVar3 = lVar3 >> 0xf;
  if (*(char *)(unaff_ESI + 0x28) == '\0') {
    if (lVar2 <= lVar1) {
      __allmul(*(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24),param_2,param_3);
      FUN_0048bfc0();
      __alldiv();
      FUN_0082ec40();
      lVar2 = __allmul();
      *(longlong *)param_1 = (lVar3 - (lVar2 >> 0xf)) + lVar1;
      return;
    }
    FUN_0082ec40();
    *param_1 = param_4 - (uint)lVar3;
    param_1[1] = (param_5 - (int)((ulonglong)lVar3 >> 0x20)) - (uint)(param_4 < (uint)lVar3);
    return;
  }
  FUN_0082ec40();
  lVar2 = __allmul();
  *(longlong *)param_1 = ((lVar2 >> 0xf) - lVar3) + lVar1;
  return;
}

