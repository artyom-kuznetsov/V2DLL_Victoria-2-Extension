// FUN_004b9bd0 @ 004b9bd0 body=[[004b9bd0, 004b9c5f]]


void FUN_004b9bd0(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  uint *unaff_ESI;
  longlong lVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x1a4);
  *unaff_ESI = uVar1 << 0xf;
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x9c) + 0x260);
  unaff_ESI[1] = ((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11;
  lVar3 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
  lVar3 = __allmul(lVar3 + 0x8000,*unaff_ESI,unaff_ESI[1]);
  lVar3 = lVar3 >> 0xf;
  *(longlong *)unaff_ESI = lVar3;
  if (((int)((ulonglong)lVar3 >> 0x20) < 1) && (lVar3 < 0)) {
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
  }
  if ((-1 < (int)unaff_ESI[1]) && ((0 < (int)unaff_ESI[1] || (0x140000 < *unaff_ESI)))) {
    *unaff_ESI = 0x140000;
    unaff_ESI[1] = 0;
  }
  return;
}

