// FUN_00612ac0 @ 00612ac0 body=[[00612ac0, 00612b83]]


void FUN_00612ac0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  while( true ) {
    iVar4 = in_EAX * 2 + 2;
    if (in_ECX <= iVar4) break;
    iVar2 = *(int *)(iVar4 * 0x20 + -0x14 + unaff_ESI);
    iVar3 = iVar4 * 0x20 + unaff_ESI;
    if ((iVar2 <= *(int *)(iVar3 + 0xc)) &&
       ((iVar2 < *(int *)(iVar3 + 0xc) || (*(uint *)(iVar3 + -0x18) < *(uint *)(iVar3 + 8))))) {
      iVar4 = in_EAX * 2 + 1;
    }
    iVar3 = iVar4 * 0x20 + unaff_ESI;
    *(undefined4 *)(in_EAX * 0x20 + unaff_ESI) = *(undefined4 *)(iVar4 * 0x20 + unaff_ESI);
    iVar2 = in_EAX * 0x20 + unaff_ESI;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar3 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
    in_EAX = iVar4;
  }
  if (iVar4 == in_ECX) {
    puVar1 = (undefined4 *)(in_ECX * 0x20 + -0x20 + unaff_ESI);
    *(undefined4 *)(in_EAX * 0x20 + unaff_ESI) = *puVar1;
    iVar4 = in_EAX * 0x20 + unaff_ESI;
    *(undefined4 *)(iVar4 + 8) = puVar1[2];
    *(undefined4 *)(iVar4 + 0xc) = puVar1[3];
    *(undefined4 *)(iVar4 + 0x10) = puVar1[4];
    *(undefined4 *)(iVar4 + 0x14) = puVar1[5];
    *(undefined4 *)(iVar4 + 0x18) = puVar1[6];
    *(undefined4 *)(iVar4 + 0x1c) = puVar1[7];
  }
  FUN_00612f50();
  return;
}

