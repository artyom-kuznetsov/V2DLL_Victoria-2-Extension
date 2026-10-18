// FUN_0047dec0 @ 0047dec0 body=[[0047dec0, 0047def4]]


void FUN_0047dec0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *in_EAX;
  int in_ECX;
  int iVar5;
  
  iVar5 = *(int *)(in_ECX + 0x4c);
  iVar2 = *(int *)(in_ECX + 0x48);
  *in_EAX = 0;
  iVar5 = iVar5 - iVar2 >> 3;
  in_EAX[1] = 0;
  if (1 < iVar5) {
    iVar5 = iVar5 + -1;
    puVar4 = *(uint **)(in_ECX + 0x48);
    do {
      uVar3 = puVar4[2];
      uVar1 = *in_EAX;
      *in_EAX = *in_EAX + uVar3;
      in_EAX[1] = in_EAX[1] + puVar4[3] + (uint)CARRY4(uVar1,uVar3);
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 2;
    } while (iVar5 != 0);
  }
  return;
}

