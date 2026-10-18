// FUN_006e2150 @ 006e2150 body=[[006e2150, 006e2196]]


void FUN_006e2150(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_EAX;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x494 + in_ECX);
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x4d4) + uVar4 * 8);
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x554 + in_ECX);
  iVar2 = *(int *)(in_ECX + 0x594);
  in_EAX[1] = *(uint *)(*(int *)(in_ECX + 0x4d4) + 4 + uVar4 * 8);
  uVar4 = *(uint *)(iVar2 + uVar3 * 8);
  iVar2 = *(int *)(iVar2 + 4 + uVar3 * 8);
  *in_EAX = uVar1;
  uVar1 = *in_EAX;
  *in_EAX = *in_EAX + uVar4;
  in_EAX[1] = in_EAX[1] + iVar2 + (uint)CARRY4(uVar1,uVar4);
  return;
}

