// FUN_004a44b0 @ 004a44b0  (requested 004A44B0, first bytes: 8B 4A 4C 2B 4A 48 C7 00)


void FUN_004a44b0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *in_EAX;
  int iVar5;
  int in_EDX;
  
  iVar5 = *(int *)(in_EDX + 0x4c);
  iVar1 = *(int *)(in_EDX + 0x48);
  *in_EAX = 0;
  iVar5 = iVar5 - iVar1 >> 3;
  in_EAX[1] = 0;
  if (1 < iVar5) {
    iVar5 = iVar5 + -1;
    puVar4 = *(uint **)(in_EDX + 0x48);
    do {
      uVar2 = puVar4[3];
      uVar3 = puVar4[2];
      if (((int)in_EAX[1] <= (int)uVar2) && (((int)in_EAX[1] < (int)uVar2 || (*in_EAX < uVar3)))) {
        *in_EAX = uVar3;
        in_EAX[1] = uVar2;
      }
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 2;
    } while (iVar5 != 0);
  }
  return;
}

