// FUN_004a4500 @ 004a4500 body=[[004a4500, 004a4548]]


void FUN_004a4500(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *in_EAX;
  int in_ECX;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(in_ECX + 0x1d8);
  uVar2 = *(uint *)(in_ECX + 0x170);
  uVar9 = uVar1 + *(uint *)(in_ECX + 0x170);
  iVar3 = *(int *)(in_ECX + 0x1dc);
  iVar4 = *(int *)(in_ECX + 0x174);
  uVar5 = *(uint *)(in_ECX + 0x160);
  iVar6 = *(int *)(in_ECX + 0x164);
  *in_EAX = uVar9 + *(uint *)(in_ECX + 0x160);
  uVar7 = *(uint *)(in_ECX + 0x168);
  uVar8 = *(uint *)(in_ECX + 0x158);
  uVar10 = uVar7 + *(uint *)(in_ECX + 0x158);
  in_EAX[1] = iVar3 + iVar4 + (uint)CARRY4(uVar1,uVar2) + iVar6 + (uint)CARRY4(uVar9,uVar5);
  iVar3 = *(int *)(in_ECX + 0x16c);
  iVar4 = *(int *)(in_ECX + 0x15c);
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX - uVar10;
  in_EAX[1] = (in_EAX[1] - (iVar3 + iVar4 + (uint)CARRY4(uVar7,uVar8))) - (uint)(uVar1 < uVar10);
  return;
}

