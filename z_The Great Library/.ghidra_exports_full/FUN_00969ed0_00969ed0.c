// FUN_00969ed0 @ 00969ed0 body=[[00969ed0, 00969f80]]


void FUN_00969ed0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *unaff_EDI;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1 / 100;
  if (uVar1 == 0) {
    *(undefined4 *)unaff_EDI = 0;
    *(undefined4 *)((int)unaff_EDI + 4) = 0;
    return;
  }
  lVar3 = __alldiv(param_1[0x1e],param_1[0x1f],100,0);
  lVar4 = __alldiv(param_1[0x1c],param_1[0x1d],100,0);
  lVar5 = __alldiv(param_1[0x1a],param_1[0x1b],100,0);
  lVar5 = lVar3 + lVar4 + lVar5;
  uVar2 = (uint)lVar5;
  *(uint *)((int)unaff_EDI + 4) = (int)((ulonglong)lVar5 >> 0x20) * 0x8000 | uVar2 >> 0x11;
  uVar6 = __alldiv(uVar2 * 0x40000000,*(int *)((int)unaff_EDI + 4) << 0xf | (uVar2 & 0x1ffff) >> 2,
                   uVar1 << 0xf,uVar1 >> 0x11);
  *unaff_EDI = uVar6;
  return;
}

