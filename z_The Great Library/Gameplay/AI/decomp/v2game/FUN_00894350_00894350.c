// FUN_00894350 @ 00894350 body=[[00894350, 008943aa]]


void FUN_00894350(int param_1)

{
  uint uVar1;
  int in_ECX;
  longlong lVar2;
  
  uVar1 = *(uint *)(in_ECX + 0x20);
  lVar2 = __alldiv(uVar1 << 0x1e,
                   (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2,
                   0x1f40000,0);
  FUN_00965240(lVar2 + *(longlong *)(*(int *)(param_1 + 0x14) + 0x128));
  return;
}

