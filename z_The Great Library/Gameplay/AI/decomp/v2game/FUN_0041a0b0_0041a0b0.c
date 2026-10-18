// FUN_0041a0b0 @ 0041a0b0 body=[[0041a0b0, 0041a0f0]]


void FUN_0041a0b0(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int in_EAX;
  int in_EDX;
  
  bVar3 = *(byte *)(in_EDX + 8 + in_EAX);
  if (bVar3 != 0) {
    puVar1 = (uint *)(*(int *)(in_EAX + 0x48) + (uint)bVar3 * 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + param_1;
    puVar1[1] = puVar1[1] + param_2 + (uint)CARRY4(uVar2,param_1);
    return;
  }
  *(char *)(in_EDX + 8 + in_EAX) = (char)(*(int *)(in_EAX + 0x4c) - *(int *)(in_EAX + 0x48) >> 3);
  FUN_00423920();
  return;
}

