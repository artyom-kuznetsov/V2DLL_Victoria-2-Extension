// FUN_008977c0 @ 008977c0 body=[[008977c0, 0089783d]]


void FUN_008977c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  longlong lVar3;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  uVar2 = *(uint *)(in_ECX + 0x20);
  lVar3 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
  lVar3 = lVar3 + *(longlong *)(iVar1 + 2000);
  *(longlong *)(iVar1 + 2000) = lVar3;
  if (((int)((ulonglong)lVar3 >> 0x20) < 1) && (lVar3 < 0)) {
    *(undefined4 *)(iVar1 + 2000) = 0;
    *(undefined4 *)(iVar1 + 0x7d4) = 0;
  }
  return;
}

