// FUN_00612760 @ 00612760 body=[[00612760, 006127f1]]


void FUN_00612760(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  while( true ) {
    iVar2 = in_EAX * 2 + 2;
    if (unaff_ESI <= iVar2) break;
    iVar1 = *(int *)(iVar2 * 0x10 + -4 + in_ECX);
    iVar3 = iVar2 * 0x10 + in_ECX;
    if ((iVar1 <= *(int *)(iVar3 + 0xc)) &&
       ((iVar1 < *(int *)(iVar3 + 0xc) || (*(uint *)(iVar3 + -8) < *(uint *)(iVar3 + 8))))) {
      iVar2 = in_EAX * 2 + 1;
    }
    *(undefined4 *)(in_ECX + in_EAX * 0x10) = *(undefined4 *)(in_ECX + iVar2 * 0x10);
    *(undefined4 *)(in_ECX + 8 + in_EAX * 0x10) = *(undefined4 *)(in_ECX + 8 + iVar2 * 0x10);
    *(undefined4 *)(in_ECX + 0xc + in_EAX * 0x10) = *(undefined4 *)(in_ECX + 0xc + iVar2 * 0x10);
    in_EAX = iVar2;
  }
  if (iVar2 == unaff_ESI) {
    iVar2 = in_ECX + -0x10 + unaff_ESI * 0x10;
    *(undefined4 *)(in_ECX + in_EAX * 0x10) = *(undefined4 *)(in_ECX + -0x10 + unaff_ESI * 0x10);
    *(undefined4 *)(in_ECX + 8 + in_EAX * 0x10) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(in_ECX + 0xc + in_EAX * 0x10) = *(undefined4 *)(iVar2 + 0xc);
  }
  FUN_00719cc0();
  return;
}

