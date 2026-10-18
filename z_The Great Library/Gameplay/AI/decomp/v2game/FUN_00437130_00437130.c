// FUN_00437130 @ 00437130 body=[[00437130, 00437162]]


/* WARNING: Removing unreachable block (ram,0x00437246) */

void FUN_00437130(longlong *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int in_ECX;
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 != 0 || param_3 != 0) {
    uVar1 = __allmul(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),param_2,param_3);
    uVar2 = __alldiv((int)(uVar1 & 0x7fffffff8000),
                     (int)((longlong)uVar1 >> 0x2f) << 0xf |
                     (uint)((uVar1 & 0x7fffffff8000) >> 0x20),DAT_00f0aac8,DAT_00f0aacc);
    FUN_00525770(param_4,uVar2);
    lVar3 = __allmul(DAT_00f0aac8,DAT_00f0aacc,uStack_10,uStack_c);
    lVar3 = lVar3 >> 0xf;
    if (((int)((ulonglong)lVar3 >> 0x20) < 1) && (lVar3 < 0)) {
      lVar3 = 0;
    }
    uVar2 = __alldiv(param_2 << 0xf,param_3 << 0xf | param_2 >> 0x11,DAT_00f0aac8,DAT_00f0aacc);
    lVar4 = __allmul(uVar2,DAT_00f0aac8,DAT_00f0aacc);
    if (0 < lVar4 >> 0xf) {
      uVar2 = __alldiv(lVar3 << 0xf,lVar4 >> 0xf);
      *(int *)(in_ECX + 8) = (int)uVar2;
      *param_1 = lVar3;
      *(int *)(in_ECX + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
      return;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  return;
}

