// FUN_0047da90 @ 0047da90 body=[[0047da90, 0047daf7]]


void FUN_0047da90(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int in_EAX;
  
  bVar4 = *(byte *)(param_1 + 8 + in_EAX);
  if (bVar4 != 0) {
    iVar5 = *(int *)(in_EAX + 0x48);
    puVar2 = (uint *)(iVar5 + (uint)bVar4 * 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + -param_2;
    piVar1 = (int *)(iVar5 + (uint)bVar4 * 8 + 4);
    *piVar1 = (*piVar1 - (param_3 + (uint)(param_2 != 0))) + (uint)CARRY4(uVar3,-param_2);
    return;
  }
  *(char *)(param_1 + 8 + in_EAX) = (char)(*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 3);
  FUN_00423920();
  return;
}

