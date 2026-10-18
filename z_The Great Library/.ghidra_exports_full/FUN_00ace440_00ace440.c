// FUN_00ace440 @ 00ace440 body=[[00ace440, 00ace4a3]]


void FUN_00ace440(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(in_ECX + 400);
  iVar2 = *(int *)(in_ECX + 0x10);
  iVar3 = *(int *)(in_ECX + 0xc);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = (uint)*(ushort *)(*(int *)(in_ECX + 0x18c) + uVar6 * 2);
      iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar5 * 4) + 4);
      if (iVar4 != -1) {
        FUN_00ad26a0(uVar5 * 0x40 + iVar2,iVar4 * 0x40 + iVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return;
}

