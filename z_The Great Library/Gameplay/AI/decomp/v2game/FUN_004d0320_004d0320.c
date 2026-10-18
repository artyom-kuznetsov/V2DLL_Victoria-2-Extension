// FUN_004d0320 @ 004d0320 body=[[004d0320, 004d03cd]]


void FUN_004d0320(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_EAX;
  
  iVar4 = *(int *)(param_1 + 0x1d0);
  if (iVar4 != 0) {
    uVar5 = *(uint *)(iVar4 + 0xb8);
    iVar4 = *(int *)(iVar4 + 0xbc);
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x5c) * 4);
    puVar2 = (uint *)(iVar6 + 0xe78);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar5;
    *(int *)(iVar6 + 0xe7c) = *(int *)(iVar6 + 0xe7c) + iVar4 + (uint)CARRY4(uVar3,uVar5);
    iVar6 = *(int *)(iVar6 + (DAT_01258738 + 0xd) * 0x10);
    puVar2 = (uint *)(iVar6 + 0x40);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar5;
    piVar1 = (int *)(iVar6 + 0x44);
    *piVar1 = *piVar1 + iVar4 + (uint)CARRY4(uVar3,uVar5);
  }
  FUN_004d61d0();
  for (iVar4 = *(int *)(in_EAX + 0x60); (iVar4 != 0 && (param_1 != iVar4));
      iVar4 = *(int *)(iVar4 + 0x224)) {
  }
  FUN_004d5fd0(iVar4);
  return;
}

