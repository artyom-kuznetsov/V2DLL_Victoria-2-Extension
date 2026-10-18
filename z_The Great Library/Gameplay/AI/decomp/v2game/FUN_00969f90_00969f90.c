// FUN_00969f90 @ 00969f90 body=[[00969f90, 0096a052]]


void FUN_00969f90(uint *param_1)

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
  lVar3 = __alldiv(param_1[0x24],param_1[0x25],100,0);
  lVar4 = __alldiv(param_1[0x22],param_1[0x23],100,0);
  lVar5 = __alldiv(param_1[0x20],param_1[0x21],100,0);
  lVar5 = lVar3 + lVar4 + lVar5;
  uVar2 = (uint)lVar5;
  *(uint *)((int)unaff_EDI + 4) = (int)((ulonglong)lVar5 >> 0x20) * 0x8000 | uVar2 >> 0x11;
  uVar6 = __alldiv(uVar2 * 0x40000000,*(int *)((int)unaff_EDI + 4) << 0xf | (uVar2 & 0x1ffff) >> 2,
                   uVar1 << 0xf,uVar1 >> 0x11);
  *unaff_EDI = uVar6;
  return;
}

