// FUN_0095fc50 @ 0095fc50 body=[[0095fc50, 0095fcab]]


void FUN_0095fc50(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int in_EAX;
  bool bVar4;
  
  puVar1 = (uint *)(in_EAX + 0x118);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_1;
  *(int *)(in_EAX + 0x11c) = *(int *)(in_EAX + 0x11c) + param_2 + (uint)CARRY4(uVar2,param_1);
  iVar3 = *(int *)(in_EAX + 0x11c);
  bVar4 = iVar3 < 0;
  if (iVar3 < 1) {
    if (bVar4) {
      *(undefined4 *)(in_EAX + 0x118) = 0;
      *(undefined4 *)(in_EAX + 0x11c) = 0;
    }
    iVar3 = *(int *)(in_EAX + 0x11c);
    bVar4 = false;
    if (iVar3 < 0) {
      return;
    }
  }
  if ((iVar3 != 0 && !bVar4) || (0x50000 < *(uint *)(in_EAX + 0x118))) {
    *(undefined4 *)(in_EAX + 0x118) = 0x50000;
    *(undefined4 *)(in_EAX + 0x11c) = 0;
  }
  return;
}

