// FUN_00534710 @ 00534710 body=[[00534710, 0053480a]]


void FUN_00534710(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *unaff_ESI;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa60) + 0x230);
  uVar2 = *(uint *)(*(int *)(param_1 + 0xa60) + param_2 * 8);
  lVar4 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
  iVar3 = *(int *)(DAT_012586dc + 0x50);
  uVar5 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  lVar4 = __allmul(lVar4 + 0x8000,(uint)uVar5 + *(uint *)(iVar3 + 0x48),
                   (int)((ulonglong)uVar5 >> 0x20) + *(int *)(iVar3 + 0x4c) +
                   (uint)CARRY4((uint)uVar5,*(uint *)(iVar3 + 0x48)));
  *unaff_ESI = lVar4 >> 0xf;
  if (((param_2 != 0x26) && (param_2 != 0x27)) && (param_2 != 0x28)) {
    uVar1 = *(uint *)(param_1 + 0x500);
    lVar4 = __allmul(uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11,
                     *(undefined4 *)(iVar3 + 0x170),*(undefined4 *)(iVar3 + 0x174));
    lVar4 = __allmul((lVar4 >> 0xf) + CONCAT44(DAT_00f1f7b4,DAT_00f1f7b0),(int)*unaff_ESI,
                     *(undefined4 *)((int)unaff_ESI + 4));
    *unaff_ESI = lVar4 >> 0xf;
  }
  return;
}

