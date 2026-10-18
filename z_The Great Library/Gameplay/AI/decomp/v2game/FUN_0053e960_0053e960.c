// FUN_0053e960 @ 0053e960 body=[[0053e960, 0053e99f]]


void FUN_0053e960(void)

{
  uint uVar1;
  longlong *unaff_ESI;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
  uVar2 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  lVar3 = __allmul(uVar2,0x18000,0);
  *unaff_ESI = lVar3 >> 0xf;
  return;
}

