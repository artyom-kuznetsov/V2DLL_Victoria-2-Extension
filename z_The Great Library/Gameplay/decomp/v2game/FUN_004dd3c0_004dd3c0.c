// FUN_004dd3c0 @ 004dd3c0  (requested 004DD3C0, first bytes: 55 8B EC 83 E4 F8 51 53)


void FUN_004dd3c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  undefined4 in_ECX;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x128);
  uVar2 = *(uint *)(in_EAX + 0x58);
  uVar3 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,uVar1 << 0xf,
                   ((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
  lVar4 = __allmul(uVar3,*(undefined4 *)(*(int *)(in_EAX + 0x1d4) + 0xe8),
                   *(undefined4 *)(*(int *)(in_EAX + 0x1d4) + 0xec));
  FUN_0047dbb0(in_ECX,param_1 + 0x24);
  FUN_0047de60(in_ECX,lVar4 >> 0xf);
  FUN_0047dca0(param_2);
  FUN_0047d9e0(in_ECX,0xc34f8000,0);
  return;
}

