// FUN_0067d840 @ 0067d840 body=[[0067d840, 0067d931]]


undefined4 FUN_0067d840(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(char *)(in_ECX + 0x12d0) != '\0') {
    if (*(char *)(in_EAX + 0x12d0) == '\0') {
      return 1;
    }
    if (*(char *)(in_ECX + 0x12d0) != '\0') goto LAB_0067d87f;
  }
  if (*(char *)(in_EAX + 0x12d0) != '\0') {
    return 0;
  }
LAB_0067d87f:
  uVar1 = *(int *)(*(int *)(in_EAX + 0xbcc) + 0x28c) + *(int *)(in_EAX + 0xea0);
  uVar6 = __alldiv(uVar1 * 0x40000000,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  uVar1 = *(uint *)(in_EAX + 0x1a0);
  uVar3 = uVar1 + (uint)uVar6;
  iVar4 = *(int *)(in_EAX + 0x1a4);
  uVar2 = *(int *)(*(int *)(in_ECX + 0xbcc) + 0x28c) + *(int *)(in_ECX + 0xea0);
  uVar7 = __alldiv(uVar2 * 0x40000000,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
  uVar2 = *(uint *)(in_ECX + 0x1a0) + (uint)uVar7;
  iVar5 = *(int *)(in_ECX + 0x19c) +
          *(int *)(in_ECX + 0x1a4) + (int)((ulonglong)uVar7 >> 0x20) +
          (uint)CARRY4(*(uint *)(in_ECX + 0x1a0),(uint)uVar7) +
          (uint)CARRY4(*(uint *)(in_ECX + 0x198),uVar2);
  iVar4 = *(int *)(in_EAX + 0x19c) +
          iVar4 + (int)((ulonglong)uVar6 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar6) +
          (uint)CARRY4(*(uint *)(in_EAX + 0x198),uVar3);
  if ((iVar4 <= iVar5) &&
     ((iVar4 < iVar5 || (*(uint *)(in_EAX + 0x198) + uVar3 < *(uint *)(in_ECX + 0x198) + uVar2)))) {
    return 1;
  }
  return 0;
}

