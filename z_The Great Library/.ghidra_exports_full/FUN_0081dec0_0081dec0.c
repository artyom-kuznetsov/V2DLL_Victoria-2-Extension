// FUN_0081dec0 @ 0081dec0 body=[[0081dec0, 0081df50]]


undefined4 FUN_0081dec0(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(in_ECX + 0x1d8) - *(uint *)(in_ECX + 0x168);
  uVar4 = uVar3 - *(uint *)(in_ECX + 0x158);
  uVar5 = uVar4 + *(uint *)(in_ECX + 0x170);
  iVar2 = ((((*(int *)(in_ECX + 0x1dc) - *(int *)(in_ECX + 0x16c)) -
            (uint)(*(uint *)(in_ECX + 0x1d8) < *(uint *)(in_ECX + 0x168))) -
           *(int *)(in_ECX + 0x15c)) - (uint)(uVar3 < *(uint *)(in_ECX + 0x158))) +
          *(int *)(in_ECX + 0x174) + (uint)CARRY4(uVar4,*(uint *)(in_ECX + 0x170)) +
          *(int *)(in_ECX + 0x164) + (uint)CARRY4(uVar5,*(uint *)(in_ECX + 0x160));
  uVar3 = *(uint *)(in_EAX + 0x1d8) - *(uint *)(in_EAX + 0x168);
  uVar4 = uVar3 - *(uint *)(in_EAX + 0x158);
  uVar6 = uVar4 + *(uint *)(in_EAX + 0x170);
  iVar1 = ((((*(int *)(in_EAX + 0x1dc) - *(int *)(in_EAX + 0x16c)) -
            (uint)(*(uint *)(in_EAX + 0x1d8) < *(uint *)(in_EAX + 0x168))) -
           *(int *)(in_EAX + 0x15c)) - (uint)(uVar3 < *(uint *)(in_EAX + 0x158))) +
          *(int *)(in_EAX + 0x174) + (uint)CARRY4(uVar4,*(uint *)(in_EAX + 0x170)) +
          *(int *)(in_EAX + 0x164) + (uint)CARRY4(uVar6,*(uint *)(in_EAX + 0x160));
  if ((iVar2 <= iVar1) &&
     ((iVar2 < iVar1 || (uVar5 + *(uint *)(in_ECX + 0x160) < uVar6 + *(uint *)(in_EAX + 0x160))))) {
    return 1;
  }
  return 0;
}

