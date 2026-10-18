// FUN_004f3790 @ 004f3790 body=[[004f3790, 004f37f6]]


void FUN_004f3790(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int in_EAX;
  int in_ECX;
  
  uVar5 = *(uint *)(in_EAX + 0xd8);
  iVar6 = *(int *)(in_EAX + 0xdc);
  iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(in_EAX + 0x18) + 300) + 0x80) + 8);
  bVar4 = *(byte *)(iVar7 + 8 + in_ECX);
  if (bVar4 != 0) {
    iVar7 = *(int *)(in_ECX + 0x48);
    puVar2 = (uint *)(iVar7 + (uint)bVar4 * 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar5;
    piVar1 = (int *)(iVar7 + (uint)bVar4 * 8 + 4);
    *piVar1 = *piVar1 + iVar6 + (uint)CARRY4(uVar3,uVar5);
    return;
  }
  *(char *)(iVar7 + 8 + in_ECX) = (char)(*(int *)(in_ECX + 0x4c) - *(int *)(in_ECX + 0x48) >> 3);
  FUN_00423920();
  return;
}

