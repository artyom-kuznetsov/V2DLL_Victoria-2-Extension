// FUN_005dd3a0 @ 005dd3a0 body=[[005dd3a0, 005dd416]]


bool FUN_005dd3a0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  undefined8 uVar4;
  
  iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x28);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  uVar4 = __allmul(*(undefined4 *)(iVar1 + 2000),*(undefined4 *)(iVar1 + 0x7d4),0x1f40000,0);
  uVar2 = (uint)uVar4 >> 0x1e | (int)((ulonglong)uVar4 >> 0x20) << 2;
  uVar4 = __allmul(uVar2,(int)uVar2 >> 0x1f,1000,0);
  iVar3 = __alldiv(uVar4,iVar3,iVar3 >> 0x1f);
  return 999 < iVar3;
}

