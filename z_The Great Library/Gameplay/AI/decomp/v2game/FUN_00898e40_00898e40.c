// FUN_00898e40 @ 00898e40 body=[[00898e40, 00898e96]]


void FUN_00898e40(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  longlong lVar5;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    puVar1 = (uint *)(*(int *)(iVar2 + 0x7c) + *(int *)(*(int *)(in_ECX + 0x28) + 0x28) * 8);
    lVar5 = __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    uVar4 = (uint)(lVar5 >> 0xf);
    uVar3 = *puVar1;
    *puVar1 = uVar4 + *puVar1;
    puVar1[1] = (int)((ulonglong)(lVar5 >> 0xf) >> 0x20) + puVar1[1] + (uint)CARRY4(uVar4,uVar3);
    FUN_004be780(iVar2 + 0x74);
  }
  return;
}

