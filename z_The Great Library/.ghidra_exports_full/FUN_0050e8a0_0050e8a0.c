// FUN_0050e8a0 @ 0050e8a0 body=[[0050e8a0, 0050e8f6]]


void FUN_0050e8a0(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  undefined8 uVar4;
  
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
  uVar4 = __allmul(*(undefined4 *)(in_EAX + 2000),*(undefined4 *)(in_EAX + 0x7d4),0x1f40000,0);
  uVar2 = (uint)uVar4 >> 0x1e | (int)((ulonglong)uVar4 >> 0x20) << 2;
  uVar4 = __allmul(uVar2,(int)uVar2 >> 0x1f,1000,0);
  uVar3 = __alldiv(uVar4,iVar1,iVar1 >> 0x1f);
  *unaff_ESI = uVar3;
  return;
}

