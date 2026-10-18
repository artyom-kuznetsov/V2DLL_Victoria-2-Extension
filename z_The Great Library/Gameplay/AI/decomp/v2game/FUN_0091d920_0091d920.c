// FUN_0091d920 @ 0091d920 body=[[0091d920, 0091d993]]


void FUN_0091d920(void)

{
  uint uVar1;
  int iVar2;
  int in_EAX;
  longlong *unaff_ESI;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x30) + 0x408);
  uVar3 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x14) * 4) +
                  (DAT_00f096c8 + 0xb) * 0x10);
  lVar4 = __allmul(*(undefined4 *)(iVar2 + 0x30),*(undefined4 *)(iVar2 + 0x34),uVar3);
  *unaff_ESI = lVar4 >> 0xf;
  return;
}

