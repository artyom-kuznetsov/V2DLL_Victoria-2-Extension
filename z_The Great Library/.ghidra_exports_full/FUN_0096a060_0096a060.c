// FUN_0096a060 @ 0096a060 body=[[0096a060, 0096a0af]]


void FUN_0096a060(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  int in_ECX;
  uint *unaff_ESI;
  undefined8 uVar4;
  
  iVar1 = *(int *)(in_EAX + 0x28);
  uVar2 = *(uint *)(*(int *)(*(int *)(in_ECX + 0xbc) + iVar1 * 0x10) + 0x14);
  *unaff_ESI = uVar2 << 0xf;
  uVar3 = *(uint *)(*(int *)(in_ECX + 0x50) + iVar1 * 4);
  unaff_ESI[1] = ((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11;
  uVar4 = __alldiv(*unaff_ESI << 0xf,unaff_ESI[1] << 0xf | *unaff_ESI >> 0x11,uVar3 << 0xf,
                   uVar3 >> 0x11);
  *(undefined8 *)unaff_ESI = uVar4;
  return;
}

