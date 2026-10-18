// FUN_0052b5d0 @ 0052b5d0 body=[[0052b5d0, 0052b60b]]


void FUN_0052b5d0(void)

{
  uint *in_EAX;
  uint *puVar1;
  int in_EDX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  puVar1 = *(uint **)(in_EDX + (DAT_00f096c8 + 0xb) * 0x10);
  *in_EAX = 0;
  uVar4 = *in_EAX;
  in_EAX[1] = 0;
  uVar3 = in_EAX[1];
  iVar2 = 0xb;
  do {
    bVar5 = CARRY4(uVar4,*puVar1);
    uVar4 = uVar4 + *puVar1;
    uVar3 = uVar3 + puVar1[1] + (uint)bVar5;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *in_EAX = uVar4;
  in_EAX[1] = uVar3;
  return;
}

