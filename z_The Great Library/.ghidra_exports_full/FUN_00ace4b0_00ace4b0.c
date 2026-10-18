// FUN_00ace4b0 @ 00ace4b0 body=[[00ace4b0, 00ace52c]]


void FUN_00ace4b0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  
  FUN_00ad26a0(in_ECX + 0x30,in_ECX + 0xb0);
  uVar1 = *(uint *)(in_ECX + 400);
  iVar2 = *(int *)(in_ECX + 0x10);
  iVar3 = *(int *)(in_ECX + 0xc);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = (uint)*(ushort *)(*(int *)(in_ECX + 0x18c) + uVar6 * 2);
      iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar4 * 4) + 4);
      if (iVar5 == -1) {
        iVar5 = in_ECX + 0x70;
      }
      else {
        iVar5 = iVar5 * 0x40 + iVar3;
      }
      FUN_00ad26a0(uVar4 * 0x40 + iVar2,iVar5);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return;
}

